// ***********************************************************
// Project: Эмулятор программируемого калькулятора МК-61 на AVR:
// http://code.google.com/p/mk61avr/
//
// Получить локальную копию проекта из GIT:
// git clone https://code.google.com/p/mk61avr/
//
// Дискуссия по проекту в Google Groups:
// http://groups.google.com/group/mk61avr_talks
//
// Copyright (C) 2009-2011 Алексей Сугоняев, Виталий Самуров
//
// Module name: display.c
//
// Module description:
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
#include "config.h"
#ifdef LED_12DIGIT_DISPLAY
#include "display.h"
#include <avr/interrupt.h>
#include <avr/pgmspace.h>

unsigned char  LED_BUFFER[16]; // Буфер для LED дисплея
unsigned char *pDig;           // Указатель текущего разряда LED дисплея
unsigned char LEDbit;          //

extern char disp[16];          // Буфер для хранениея CHAR эквивалента экрана

/*
 Таблица перекодировки DEC -> 7SEG
*/
unsigned char PROGMEM SEG7[13] =
/* -        0    1    2     3   4    5    6    7    8    9   */
 {0x02,0,0,0x7D,0x50,0x37,0x57,0x5A,0x4F,0x6F,0x51,0x7F,0x5F};


/*
 Событие развертки LED-дисплея - отображаемый очередной символ
*/
SIGNAL(SIG_OVERFLOW0)
{
 asm volatile(
  "push r28"                        "\n\t"
  "ldi r28, 0xA9"                   "\n\t"  // 0xD0 - константа задержки на разряде
  "out %[tcnt0], r28"               "\n\t"
  "in  r28, %[portd]"               "\n\t"
  "andi r28, 0x0F"                  "\n\t"
  "and __tmp_reg__, r28"            "\n\t"  // в tmp_reg значение младших 4 бит порта D
  "out %[portd], __tmp_reg__"       "\n\t"
  "out %[portc], __zero_reg__"      "\n\t"
  "out %[portb], __zero_reg__"      "\n\t"
  "lds r28, LEDbit"                 "\n\t"
  "lsl r28"                         "\n\t"
  "brcc L_D1%="                     "\n\t"
  "ldi r30, lo8(LED_BUFFER)"        "\n\t"
  "ldi r31, hi8(LED_BUFFER)"        "\n\t"
  "ldi r28, 0x01"                   "\n\t"
  "L_D1%=:"                         "\n\t"
  "sts LEDbit, r28"                 "\n\t"
  "out %[portc], r28"               "\n\t"
  "andi r28, 0xF0"                  "\n\t"
  "or r28, __tmp_reg__"             "\n\t"  // возратим в порт D младших 4 бита без изменения
  "out %[portd], r28"               "\n\t"
  "ld __tmp_reg__, Z+"              "\n\t"
  "out %[portb], __tmp_reg__"       "\n\t"
  "pop r28"                         "\n\t"
  : "=z" (pDig)
  : [portb] "I" (_SFR_IO_ADDR(PORTB)),
    [portd] "I" (_SFR_IO_ADDR(PORTD)),
    [portc] "I" (_SFR_IO_ADDR(PORTC)),
    [tcnt0] "I" (_SFR_IO_ADDR(TCNT0)),
    [point] "z" (pDig)
 );
}


void decode7seg(void)
{
 asm volatile(
  "push r30"                        "\n\t"
  "push r31"                        "\n\t"
  "do%=:"                           "\n\t"
  "ld  r30, X+"                     "\n\t"
  "cpi r30, '.'"                    "\n\t"
  "brne next_char%="                "\n\t"
  "ld r31, -Y"                      "\n\t"
  "ori r31, 0x80"                   "\n\t"
  "rjmp putbuff%="                  "\n\t"
  "next_char%=:"                    "\n\t"
  "subi r30, '-'"                   "\n\t"
  "ldi r31, lo8(SEG7)"              "\n\t"
  "add r30, r31"                    "\n\t"
  "ldi r31, hi8(SEG7)"              "\n\t"
  "adc r31, __zero_reg__"           "\n\t"
  "lpm r31, Z"                      "\n\t"
  "putbuff%=:"                      "\n\t"
  "st  Y+, r31"                     "\n\t"
  "loop%=:"                         "\n\t"
  "ldi r31, hi8(LED_BUFFER+8)"      "\n\t"
  "cpi r28, lo8(LED_BUFFER+8)"      "\n\t"
  "cpc r29, r31"                    "\n\t"
  "brcs do%="                       "\n\t"
  "pop r31"                         "\n\t"
  "pop r30"                         "\n\t"
  :
  : [pDisp] "x" (&disp[0]),
    [pLed]  "y" (&LED_BUFFER[0])
 );
}
#endif








