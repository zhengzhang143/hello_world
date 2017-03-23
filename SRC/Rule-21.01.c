/* >>>------------------------------------------------------------
 * 
 * File: Rule-21.01.c,  Module: M3CM-1.0-QAC-8.1.2
 * 
 * RULE Rule-21.1 (Required):
 * #define and #undef shall not be used on a reserved identifier
 * or reserved macro name
 * 
 * Implemented by messages:
 *  836   [U] Definition of macro named 'defined'.
 * 
 *  848   [U] Attempting to #undef '%s', which is a predefined
 *        macro name.
 * 
 *  854   [U] Attempting to #define '%s', which is a predefined
 *        macro name.
 * 
 * 4600   The macro '%1s' is also defined in '<%2s>'.
 * 
 * 4601   The macro '%1s' is the name of an identifier in '<%2s>'.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"


#define defined ! defined       /* 0836      */


#undef __LINE__                 /* 0848 0841 */
#undef __FILE__                 /* 0848 0841 */
#undef __DATE__                 /* 0848 0841 */
#undef __TIME__                 /* 0848 0841 */
#undef __STDC__                 /* 0848 0841 */

#define __LINE__ 1              /* 0854 0602 */
#define __FILE__ "default"      /* 0854 0602 */
#define __DATE__ "01-01-2000"   /* 0854 0602 */
#define __TIME__ "00:00:00"     /* 0854 0602 */
#define __STDC__                /* 0854 0602 */

#define NULL (void *)0          /* 4600      */
#define EDOM 22                 /* 4600      */
#define tan 1                   /* 4601      */
#define printf xprintf          /* 4601      */


extern int16_t rule_2101( void )
{
   return 1;
}
