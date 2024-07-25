/* 
 * File:   EEPROM_24C02C.h
 * Author: Hashem
 *
 * Created on September 30, 2023, 5:33 AM
 */

#ifndef EEPROM_24C02C_H
#define	EEPROM_24C02C_H

#include "../../mcc_generated_files/examples/i2c_master_example.h"

void EEPROM_24C02C_Write_Byte(i2c_address_t EEPROM_Address, i2c_address_t Byte_Address, uint8_t Data);
uint8_t EEPROM_24C02C_Read_Byte(i2c_address_t EEPROM_Address, i2c_address_t Byte_Address);

#endif	/* EEPROM_24C02C_H */

