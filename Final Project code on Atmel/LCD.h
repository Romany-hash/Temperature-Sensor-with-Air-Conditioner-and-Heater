/**
 * @name LCD.h
 * @date May 9, 2023
 * @author Romany Sobhy
 *
 * @details
 *This module provides functions to control and manipulate a Liquid Crystal Display (LCD) using Digital I/O pins and ports on a microcontroller.
 *It includes functions to initialize the LCD, send commands and data to the LCD, clear the screen, move the cursor, and display strings.
 *The driver supports both 4-bit and 8-bit modes of operation, depending on the configuration.
 *To use this driver, the "DIO.h" and "LCD_config.h" header files must be included.
 */

#ifndef LCD_H_
#define LCD_H_
#include "DIO.h"
#include "LCD_config.h"
#define CLR_SCREEN 0x01
#define CURSOR_ON_DISPLAN_ON 0x0e
#define RETURN_HOME 0x02
#define ENTRY_MODE 0x06
#if defined four_bits_mode
#define EN 0
#define RS 1
#define RW 2
#define FOUR_BITS 0x28
#elif defined eight_bits_mode
#define EN 0
#define RS 1
#define RW 2
#define EIGHT_BITS 0x38
#endif
void LCD_vInit(void);
static void send_falling_edge(void);
void LCD_vSend_cmd(char cmd);
void LCD_vSend_char(char data);
void LCD_vSend_string(char *data);
void LCD_clearscreen();
void LCD_movecursor(char row,char coloumn);

#endif /* LCD_H_ */