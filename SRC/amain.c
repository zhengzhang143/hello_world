/* >>>------------------------------------------------------------
 * 
 * File: amain.c,  Module: M3CM-1.0-QAC-8.1.2
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
typedef int32_t t0506b;
typedef int16_t t0506c;

extern int32_t obj0103;                             /* 3447      */
extern int16_t obj_0805b;                           /* 3447      */
extern int16_t obj_0508a;                           /* 3447      */
extern int16_t obj_0508b;                           /* 3447      */

static int16_t obj_0509a = 0;
static int16_t obj_0509b = 0;

int main( void )
{
    int16_t err;
    int16_t t0506a;

    obj_0806c = 0;

    err  = dir_0101();
    err += dir_0201();
    err += dir_0301();
    err += dir_0401();
    err += dir_0402();
    err += dir_0403();
    err += dir_0404();
    err += dir_0405();
    err += dir_0406();
    err += dir_0407();
    err += dir_0408();
    err += dir_0409();
    err += dir_0410();
    err += dir_0411();
    err += dir_0412();
    err += dir_0413();
    err += rule_0101();
    err += rule_0102();
    err += rule_0103();
    err += rule_0201();
    err += rule_0202();
    err += rule_0203();
    err += rule_0204();
    err += rule_0205();
    err += rule_0206();
    err += rule_0207();
    err += rule_0301();
    err += rule_0302();
    err += rule_0401();
    err += rule_0402();
    err += rule_0501();
    err += rule_0502();
    err += rule_0503();
    err += rule_0504();
    err += rule_0505();
    err += rule_0506();
    err += rule_0507();
    err += rule_0508();
    err += rule_0509();
    err += rule_0601();
    err += rule_0602();
    err += rule_0701();
    err += rule_0702();
    err += rule_0703();
    err += rule_0704();
    err += rule_0801();
    err += rule_0802();
    err += rule_0803();
    err += rule_0804();
    err += rule_0805();
    err += rule_0806();
    err += rule_0807();
    err += rule_0808();
    err += rule_0809();
    err += rule_0810();
    err += rule_0811();
    err += rule_0812();
    err += rule_0813();
    err += rule_0814();
    err += rule_0901();
    err += rule_0902();
    err += rule_0903();
    err += rule_0904();
    err += rule_0905();
    err += rule_1001_Boolean();
    err += rule_1001_character();
    err += rule_1001_enum();
    err += rule_1001_floating();
    err += rule_1001_signed();
    err += rule_1001_unsigned();
    err += rule_1002();
    err += rule_1003_from_Boolean();
    err += rule_1003_from_character();
    err += rule_1003_from_enum();
    err += rule_1003_from_floating();
    err += rule_1003_from_signed();
    err += rule_1003_from_unsigned();
    err += rule_1003_narrow_floating();
    err += rule_1003_narrow_signed();
    err += rule_1003_narrow_unsigned();
    err += rule_1003_switch();
    err += rule_1004_compare();
    err += rule_1004_integer_float();
    err += rule_1004_signed_unsigned();
    err += rule_1005();
    err += rule_1006();
    err += rule_1007();
    err += rule_1008();
    err += rule_1101();
    err += rule_1102();
    err += rule_1103();
    err += rule_1104();
    err += rule_1105();
    err += rule_1106();
    err += rule_1107();
    err += rule_1108();
    err += rule_1109();
    err += rule_1201();
    err += rule_1202();
    err += rule_1203();
    err += rule_1204();
    err += rule_1301();
    err += rule_1302();
    err += rule_1303();
    err += rule_1304();
    err += rule_1305();
    err += rule_1306();
    err += rule_1401();
    err += rule_1402();
    err += rule_1403();
    err += rule_1404();
    err += rule_1501();
    err += rule_1502();
    err += rule_1503();
    err += rule_1504();
    err += rule_1505();
    err += rule_1506();
    err += rule_1507();
    err += rule_1601();
    err += rule_1602();
    err += rule_1603();
    err += rule_1604();
    err += rule_1605();
    err += rule_1606();
    err += rule_1607();
    err += rule_1701();
    err += rule_1702();
    err += rule_1703();
    err += rule_1704();
    err += rule_1705();
    err += rule_1706();
    err += rule_1707();
    err += rule_1708();
    err += rule_1801();
    err += rule_1802();
    err += rule_1803();
    err += rule_1804();
    err += rule_1805();
    err += rule_1806();
    err += rule_1807();
    err += rule_1808();
    err += rule_1901();
    err += rule_1902();
    err += rule_2001();
    err += rule_2002();
    err += rule_2003();
    err += rule_2004();
    err += rule_2005();
    err += rule_2006();
    err += rule_2007();
    err += rule_2008();
    err += rule_2009();
    err += rule_2010();
    err += rule_2011();
    err += rule_2012();
    err += rule_2013();
    err += rule_2014();
    err += rule_2101();
    err += rule_2102();
    err += rule_2103();
    err += rule_2104();
    err += rule_2105();
    err += rule_2106();
    err += rule_2107();
    err += rule_2108();
    err += rule_2109();
    err += rule_2110();
    err += rule_2111();
    err += rule_2112();
    err += rule_2201();
    err += rule_2202();
    err += rule_2203();
    err += rule_2204();
    err += rule_2205();
    err += rule_2206();

    return err;
}


extern int16_t rule_0806(void)
{
    return 2;
}
