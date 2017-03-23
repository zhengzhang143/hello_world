/* >>>------------------------------------------------------------
 * 
 * File: Rule-20.01.c,  Module: M3CM-1.0-QAC-8.1.2
 * 
 * RULE Rule-20.1 (Advisory):
 * #include directives should only be preceded by preprocessor
 * directives or comments
 * 
 * Implemented by message:
 * 5087   Use of #include directive after code fragment.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_2001( void )
{
   return 1;
}

#include "rule-20.01.h"                         /* 5087 */

