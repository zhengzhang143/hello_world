#pragma PRQA_MESSAGES_OFF 3108

/* >>>------------------------------------------------------------
 * 
 * File: Rule-03.01.c,  Module: M3CM-1.0-QAC-8.1.2
 * 
 * RULE Rule-3.1 (Required):
 * The character sequences /* and // shall not be used within a
 * comment.
 * 
 * Implemented by messages:
 * 3108   Nested comments are not recognized in the ISO standard.
 * 
 * 5133   Comment delimiter /* or // found within comment.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_ON 3108

#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_0301( void )
{
   int16_t ax = 0;                 /* 3108 5133      */   /*      */     /* /*  nested comment ? */

   int16_t bx = 0;                 /*      5133      */   /*      */     /* //  nested comment ? */

   int16_t cx = 0;                 /*      5133 1011 */   /*      */     // /*  nested comment ? */

   int16_t dx = 0;                 /*           1011 */   /*      */     // //  C++ nested comment allowed within C++ comment.

   return 0;
}
