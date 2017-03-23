/* >>>------------------------------------------------------------
 *
 * File: dir-0410-bad.h,  Module: M3CM-1.0-QAC-8.1.2
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

#include "misra.h"                              /* 0883 */

typedef int16_t bad1;

#ifndef DIR_0410_BAD_H
#define DIR_0410_BAD_H

#include "misra.h"

typedef int32_t bad2;

#endif
