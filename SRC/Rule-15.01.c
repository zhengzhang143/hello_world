/* >>>------------------------------------------------------------
 * 
 * File: Rule-15.01.c,  Module: M3CM-1.0-QAC-8.1.2
 * 
 * RULE Rule-15.1 (Advisory):
 * The goto statement should not be used
 * 
 * Implemented by message:
 * 2001   A 'goto' statement has been used.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_1501( void )
{
   goto mylabel;                        /* 2001 */

mylabel:

   return 1;
}
