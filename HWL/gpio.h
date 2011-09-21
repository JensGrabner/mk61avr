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
// Module name: gpio.h
//
// Module description: ����������� GPIO �����������������
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

/* ������������ ������
   �����-������
*/

// ����� �������
#define LCD_DATA_PORT           PORTC   //!< ����, ���� ���������� ����� ������ �������
#define LCD_CTRL_PORT           PORTD   //!< ����, ���� ���������� ����� ���������� �������
#define LCD_DATA0_4BIT_PIN      4       //!< ��� ��� ���� 0 ����� ������ �������
#define LCD_DATA1_4BIT_PIN      5       //!< ��� ��� ���� 1 ����� ������ �������
#define LCD_DATA2_4BIT_PIN      6       //!< ��� ��� ���� 2 ����� ������ �������
#define LCD_DATA3_4BIT_PIN      7       //!< ��� ��� ���� 3 ����� ������ �������
#define LCD_RS_CTRL_PIN         5       //!< ��� ��� RS ����� �������� �������
#define LCD_RW_CTRL_PIN         6       //!< ��� ��� RW ����� �������� �������
#define LCD_E_CTRL_PIN          7       //!< ��� ��� E ����� �������� �������




#endif // _GPIO_H_