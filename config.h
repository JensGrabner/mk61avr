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
// Module name: config.h
//
// Module description: Конфигурационный файл проекта
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
#ifndef _CONFIG_H_
#define _CONFIG_H_

#define DEBUG                       //!< Вывод отладочной информации

/* Hardware конфигурационные флаги */

//#define MK61_KEYPAD_IN_USE          //!< Используется клавиатура от МК61
#define MK52_KEYPAD_IN_USE          //!< Используется клавиатура от МК52 (2 extra keys) 

#define HD44780_LCD_IN_USE          //!< Используется контроллер дисплея HD44780
//#define KS0073_LCD_IN_USE           //!< Используется контроллер дисплея KS0073

#define LCD_IO_MODE_IN_USE          //!< Используется IO port mode дисплея
//#define LCD_MEM_MAP_MODE_IN_USE     //!< Используется memory mapped mode дисплея



#endif // _CONFIG_H_

