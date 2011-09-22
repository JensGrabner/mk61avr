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
// Module name: display_hal.h
//
// Module description: Display Harware Abstraction Layer
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
#ifndef _DISPLAY_HAL_H_
#define _DISPLAY_HAL_H_
#include <inttypes.h>
#include <avr/io.h>
#include <avr/pgmspace.h>
#include "config.h"

// Типы данных

/*! \enum LcdInitType
    \brief Тип инициализирования дисплея.
*/
enum LcdInitType
{
    E_LcdDisp_OFF = 0,          //!< Дисплей выключен
    E_LcdDisp_ON,               //!< Дисплей включен, курсор выключен
    E_LcdDisp_ON_Blink,         //!< Дисплей включен, курсор выключен, мигающий символ
    E_LcdDisp_ON_Cursor,        //!< Дисплей включен, курсор включен
    E_LcdDisp_ON_Cursor_Blink   //!< Дисплей включен, курсор включен, мигающий символ
};


// Протипы функций

void display_init(uint8_t aInitType);
void display_clear(void);
void display_home(void);
void display_gotoxy(uint8_t aX, uint8_t aY);
void display_putc(char aC);
void display_puts(const char *aS);


#endif // _DISPLAY_HAL_H_

