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
// Module name: uart_hwl.h
//
// Module description: Низкоуровневая UART функциональность
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

// Прототипы функций

#ifdef UART_POLL_MODE
void uart_poll_init(void);
void uart_poll_send_byte(uint8_t aDataByte);
void uart_poll_send_string(const char *aDataString);
void uart_poll_send_string_p(const char *progmem_s);
uint8_t uart_poll_receive_byte(void);
void uart_poll_new_line(void);
#endif // UART_POLL_MODE

#endif // UART_IN_USE

#endif // _UART_HWL_H_

