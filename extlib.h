// ***********************************************************
// Project: Эмулятор программируемого калькулятора МК-61 на AVR
// http://code.google.com/p/mk61avr/
//
// SVN read-only: 
// http://mk61avr.googlecode.com/svn/trunk/ mk61avr-read-only
// 
// Copyright (C) 2009 digitalinvitro, vitasam70
// 
// Module name: extlib.h
//
// Module description: Модуль внешней памяти EEPROM
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
#ifndef _EXTLIB_H_
#define _EXTLIB_H_

/*************************************************************************
Name: HEX (inline function)
    
Input:    unsigned char val

          
Returns:  char
*************************************************************************/
inline char HEX(unsigned char val)
{
    if((val += '0') > '9')
    {
        val += ('A' - '0' - 0x0A);
    }
    
    return val;
}


extern unsigned char atoc(unsigned char *pStr);
extern void BlockWrEEPROM(unsigned char *eeprom, unsigned char *ram, unsigned char count);
extern void BlockRdEEPROM(unsigned char *eeprom, unsigned char *ram, unsigned char count);
extern void __sprintf_P(char *__s, const char *__fmt, ...) __attribute__((naked));

#endif // _EXTLIB_H_
