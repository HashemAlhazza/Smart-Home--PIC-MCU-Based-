/* 
 * File:   UART_LoggingDebugData.h
 * Author: Hashem
 *
 * Created on September 30, 2023, 1:43 AM
 */

#ifndef UART_LOGGINGDEBUGDATA_H
#define	UART_LOGGINGDEBUGDATA_H

#include "../../mcc_generated_files/eusart.h"

void UART_LoggingDebugData_Send_String(uint8_t *String, uint16_t String_Length);

#endif	/* UART_LOGGINGDEBUGDATA_H */

