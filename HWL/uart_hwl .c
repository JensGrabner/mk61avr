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
// Module name: uart_hwl.c
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
#include <avr/io.h>
#include <inttypes.h>
#include <stdlib.h>
#include <util/delay.h>
#include <avr/pgmspace.h>
#include "config.h"
#include "uart_hwl.h"

#ifdef UART_IN_USE

/*! \fn void USART0_Init(uint32_t aBaudrate)
    \brief �������������� UART.
    \param �������� �����.
    \return none.
*/
void USART0_Init(uint32_t aBaudrate)
{
    //// ���������� �������� UART-�
    //UBRR0H = (uint8_t) (aBaudrate >> 8);
    //UBRR0L = (uint8_t) aBaudrate;

    //// �������� UART �������� � ����������
    //UCSR0B = ( ( 1 << RXEN0 ) | ( 1 << TXEN0 ) );

    //// ���������� ������ ������: 8 data 2stop */
    //UCSR0C = (1<<USBS0)|(1<<UCSZ01)|(1<<UCSZ00);                //!< ��� Extended IO ���������
    ////UCSR0C = (1<<URSEL)|(1<<USBS0)|(1<<UCSZ01)|(1<<UCSZ00);   //!< ��� ��������� ��� Extended IO
}


#endif // UART_IN_USE






