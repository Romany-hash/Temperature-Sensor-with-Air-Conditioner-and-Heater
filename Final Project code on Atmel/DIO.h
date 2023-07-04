/**
 * @name DIO.h
 * @date May 9, 2023
 * @author Romany Sobhy
 *
 * @details
 * This module provides functions to control and manipulate Digital I/O pins and ports on a microcontroller.
 */
#ifndef DIO_H_
#define DIO_H_

/*
 * @brief Set the direction of a specific pin in a given port.
 * @param portname: The name of the port.
 * @param pinnumber: The number of the pin.
 * @param direction: The direction to set (0 = input, 1 = output).
 * @return None.
 */
void DIO_vsetPINDir(unsigned char portname, unsigned char pinnumber, unsigned char direction);

/*
 * @brief Set the value of a specific pin in a given port.
 * @param portname: The name of the port.
 * @param pinnumber: The number of the pin.
 * @param outputvalue: The value to set (0 = low, 1 = high).
 * @return None.
 */
void DIO_write(unsigned char portname, unsigned char pinnumber, unsigned char outputvalue);

/*
 * @brief Read the value of a specific pin in a given port.
 * @param portname: The name of the port.
 * @param pinnumber: The number of the pin.
 * @return 1 if the value of the pin is high, 0 if the value is low.
 */
unsigned char DIO_u8read(unsigned char portname, unsigned char pinnumber);

/*
 * @brief Reverse the value of a specific pin in a given port.
 * @param portname: The name of the port.
 * @param pinnumber: The number of the pin.
 * @return None.
 */
void DIO_toggle(unsigned char portname, unsigned char pinnumber);

/*
 * @brief Set the direction of the entire port.
 * @param portname: The name of the port.
 * @param direction: The direction to set for the whole port (0 = input, 1 = output).
 * @return None.
 */
void DIO_set_port_direction(unsigned char portname, unsigned char direction);

/*
 * @brief Write a value to all pins of a given port.
 * @param portname: The name of the port.
 * @param portvalue: The value to write to all pins.
 * @return None.
 */
void DIO_write_port(unsigned char portname, unsigned char portvalue);

/*
 * @brief Read the value of a given port.
 * @param portname: The name of the port.
 * @return The value of the port.
 */
unsigned char DIO_read_port(unsigned char portname);

/*
 * @brief Connect or disconnect the pull-up resistor for a specific pin in a given port.
 * @param portname: The name of the port.
 * @param pinnumber: The number of the pin.
 * @param connect_pullup: Whether to connect (1) or disconnect (0) the pull-up resistor.
 * @return None.
 */
void DIO_vconnectpullup(char portname, char pinnumber, char connect_pullup);

/*
 * @brief Write a value to the low nibble of a given port.
 * @param portname: The name of the port.
 * @param value: The value to write to the low nibble.
 * @return None.
 */
void write_low_nibble(unsigned char portname, unsigned char value);

/*
 * @brief Write a value to the high nibble of a given port.
 * @param portname: The name of the port.
 * @param value: The value to write to the high nibble.
 * @return None.
 */
void write_high_nibble(unsigned char portname, unsigned char value);

#endif /* DIO_H_ */


