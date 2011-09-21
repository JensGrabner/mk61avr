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
// Module name: hardware_hal.h
//
// Module description: Generic Harware Abstraction Layer
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
#ifndef _HARDWARE_HAL_H_
#define _HARDWARE_HAL_H_

#include <avr/io.h>
#include <inttypes.h>
#include <avr/pgmspace.h>
#include "config.h"

#ifdef MK61_KEYPAD_IN_USE
#ifdef MK52_KEYPAD_IN_USE
#error Only one type of keyboard must be defined in config.h!
#endif // MK52_KEYPAD_IN_USE
#endif // MK61_KEYPAD_IN_USE


#endif // _HARDWARE_HAL_H_
