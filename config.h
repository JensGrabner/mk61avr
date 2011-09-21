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
// Module name: config.h
//
// Module description: ���������������� ���� �������
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

#define DEBUG                       //!< ����� ���������� ����������

/* Hardware ���������������� ����� */

//#define MK61_KEYPAD_IN_USE          //!< ������������ ���������� �� ��61
#define MK52_KEYPAD_IN_USE          //!< ������������ ���������� �� ��52 (2 extra keys) 

#define HD44780_LCD_IN_USE          //!< ������������ ���������� ������� HD44780
//#define KS0073_LCD_IN_USE           //!< ������������ ���������� ������� KS0073

#define LCD_IO_MODE_IN_USE          //!< ������������ IO port mode �������
//#define LCD_MEM_MAP_MODE_IN_USE     //!< ������������ memory mapped mode �������



#endif // _CONFIG_H_

