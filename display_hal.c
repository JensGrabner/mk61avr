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
// Module name: display_hal.c
//
// Module description: Display Hardware Abstraction Layer
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
#include <avr/pgmspace.h>
#include "config.h"
#include "display_hal.h"


/*! \fn void display_init(LcdInitType aInitType)
    \brief Инициализирует дисплей и выбирает тип курсора.
    \param Тип курсора (значение из LcdInitType enum).
    \return Нет.
*/
void display_init(uint8_t aInitType)
{
#if defined (HD44780_LCD_IN_USE) || defined (KS0073_LCD_IN_USE)
    switch(aInitType)
    {
        case (uint8_t)E_LcdDisp_OFF:
            lcd44780_init((uint8_t)LCD_DISP_OFF);
            break;

        case (uint8_t)E_LcdDisp_ON:
            lcd44780_init((uint8_t)LCD_DISP_ON);
            break;

        case (uint8_t)E_LcdDisp_ON_Blink:
            lcd44780_init((uint8_t)LCD_DISP_ON_BLINK);
            break;

        case (uint8_t)E_LcdDisp_ON_Cursor:
            lcd44780_init((uint8_t)LCD_DISP_ON_CURSOR);
            break;

        case (uint8_t)E_LcdDisp_ON_Cursor_Blink:
            lcd44780_init((uint8_t)LCD_DISP_ON_CURSOR_BLINK);
            break;

        default:
            break;
    }
#endif // #if defined (HD44780_LCD_IN_USE) || defined (KS0073_LCD_IN_USE)
}


/*! \fn void display_clear(void)
    \brief Очищает дисплей и устанавливает курсор на начфльную позицию.
    \param Нет.
    \return Нет.
*/
void display_clear(void)
{
#if defined (HD44780_LCD_IN_USE) || defined (KS0073_LCD_IN_USE)
    lcd44780_clrscr();
#endif // #if defined (HD44780_LCD_IN_USE) || defined (KS0073_LCD_IN_USE)
}


/*! \fn void display_home(void)
    \brief Устанавливает курсор на начальную позицию.
    \param Нет.
    \return Нет.
*/
void display_home(void)
{
#if defined (HD44780_LCD_IN_USE) || defined (KS0073_LCD_IN_USE)
    lcd44780_home();
#endif // #if defined (HD44780_LCD_IN_USE) || defined (KS0073_LCD_IN_USE)
}


/*! \fn void display_gotoxy(uint8_t aX, uint8_t aY)
    \brief Устанавливает курсор на указанную позицию.
    \param aX - горизонтальная позиция (0: слева).
    \param aY - вертикальная позиция (0: первая строка).
    \return Нет.
*/
void display_gotoxy(uint8_t aX, uint8_t aY)
{
#if defined (HD44780_LCD_IN_USE) || defined (KS0073_LCD_IN_USE)
    lcd44780_gotoxy(aX, aY);
#endif // #if defined (HD44780_LCD_IN_USE) || defined (KS0073_LCD_IN_USE)
}


/*! \fn void display_putc(char aC)
    \brief Отображает символ в текущей позиции курсора.
    \param Символ для отображения.
    \return Нет.
*/
void display_putc(char aC)
{
#if defined (HD44780_LCD_IN_USE) || defined (KS0073_LCD_IN_USE)
    lcd44780_putc(aC);
#endif // #if defined (HD44780_LCD_IN_USE) || defined (KS0073_LCD_IN_USE)
}


/*! \fn void display_puts(const char *aS)
    \brief Отображает строку без перевода на новую строку.
    \param Строка для отображения.
    \return Нет.
*/
void display_puts(const char *aS)
{
#if defined (HD44780_LCD_IN_USE) || defined (KS0073_LCD_IN_USE)
    lcd44780_puts(aS);
#endif // #if defined (HD44780_LCD_IN_USE) || defined (KS0073_LCD_IN_USE)
}


/*! \fn void display_puts_p(const char *progmem_s)
    \brief Отображает строку из программной памяти без перевода на новую строку.
    \param Строка для отображения из программной памяти.
    \return Нет.
*/
void display_puts_p(const char *progmem_s)
{
#if defined (HD44780_LCD_IN_USE) || defined (KS0073_LCD_IN_USE)
    lcd44780_puts_p(progmem_s);
#endif // #if defined (HD44780_LCD_IN_USE) || defined (KS0073_LCD_IN_USE)
}















