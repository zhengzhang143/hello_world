/* >>>------------------------------------------------------------
 * 
 * File: Rule-19.01.c,  Module: M3CM-1.0-QAC-8.1.2
 * 
 * RULE Rule-19.1 (Mandatory):
 * An object shall not be assigned or copied to an overlapping
 * object
 * 
 * Implemented by messages:
 * 2776   Definite: Copy between overlapping objects.
 * 
 * 2777   Apparent: Copy between overlapping objects.
 * 
 * <<<------------------------------------------------------------ */



#include "string.h"
#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_1901( void )
{
   PC buf[100] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

   (void)memcpy( &buf[ 10 ], &buf[ 20 ], 20U );                 /* 2776 */

   u16a = 5U;
   (void)memcpy( &buf[ 10 ], &buf[ 20 ], u16a );                /*      */

   if (s16a > 0)
   {
       u16a = 30U;
   }

   (void)memcpy( &buf[ 10 ], &buf[ 20 ], u16a );                /* 2777 */

   return 1;
}
