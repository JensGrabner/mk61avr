// ***********************************************************
// Project: Эмулятор программируемого калькулятора МК-61 на AVR:
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
// Module name: uart_hal.c
//
// Module description: UART Hardware Abstraction Layer
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
#include <avr/io.h>
#include <inttypes.h>
#include <avr/pgmspace.h>
#include "config.h"
#ifdef UART_IN_USE
#include "uart_hal.h"
#endif // #ifdef UART_IN_USE


#ifdef UART_IN_USE
/*! \fn void uart_init(uint32_t aBaudrate)
    \brief Инициализирует UART порт (аппаратно-независимо).
    \param Нет.
    \return Нет.
*/
void uart_init()
{
#ifdef UART_POLL_MODE
    uart_poll_init();
#endif // UART_POLL_MODE
}


/*! \fn void uart_send_byte(uint8_t aDataByte)
    \brief Отправляет байт в UART порт (аппаратно-независимо).
    \param Байт для передачи.
    \return Нет.
*/
void uart_send_byte(uint8_t aDataByte)
{
#ifdef UART_POLL_MODE
    uart_poll_send_byte(aDataByte);
#endif // UART_POLL_MODE
}


/*! \fn void uart_send_string(const char *aDataString)
    \brief Отправляет строку символов в UART порт (аппаратно-независимо).
    \param Указатель на строку символов.
    \return Нет.
*/
void uart_send_string(const char *aDataString)
{
#ifdef UART_POLL_MODE
    uart_poll_send_string(aDataString);
#endif // UART_POLL_MODE
}


/*! \fn uint8_t uart_receive_byte(void)
    \brief Принимает байт из UART порта (аппаратно-независимо).
    \param Нет.
    \return Принятый байт.
*/
uint8_t uart_receive_byte(void)
{
#ifdef UART_POLL_MODE
    return (uart_poll_receive_byte());
#endif // UART_POLL_MODE
}


/*! \fn void uart_new_line(void)
    \brief Посылает символ новой строки в UART порт.
    \param Нет.
    \return Нет.
*/
void uart_new_line(void)
{
    uart_send_string("\r\n");
}

#endif // UART_IN_USE





