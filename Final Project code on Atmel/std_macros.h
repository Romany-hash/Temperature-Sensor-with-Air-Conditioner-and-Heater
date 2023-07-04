/**
 * @name std_macros.h
 * @date May 7, 2023
 * @author Romany Sobhy
 *
 * @details
 * This header file defines macros for common bit-level operations on registers.
 */
#define REGISTER_SIZE 8
#define SET_BIT(reg,bit)    reg|=(1<<bit)
#define CLR_BIT(reg,bit)    reg&=(~(1<<bit))
#define TOG_BIT(reg,bit)    reg^=(1<<bit)
#define READ_BIT(reg,bit)    (reg&(1<<bit))>>bit
#define IS_BIT_SET(reg,bit)  (reg&(1<<bit))>>bit

/* @explanation: IS_BIT_CLR:
 * - (reg & (1 << bit)) performs a bitwise AND operation between the register reg and a mask created by shifting 1 to the left by bit positions.
 *   This masks out the specific bit within the register.
 * - ((reg & (1 << bit)) >> bit) shifts the result of the bitwise AND operation to the right by bit positions.
 *   This moves the masked bit to the least significant bit position.
 * - !((reg & (1 << bit)) >> bit) applies the logical NOT operator to the shifted result.
 *   This inverts the bit value, resulting in true (1) if the bit is cleared (0), and false (0) if the bit is set (1).
 */
#define IS_BIT_CLR(reg,bit)  !((reg&(1<<bit))>>bit)
#define ROR(reg,num)         reg=(reg<<(REGISTER_SIZE-num))|(reg>>(num))
#define ROL(reg,num)        reg= (reg>>(REGISTER_SIZE-num))|(reg<<(num))
