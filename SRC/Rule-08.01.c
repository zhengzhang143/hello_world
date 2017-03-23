/* >>>------------------------------------------------------------
 * 
 * File: Rule-08.01.c,  Module: M3CM-1.0-QAC-8.1.2
 * 
 * RULE Rule-8.1 (Required):
 * Types shall be explicitly specified
 * 
 * Implemented by messages:
 * 2050   The 'int' type specifier has been omitted from a
 *        function declaration.
 * 
 * 2051   The 'int' type specifier has been omitted from an object
 *        declaration.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 3206,2984,3408,3447

#include "misra.h"
#include "m3cmex.h"

typedef (*pfi)(void);                           /* 2050 */

static       rule_0801a( void );                /* 2050 */
static void  rule_0801b (const k, int16_t p);   /* 2051 */
static const sc = 5;                            /* 2051 */
const        ec;                                /* 2051 */
volatile *   pvi;                               /* 2051 */
extern       obj0801;                           /* 2051 */

extern int16_t rule_0801( void )
{
   int16_t r;

   r = sc + rule_0801a();
   rule_0801b(1, 2);

   return r;
}

static rule_0801a( void )
{                                               /* 2050 */
   return sc + 1;
}

static void rule_0801b (const k, int16_t p)
{                                               /* 2051 */
}
