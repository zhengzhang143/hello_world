/* >>>------------------------------------------------------------
 * 
 * File: Rule-09.01.c,  Module: M3CM-1.0-QAC-8.1.2
 * 
 * RULE Rule-9.1 (Mandatory):
 * The value of an object with automatic storage duration shall
 * not be read before it has been set
 * 
 * Implemented by messages:
 * 2883   This 'goto' statement will always bypass the
 *        initialization of local variables.
 * 
 * 2961   Definite: Using value of uninitialized automatic object
 *        '%s'.
 * 
 * 2962   Apparent: Using value of uninitialized automatic object
 *        '%s'.
 * 
 * 2971   Definite: Passing address of uninitialized object '%s'
 *        to a function parameter declared as a pointer to const.
 * 
 * 2972   Apparent: Passing address of uninitialized object '%s'
 *        to a function parameter declared as a pointer to const.
 * 
 * <<<------------------------------------------------------------ */

#pragma PRQA_MESSAGES_OFF 3447



#pragma PRQA_MESSAGES_OFF 3447


#include "misra.h"
#include "m3cmex.h"


extern int16_t rule_0901a( const int16_t *p );


extern int16_t rule_0901( void )
{
   int16_t ax;
   int16_t bx;
   int16_t cx;
   int16_t dx;
   int16_t ex;
   int16_t rx;

   rx = ax;                        /* 2961 */

   if ( s16a > 0 )
   {
       bx = s16a;
       ex = s16a;
   }

   rx = rx + bx;                   /* 2962 */

   cx = rule_0901a( &dx );         /* 2971 */

   dx = 1;

   cx += rule_0901a( &ex );        /* 2972 */

   return rx + cx + dx;
}
