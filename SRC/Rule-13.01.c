/* >>>------------------------------------------------------------
 * 
 * File: Rule-13.01.c,  Module: M3CM-1.0-QAC-8.1.2
 * 
 * RULE Rule-13.1 (Required):
 * Initializer lists shall not contain persistent side-effects
 * 
 * Not enforced
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 2982,2984,3408,3447

#include "misra.h"
#include "m3cmex.h"

extern volatile uint16_t v1;

static void f_1301a (uint16_t ap[2]);

extern int16_t rule_1301( void )
{
    /* Non-compliant - volatile access is persistent side-effect */
    uint16_t ax[2] = { v1, 0 };                                 /* 1031           */
    uint16_t bx[2] = { u16a + u16b, u16a - u16b };              /* 1031           */

    /* Non-compliant - two side-effects */
    f_1301a ((uint16_t [2]){u16a++, u16a++});                   /* 1054 3440 3440 */

    return 1;
}

static void f_1301a (uint16_t ap[2])
{
    u16b = ap[0];
    ap[0]++;
}
