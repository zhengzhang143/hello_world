/* >>>------------------------------------------------------------
 * 
 * File: Rule-17.01.c,  Module: M3CM-1.0-QAC-8.1.2
 * 
 * RULE Rule-17.1 (Required):
 * The features of <stdarg.h> shall not be used
 * 
 * Implemented by messages:
 * 1337   Function defined with a variable number of parameters.
 * 
 * 5130   Use of standard header file <stdarg.h>.
 * 
 * <<<------------------------------------------------------------ */



#include <stdarg.h>                             /* 5130 */
#include "misra.h"
#include "m3cmex.h"

static void rule_1701a (uint16_t n, ...);

extern int16_t rule_1701( void )
{
    rule_1701a(1,2);

    return 1;
}

static void rule_1701a (uint16_t n, ...)        /* 1337 */
{
    u16a = n;
}
