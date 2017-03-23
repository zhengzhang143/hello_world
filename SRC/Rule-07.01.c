/* >>>------------------------------------------------------------
 * 
 * File: Rule-07.01.c,  Module: M3CM-1.0-QAC-8.1.2
 * 
 * RULE Rule-7.1 (Required):
 * Octal constants shall not be used
 * 
 * Implemented by messages:
 *  336   Macro defined as an octal constant.
 * 
 *  339   Octal constant used.
 * 
 * 3628   Octal escape sequences used in a character constant or
 *        string literal.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 2983,2984

#include "misra.h"
#include "m3cmex.h"

#define MRET 015                     /* 0336 */

extern int16_t rule_0701( void )
{
    int16_t i;
    int16_t j;
    int16_t k;
    PC  pcx;
    PC  buf[] = "ABC\15";            /* 3628 */

    i = 0xFF;
    j = 052;                         /* 0339 */
    k = MRET;
    pcx = '\15';                     /* 3628 */

    return i + j + k;
}
