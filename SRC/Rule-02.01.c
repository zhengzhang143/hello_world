/* >>>------------------------------------------------------------
 * 
 * File: Rule-02.01.c,  Module: M3CM-1.0-QAC-8.1.2
 * 
 * RULE Rule-2.1 (Required):
 * A project shall not contain unreachable code
 * 
 * Implemented by messages:
 *  594   Negative 'case' label expression is incompatible with
 *        unsigned controlling expression in 'switch' statement.
 * 
 * 1460   'Switch' label value, %s, not contained in enum type.
 * 
 * 1503   The function '%1s' is defined but is not used within
 *        this project.
 * 
 * 2742   This 'if' controlling expression is a constant
 *        expression and its value is 'false'.
 * 
 * 2744   This 'while' or 'for' loop controlling expression is a
 *        constant expression and its value is 'false'. The loop
 *        will not be entered.
 * 
 * 2880   This code is unreachable.
 * 
 * 2882   This 'switch' statement will bypass the initialization
 *        of local variables.
 * 
 * 3219   Static function '%s()' is not used within this
 *        translation unit.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 2002,2461,2992,2996,3447

#include "misra.h"
#include "m3cmex.h"

#define LIMIT 10
enum XX {A, B, C};
extern enum XX exa;

static int32_t rule_0201b( void );

extern int16_t rule_0201( void )
{
   if ( s16a < 0 )
   {
      if (s16a > 10)
      {
          s16a = 10;                            /* 2880      */
      }
      else
      {
          s16a = 5;
      }
   }

   if (s16b < 0)
   {
       s16b = 0;
   }
   if (s16b > 1)
   {
       s16b = 1;
   }

   switch( s16b )                               /* 2882      */
   {
      int16_t m = 1;                            /* 3234      */
      s16c = 0;                                 /* 2880 2008 */

   case 0:
      s16c = 1;
      break;

   case 1:
      s16c = 10;
      break;

   default:
      s16c = 0;
      break;
   }

   while ( s16a > 10 )
   {
      --s16a;
      break;

      ++s16c;                                   /* 2880      */
   }

   while ( 0 )                                  /* 2744      */
   {
      ++s16a;                                   /* 2880      */
   }

   if ( LIMIT != 10 )                           /* 2742      */
   {
      ++s16a;                                   /* 2880      */
   }

   switch (exa)
   {
   case A:
   case B:
   case C:
       s16c = 2;
       break;
   case 3:                                      /* 1460 0570 */
       s16c = 4;
       break;
   }

   return s16a + s16c;
}

static int32_t rule_0201b( void )               /* 3219      */
{
   return 0;
}
