/* >>>------------------------------------------------------------
 * 
 * File: Rule-18.01.c,  Module: M3CM-1.0-QAC-8.1.2
 * 
 * RULE Rule-18.1 (Required):
 * A pointer resulting from arithmetic on a pointer operand shall
 * address an element of the same array as that pointer operand
 * 
 * Implemented by messages:
 * 2930   Constant: Computing an invalid pointer value.
 * 
 * 2931   Definite: Computing an invalid pointer value.
 * 
 * 2932   Apparent: Computing an invalid pointer value.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 2982,2983

#include "misra.h"
#include "m3cmex.h"


extern int16_t rule_1801( void )
{
   int16_t lot[10];
   int16_t *p;

   p = &lot[20];               /* 2930      */

   p = &s16a;
   p = p + 10;                 /* 2931 0488 */

   if (s16a > 10)
   {
   }

   p = &lot[s16a];             /* 2932      */

   return 0;
}
