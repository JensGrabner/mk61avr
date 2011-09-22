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
// Module name: gpio.h
//
// Module description: Конфигурация GPIO микроконтролллера
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
#ifndef _GPIO_H_
#define _GPIO_H_
#include <avr/io.h>
#include <inttypes.h>
#include <avr/pgmspace.h>
#include "config.h"

/* Конфигурация портов
   ввода-вывода
*/

// Порты дисплея
#define LCD_DATA_PORT           PORTC   //!< Порт, куда подключены линии данных дисплея
#define LCD_CTRL_PORT           PORTD   //!< Порт, куда подключены линии управления дисплея
#define LCD_DATA0_4BIT_PIN      4       //!< пин для бита 0 порта данных дисплея
#define LCD_DATA1_4BIT_PIN      5       //!< пин для бита 1 порта данных дисплея
#define LCD_DATA2_4BIT_PIN      6       //!< пин для бита 2 порта данных дисплея
#define LCD_DATA3_4BIT_PIN      7       //!< пин для бита 3 порта данных дисплея
#define LCD_RS_CTRL_PIN         5       //!< пин для RS порта контроля дисплея
#define LCD_RW_CTRL_PIN         6       //!< пин для RW порта контроля дисплея
#define LCD_E_CTRL_PIN          7       //!< пин для E порта контроля дисплея




#endif // _GPIO_H_
