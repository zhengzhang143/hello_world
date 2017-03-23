/* >>>------------------------------------------------------------
 * 
 * File: Rule-06.01.c,  Module: M3CM-1.0-QAC-8.1.2
 * 
 * RULE Rule-6.1 (Required):
 * Bit-fields shall only be declared with an appropriate type
 * 
 * Implemented by messages:
 *  634   [I] Bit-fields in this struct/union have not been
 *        declared explicitly as unsigned or signed.
 * 
 *  635   [E] Bit-fields in this struct/union have been declared
 *        with types other than int, signed int or unsigned int.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 1056

#include "misra.h"
#include "m3cmex.h"

typedef enum { A, B, C } e_t;


struct T01 { char                bpc: 3; };             /* 0634 0635 */
struct T02 { signed char         bsc: 3; };             /*      0635 */
struct T03 { unsigned char       buc: 3; };             /*      0635 */

struct T11 { short               bps: 3; };             /* 0634 0635 */
struct T12 { signed short        bss: 3; };             /*      0635 */
struct T13 { unsigned short      bus: 3; };             /*      0635 */

struct T21 { int                 bpi: 3; };             /* 0634      */
struct T22 { signed int          bsi: 3; };             /*           */
struct T23 { unsigned int        bui: 3; };             /*           */

struct T31 { long                bpl: 3; };             /* 0634 0635 */
struct T32 { signed long         bsl: 3; };             /*      0635 */
struct T33 { unsigned long       bul: 3; };             /*      0635 */

struct T41 { e_t                 bet: 3; };             /*      0635 */

struct T51 { _Bool               bbl: 3; };             /*           */


extern int16_t rule_0601( void )
{
    return 0;
}
