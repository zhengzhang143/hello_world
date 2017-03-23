/* >>>------------------------------------------------------------
 *
 * File: dir-0410-ok2.h,  Module: M3CM-1.0-QAC-8.1.2
 *
 * RULE 19.15 (Required):
 * Precautions shall be taken in order to prevent the contents of
 * a header file being included twice.
 *
 * Implemented by message:
 *  883   Include file code is not protected against repeated
 *        inclusion
 *
 * <<<------------------------------------------------------------ */

#ifdef DIR_0410_OK2_H
       /* Comments and whitespace */
#error Header already included
       /* Comments and whitespace */
#else
       /* Comments and whitespace */

#define DIR_0410_OK2_H

#include "misra.h"

typedef int16_t ok2;

#endif
