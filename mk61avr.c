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
// Module name: mk61avr.c
//
// Module description: Main-файл проекта
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
#include <inttypes.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/sleep.h>
#include <avr/eeprom.h>
#include <avr/pgmspace.h>
#include <util/delay.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "config.h"
#include "display_hal.h"



/*! \fn int8_t main(void)
    \brief Main-функция проекта.
    \param void.
    \return Код ошибки.
*/
int main(void)
{
    int err = 0;

    _delay_ms(200);

    // Инициализиовать дисплей
    display_init((uint8_t)E_LcdDisp_ON);
    display_clear();

    _delay_ms(200);
    display_puts("MK-61-AVR v.1.0");

    return err;
}

