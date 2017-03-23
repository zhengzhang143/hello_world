/* >>>------------------------------------------------------------
 * 
 * File: Rule-05.01.c,  Module: M3CM-1.0-QAC-8.1.2
 * 
 * RULE Rule-5.1 (Required):
 * External identifiers shall be distinct
 * 
 * Implemented by message:
 *  777   [U] External identifier does not differ from other
 *        identifier(s) (e.g. '%s') within the specified number of
 *        significant characters.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 3408

#include "misra.h"
#include "m3cmex.h"

     /* 1234567890123456789012345678901********* Characters */
int32_t engine_exhaust_gas_temperature_raw;
int32_t engine_exhaust_gas_temperature_scaled;                  /* 0777 */      /* Non-compliant */

     /* 1234567890123456789012345678901********* Characters */
int32_t engine_exhaust_gas_temp_raw;
int32_t engine_exhaust_gas_temp_scaled;                         /*      */      /* Compliant */
