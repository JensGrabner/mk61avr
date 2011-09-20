// ***********************************************************
// Project: �������� ���������������� ������������ ��-61 �� AVR:
// http://code.google.com/p/mk61avr/
//
// �������� ��������� ����� ������� �� GIT �����������:
// git clone https://code.google.com/p/mk61avr/
//
// ��������� �� ������� � Google Groups:
// http://groups.google.com/group/mk61avr_talks
//
// Copyright (C) 2009-2011 ������� ��������, ������� �������
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

// ���� ������

/*! \enum LcdInitType
    \brief ��� ����������������� �������.
*/
enum LcdInitType
{
    E_LcdDisp_OFF = 0,          //!< ������� ��������
    E_LcdDisp_ON,               //!< ������� �������, ������ ��������
    E_LcdDisp_ON_Blink,         //!< ������� �������, ������ ��������, �������� ������
    E_LcdDisp_ON_Cursor,        //!< ������� �������, ������ �������
    E_LcdDisp_ON_Cursor_Blink   //!< ������� �������, ������ �������, �������� ������
};


// ������� �������

void display_init(uint8_t aInitType);
void display_clear(void);
void display_home(void);
void display_gotoxy(uint8_t aX, uint8_t aY);
void display_putc(char aC);
void display_puts(const char *aS);


#endif // _DISPLAY_HAL_H_

