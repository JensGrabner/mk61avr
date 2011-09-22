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
// Module name: uart_hwl.h
//
// Module description: �������������� UART ����������������
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
#ifndef _UART_HWL_H_
#define _UART_HWL_H_
#include <avr/io.h>
#include <inttypes.h>
#include <avr/pgmspace.h>
#include "config.h"

#ifdef UART_IN_USE
#ifdef UART_INT_MODE
#ifdef UART_POLL_MODE
#error Only one type of UART mode must be defined in config.h!
#endif // UART_POLL_MODE
#endif // UART_POLL_MODE
#endif // UART_IN_USE

#ifdef UART_IN_USE

// ��������� �������
void USART0_Init(uint32_t aBaudrate);


#endif // UART_IN_USE

#endif // _UART_HWL_H_
