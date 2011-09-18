// ***********************************************************
// Project: Эмулятор программируемого калькулятора МК-61 на AVR
// http://code.google.com/p/mk61avr/
//
// SVN read-only:
// http://mk61avr.googlecode.com/svn/trunk/ mk61avr-read-only
//
// Copyright (C) 2009 digitalinvitro, vitasam70
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
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
//
// ***********************************************************
//
#ifndef _CONFIG_H_
#define _CONFIG_H_

#define DEBUG                 		// Ключ вывода вспомогательной отладочной информации!!!

//#define DEBUG_SCAN_DECODER    	// Ключ вывода отладочной информации по модулю декодера скан-кода

#define DEBUG_STORE           		// Ключ вывода отладочной информации по модулю хранилища программ STORE

#define LIMIT_NUMERIC 11

//#define VMLAB_SIMULATED

#define RC_OSC_CALIBRATE  			// TODO 

#define MK61_KEYPAD_IN_USE			// Используется клавиатура от МК61

//#define LCD_CONTRAST_MAX        	// Контрастность максимал

#endif // _CONFIG_H_

