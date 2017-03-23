/* >>>------------------------------------------------------------
 * 
 * File: Rule-16.01.c,  Module: M3CM-1.0-QAC-8.1.2
 * 
 * RULE Rule-16.1 (Required):
 * All switch statements shall be well-formed
 * 
 * Implemented by messages:
 * 2008   Code statements precede the first label in this 'switch'
 *        construct.
 * 
 * 3234   Declarations precede the first label in this 'switch'
 *        construct.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_1601( void )
{
   switch ( s16a )
   {
      static int16_t xxxx;              /* 3234      */
      ++s16b;                           /* 2008 2880 */

      case 1:
         xxxx = s16a;
         break;

      case 2:
         s16b = xxxx;
         break;

      default:
         break;
   }
   return 1;
}
