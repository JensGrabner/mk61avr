// ***********************************************************
// Project: Эмулятор программируемого калькулятора МК-61 на Atmel AVR:
// http://code.google.com/p/mk61avr/
//
// Получить локальную копию проекта из GIT репозитория:
// git clone https://code.google.com/p/mk61avr/
//
// Дискуссия по проекту в Google Groups:
// http://groups.google.com/group/mk61avr_talks
//
// Copyright (C) 2009-2011 Алексей Сугоняев, Виталий Самуров
//
// Module name: uart_hwl.c
//
// Module description: Низкоуровневая UART функциональность
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
// MA  02110-1301, USA.
//
// ***********************************************************
//
#include <stdio.h>
#include <stdlib.h>
#include <avr/io.h>
#include <avr/pgmspace.h>
#include <inttypes.h>
#include <util/delay.h>
#include "config.h"
#ifdef UART_IN_USE
#include <util/setbaud.h>
#include "uart_hwl.h"
#endif // UART_IN_USE

#ifdef UART_IN_USE

#ifdef UART_POLL_MODE
/*! \fn void uart_poll_init(void)
    \brief Инициализирует UART порт.
    \param Нет.
    \return Нет.
*/
void uart_poll_init(void)
{
    // Установить скорость UART-а
   UBRRH = UBRRH_VALUE;
   UBRRL = UBRRL_VALUE;
#if USE_2X
   UCSRA |= (1 << U2X);
#else
   UCSRA &= ~(1 << U2X);
#endif

    // Установить формат фрейма: асинхронный режим, нет проверки четности,
    // 1 стоп-бит, 8 бит
    UCSRC = (1 << URSEL) | (0 << UMSEL) | (0 << UPM1) | (0 << UPM0)|
(0 << USBS) | (0 << UCSZ2) | (1 << UCSZ1) | (1 << UCSZ0);

    // Включить UART приемник и передатчик
    UCSRB = (1 << RXEN) | (1 << TXEN);
}


/*! \fn void uart_poll_send_byte(uint8_t aDataByte)
    \brief Отправляет байт в UART порт.
    \param Байт для передачи.
    \return none.
*/
void uart_poll_send_byte(uint8_t aDataByte)
{
    // Wait byte to be transmitted
    while((UCSRA & (1 << UDRE)) == 0);

    UDR = aDataByte;
}


/*! \fn void uart_poll_send_string(const char *aDataString)
    \brief Отправляет строку символов в UART порт.
    \param Указатель на строку символов.
    \return Нет.
*/
void uart_poll_send_string(const char *aDataString)
{
    // До тех пор, пока строка не пустая
    while (*aDataString)
    {
        uart_poll_send_byte(*aDataString);
        aDataString++;
    }
}


/*! \fn uint8_t uart_poll_receive_byte(void)
    \brief Принимает байт из UART порта.
    \param Нет.
    \return Принятый байт.
*/
uint8_t uart_poll_receive_byte(void)
{
    // Ждем, пока не придет байт
    while((UCSRA & (1 << RXC)) == 0);

    return UDR;
}

#endif // UART_POLL_MODE

#endif // UART_IN_USE






