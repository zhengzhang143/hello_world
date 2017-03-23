/* >>>------------------------------------------------------------
 * 
 * File: Rule-11.01.c,  Module: M3CM-1.0-QAC-8.1.2
 * 
 * RULE Rule-11.1 (Required):
 * Conversions shall not be performed between a pointer to a
 * function and any other type
 * 
 * Implemented by messages:
 *  302   [u] Cast between a pointer to function and a floating
 *        type.
 * 
 *  305   [I] Cast between a pointer to function and an integral
 *        type.
 * 
 *  307   [u] Cast between a pointer to object and a pointer to
 *        function.
 * 
 *  313   Casting to different function pointer type.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 2961,2992,2996,3112

#include <stdlib.h>
#include "misra.h"
#include "m3cmex.h"

typedef void (*fp16)(int16_t s);
typedef void (*fp32)(int32_t i);
typedef fp16 (*pfp16) (void);

extern int16_t rule_1101( void )
{
    void (*pf)(void) = NULL;
    int16_t  (*qf)(int32_t x) = NULL;
    pfp16 pfp1;

    fp16 fp1 = NULL;                                    /*      */      /* Compliant - exception */
    fp32 fp2 = (fp32)fp1;                               /* 0313 */      /* Non-compliant - function pointer to different function pointer */
    fp16 fp3 = (fp16)0x8000U;                           /* 0305 */      /* Non-compliant - integer to function pointer */
    fp16 fp4 = (fp16)1.0e6F;                            /* 0302 */      /* Non-compliant - float to function pointer */

    if (fp2 != NULL) { }                                /*      */      /* Compliant */

    (void) (pfp1 ());                                   /*      */      /* Compliant - exception - cast function pointer to void */

    (uint32_t)pf;                                       /* 0305 */
    (int32_t)pf;                                        /* 0305 */
    (float64_t)pf;                                      /* 0302 */
    (int16_t *)pf;                                      /* 0307 */
    (int16_t (*)(int32_t x))pf;                         /* 0313 */
    (void *       )pf;                                  /* 0307 */
    (void         )pf;

    return 0;
}


