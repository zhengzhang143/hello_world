/* >>>------------------------------------------------------------
 * 
 * File: Rule-14.01.c,  Module: M3CM-1.0-QAC-8.1.2
 * 
 * RULE Rule-14.1 (Required):
 * A loop counter shall not have essentially floating type
 * 
 * Implemented by messages:
 * 3340   Floating point variable used as 'for' loop control
 *        variable.
 * 
 * 3342   Controlling expression of 'for' loop is a floating point
 *        comparison.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 1056

#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_1401( void )
{
    uint16_t ui;
    uint16_t buf[10];
    float32_t ft;
    float32_t fuf[10];
    volatile _Bool blx;

    for (ui = 0u; ui < 10u; ++ui)
    {
        buf[ui] = ui + 4u;
        fuf[ui] = (float32_t)(ui);
    }

    for (ui = 0 ; buf[ui] < 10u ; ++ui )
    {
    }

    for (ft = 0.0f; ft < f32a; ++ft)                                    /* 3340 3342 */
    {
    }

    for (ui = 0 ; fuf[ui] < 5.0f ; ++ui )                               /*      3342 */
    {
    }

    ft = 0.0f;

    /* The following while loop is non-compliant because ft
       is being used as a loop counter. */

    while (ft < 1.0f)                                                   /*           */         /* Non-compliant */
    {
        ft += 0.001f;
    }


    /* ft does not change in the following loop so cannot
       be a loop counter */

    ft = get_f32();

    do                                                                  /*           */         /* Compliant */
    {
        u32a = get_u32();
    } while (((float32_t)u32a - ft) > 10.0f);

    return 1;
}
