/* >>>------------------------------------------------------------
 * 
 * File: Rule-04.01.c,  Module: M3CM-1.0-QAC-8.1.2
 * 
 * RULE Rule-4.1 (Required):
 * Octal and hexadecimal escape sequences shall be terminated
 * 
 * Not enforced
 * 
 * <<<------------------------------------------------------------ */


#include "m3cmex.h"


extern int16_t rule_0401( void )
{
    const char *s1 = "\x41g";                           /*                */ /* Non-compliant */
    const char *s2 = "\x41" "g";                        /*                */ /* Compliant - terminated by end of literal */
    const char *s3 = "\x41\x67";                        /*                */ /* Compliant - terminated by another escape */
    uint16_t c1 = '\141t';                              /*      0284 3628 */ /* Non-compliant */
    uint16_t c2 = '\141\t';                             /*      0284 3628 */ /* Compliant - terminated by another escape */

    return 1;
}
