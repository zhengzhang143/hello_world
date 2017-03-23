#pragma PRQA_MESSAGES_OFF 292
/* >>>------------------------------------------------------------
 * 
 * File: Dir-01.01.c,  Module: M3CM-1.0-QAC-8.1.2
 * 
 * RULE Dir-1.1 (Required):
 * Any implementation-defined behaviour on which the output of the
 * program depends shall be documented and understood
 * 
 * Implemented by messages:
 *  180   [C99] Use of ll for conversion specifier.
 * 
 *  202   [I] '-' character in '[]' conversion specification is
 *        implementation defined.
 * 
 *  284   [I] Multiple character constants have implementation
 *        defined values.
 * 
 *  285   [I] Character constant contains character which is not a
 *        member of the basic source character set.
 * 
 *  286   [I] String literal contains character which is not a
 *        member of the basic source character set.
 * 
 *  287   [I] Header name contains character which is not a member
 *        of the basic source character set.
 * 
 *  288   [I] Source file '%s' has comments containing characters
 *        which are not members of the basic source character set.
 * 
 *  289   [I] Source file '%s' has preprocessing tokens containing
 *        characters which are not members of the basic source
 *        character set.
 * 
 *  292   [I] Source file '%s' has comments containing one of the
 *        characters '$', '@' or '`'.
 * 
 *  299   [I] Source file '%s' includes #pragma directives
 *        containing characters which are not members of the basic
 *        source character set.
 * 
 *  320   [C99] Declaration within 'for' statement.
 * 
 *  371   [L] Nesting levels of blocks exceeds 127 - program does
 *        not conform strictly to ISO:C99.
 * 
 *  372   [L] More than 63 levels of nested conditional inclusion
 *        - program does not conform strictly to ISO:C99.
 * 
 *  375   [L] Nesting of parenthesized expressions exceeds 63 -
 *        program does not conform strictly to ISO:C99.
 * 
 *  380   [L] Number of macro definitions exceeds 4095 - program
 *        does not conform strictly to ISO:C99.
 * 
 *  388   [L] '#include "%s"' causes nesting to exceed 15 levels -
 *        program does not conform strictly to ISO:C99.
 * 
 *  390   [L] Number of members in 'struct' or 'union' exceeds
 *        1023 - program does not conform strictly to ISO:C99.
 * 
 *  391   [L] Number of enumeration constants exceeds 1023 -
 *        program does not conform strictly to ISO:C99.
 * 
 *  392   [L] Nesting of 'struct' or 'union' types exceeds 63 -
 *        program does not conform strictly to ISO:C99.
 * 
 *  410   [L] Nesting of parentheses exceeds 32 - program does not
 *        conform strictly to ISO:C90.
 * 
 *  581   [I] Floating-point constant may be too small to be
 *        representable.
 * 
 *  604   [C99] Declaration appears after statements in a compound
 *        statement.
 * 
 *  609   [L] More than 12 pointer, array or function declarators
 *        modifying a declaration - program does not conform
 *        strictly to ISO:C90.
 * 
 *  611   [L] Nesting of 'struct' or 'union' types exceeds 15 -
 *        program does not conform strictly to ISO:C90.
 * 
 *  612   [L] Size of object '%s' exceeds 32767 bytes - program
 *        does not conform strictly to ISO:C90.
 * 
 *  614   [L] More than 127 block scope identifiers defined within
 *        a block - program does not conform strictly to ISO:C90.
 * 
 *  617   [C99] 'const' qualifier has been duplicated.
 * 
 *  618   [C99] 'volatile' qualifier has been duplicated.
 * 
 *  634   [I] Bit-fields in this struct/union have not been
 *        declared explicitly as unsigned or signed.
 * 
 *  639   [L] Number of members in 'struct' or 'union' exceeds 127
 *        - program does not conform strictly to ISO:C90.
 * 
 *  647   [L] Number of enumeration constants exceeds 127 -
 *        program does not conform strictly to ISO:C90.
 * 
 *  715   [L] Nesting of control structures (statements) exceeds
 *        15 - program does not conform strictly to ISO:C90.
 * 
 *  739   [L] Number of 'case' labels exceeds 257 - program does
 *        not conform strictly to ISO:C90.
 * 
 *  810   [L] '#include "%s"' causes nesting to exceed 8 levels -
 *        program does not conform strictly to ISO:C90.
 * 
 *  828   [L] More than 8 levels of nested conditional inclusion -
 *        program does not conform strictly to ISO:C90.
 * 
 *  850   [C99] Macro argument is empty.
 * 
 *  857   [L] Number of macro definitions exceeds 1024 - program
 *        does not conform strictly to ISO:C90.
 * 
 *  858   [L] Number of macro parameters exceeds 31 - program does
 *        not conform strictly to ISO:C90.
 * 
 *  859   [L] Number of arguments in macro call exceeds 31 -
 *        program does not conform strictly to ISO:C90.
 * 
 *  875   [L] String literal exceeds 509 characters - program does
 *        not conform strictly to ISO:C90.
 * 
 *  930   [C99] Trailing comma at the end of an enumerator-list.
 * 
 * 1011   [C99] Use of '//' comment.
 * 
 * 1018   [C99] Use of LL suffix.
 * 
 * 1027   [C99] Use of type 'long long'.
 * 
 * 1030   [C99] Macro defined with variable argument list.
 * 
 * 1031   [C99] Initializer for 'struct', 'union' or array type is
 *        not a constant expression.
 * 
 * 1053   [C99] Designators have been used in this initialization
 *        list.
 * 
 * 1054   [C99] A compound literal has been used.
 * 
 * 1055   [C99] The keyword 'inline' has been used.
 * 
 * 1056   [C99] The keyword '_Bool' has been used.
 * 
 * 2855   Constant: Casting to a signed integer type of
 *        insufficient size.
 * 
 * 2856   Definite: Casting to a signed integer type of
 *        insufficient size.
 * 
 * 2857   Apparent: Casting to a signed integer type of
 *        insufficient size.
 * 
 * 2860   Constant: Implementation-defined value resulting from
 *        left shift operation on expression of signed type.
 * 
 * 2861   Definite: Implementation-defined value resulting from
 *        left shift operation on expression of signed type.
 * 
 * 2862   Apparent: Implementation-defined value resulting from
 *        left shift operation on expression of signed type.
 * 
 * 2890   Constant: Negative value implicitly converted to an
 *        unsigned type.
 * 
 * 2891   Definite: Negative value implicitly converted to an
 *        unsigned type.
 * 
 * 2892   Apparent: Negative value implicitly converted to an
 *        unsigned type.
 * 
 * 2895   Constant: Negative value cast to an unsigned type.
 * 
 * 2896   Definite: Negative value cast to an unsigned type.
 * 
 * 2897   Apparent: Negative value cast to an unsigned type.
 * 
 * 3116   Unrecognized #pragma arguments '%s' This #pragma
 *        directive has been ignored.
 * 
 * <<<------------------------------------------------------------ */



#include "misra.h"
#include "m3cmex.h"

extern int16_t dir_0101( void )
{
   return 1;
}
