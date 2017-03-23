/* >>>------------------------------------------------------------
 * 
 * File: Rule-01.01.c,  Module: M3CM-1.0-QAC-8.1.2
 * 
 * RULE Rule-1.1 (Required):
 * The program shall contain no violations of the standard C
 * syntax and constraints, and shall not exceed the implementation's
 * translation limits
 * 
 * Implemented by messages:
 *  232   [C] Value of hex escape sequence is not representable in
 *        type 'unsigned char'.
 * 
 *  233   [C] Value of octal escape sequence is not representable
 *        in type 'unsigned char'.
 * 
 *  244   [C] Value of character constant is not representable in
 *        type 'int'.
 * 
 *  261   [C] Comment still open at end of included file.
 * 
 *  321   [C] Declaration within 'for' statement defines an
 *        identifier '%s' which is not an object.
 * 
 *  322   [C] Illegal storage class specifier used in 'for'
 *        statement declaration.
 * 
 *  338   [C] Octal or hex escape sequence value is too large for
 *        'unsigned char' or 'wchar_t' type.
 * 
 *  422   [C] Function call contains fewer arguments than
 *        prototype specifies.
 * 
 *  423   [C] Function call contains more arguments than prototype
 *        specifies.
 * 
 *  426   [C] Called function has incomplete return type.
 * 
 *  427   [C] Object identifier used as if it were a function or a
 *        function pointer identifier.
 * 
 *  429   [C] Function argument is not of arithmetic type.
 * 
 *  430   [C] Function argument is not of compatible
 *        'struct'/'union' type.
 * 
 *  431   [C] Function argument points to a more heavily qualified
 *        type.
 * 
 *  432   [C] Function argument is not of compatible pointer type.
 * 
 *  435   [C] The 'struct'/'union' member '%s' does not exist.
 * 
 *  436   [C] Left operand of '.' must be a 'struct' or 'union'
 *        object.
 * 
 *  437   [C] Left operand of '->' must be a pointer to a 'struct'
 *        or 'union' object.
 * 
 *  446   [C] Operand of ++/-- must have scalar (arithmetic or
 *        pointer) type.
 * 
 *  447   [C] Operand of ++/-- must be a modifiable object.
 * 
 *  448   [C] Operand of ++/-- must not be a pointer to an object
 *        of unknown size.
 * 
 *  449   [C] Operand of ++/-- must not be a pointer to a
 *        function.
 * 
 *  450   [C] An expression of array type cannot be cast.
 * 
 *  451   [C] Subscripting requires a pointer (or array lvalue).
 * 
 *  452   [C] Cannot subscript a pointer to an object of unknown
 *        size.
 * 
 *  453   [C] An array subscript must have integral type.
 * 
 *  454   [C] The address-of operator '&' cannot be applied to an
 *        object declared with 'register'.
 * 
 *  456   [C] This expression does not have an address - '&' may
 *        only be applied to an lvalue or a function designator.
 * 
 *  457   [C] The address-of operator '&' cannot be applied to a
 *        bit-field.
 * 
 *  458   [C] Indirection operator '*' requires operand of pointer
 *        type.
 * 
 *  466   [C] Unary '+' requires arithmetic operand.
 * 
 *  467   [C] Operand of '!' must have scalar (arithmetic or
 *        pointer) type.
 * 
 *  468   [C] Unary '-' requires arithmetic operand.
 * 
 *  469   [C] Bitwise not '~' requires integral operand.
 * 
 *  476   [C] 'sizeof' cannot be applied to a bit-field.
 * 
 *  477   [C] 'sizeof' cannot be applied to a function.
 * 
 *  478   [C] 'sizeof' cannot be applied to an object of unknown
 *        size.
 * 
 *  481   [C] Only scalar expressions may be cast to other types.
 * 
 *  482   [C] Expressions may only be cast to 'void' or scalar
 *        types.
 * 
 *  483   [C] A pointer to an object of unknown size cannot be the
 *        operand of an addition operator.
 * 
 *  484   [C] A pointer to an object of unknown size cannot be the
 *        operand of a subtraction operator.
 * 
 *  485   [C] Only integral expressions may be added to pointers.
 * 
 *  486   [C] Only integral expressions and compatible pointers
 *        may be subtracted from pointers.
 * 
 *  487   [C] If two pointers are subtracted, they must be
 *        pointers that address compatible types.
 * 
 *  493   [C] Type of left operand is not compatible with this
 *        operator.
 * 
 *  494   [C] Type of right operand is not compatible with this
 *        operator.
 * 
 *  495   [C] Left operand of '%', '<<', '>>', '&', '^' or '|'
 *        must have integral type.
 * 
 *  496   [C] Right operand of '%', '<<', '>>', '&', '^' or '|'
 *        must have integral type.
 * 
 *  513   [C] Relational operator used to compare pointers to
 *        incompatible types.
 * 
 *  514   [C] Relational operator used to compare a pointer with
 *        an incompatible operand.
 * 
 *  515   [C] Equality operator used to compare a pointer with an
 *        incompatible operand.
 * 
 *  536   [C] First operand of '&&', '||' or '?' must have scalar
 *        (arithmetic or pointer) type.
 * 
 *  537   [C] Second operand of '&&' or '||' must have scalar
 *        (arithmetic or pointer) type.
 * 
 *  540   [C] 2nd and 3rd operands of conditional operator '?'
 *        must have compatible types.
 * 
 *  541   [C] Argument no. %s does not have object type.
 * 
 *  542   [C] Controlling expression must have scalar (arithmetic
 *        or pointer) type.
 * 
 *  546   [C] 'enum %s' has unknown content. Use of an enum tag
 *        with undefined content is not permitted.
 * 
 *  547   [C] This declaration of tag '%s' conflicts with a
 *        previous declaration.
 * 
 *  550   [C] Left operand of '+=' or '-=' is a pointer to an
 *        object of unknown size.
 * 
 *  554   [C] 'static %s()' has been declared and called but no
 *        definition has been given.
 * 
 *  555   [C] Invalid assignment to object of void type or array
 *        type.
 * 
 *  556   [C] Left operand of assignment must be a modifiable
 *        object.
 * 
 *  557   [C] Right operand of assignment is not of arithmetic
 *        type.
 * 
 *  558   [C] Right operand of '+=' or '-=' must have integral
 *        type when left operand is a pointer.
 * 
 *  559   [C] Right operand of '<<=', '>>=', '&=', '|=', '^=' or
 *        '%=' must have integral type.
 * 
 *  560   [C] Left operand of '<<=', '>>=', '&=', '|=', '^=' or
 *        '%=' must have integral type.
 * 
 *  561   [C] Right operand of assignment is not of compatible
 *        'struct'/'union' type.
 * 
 *  562   [C] Right operand of assignment points to a more heavily
 *        qualified type.
 * 
 *  563   [C] Right operand of assignment is not of compatible
 *        pointer type.
 * 
 *  564   [C] Left operand of assignment must be an lvalue (it
 *        must designate an object).
 * 
 *  565   [C] Left operand of '+=' or '-=' must be of arithmetic
 *        or pointer to object type.
 * 
 *  580   [C] Constant is too large to be representable.
 * 
 *  588   [C] Width of bit-field must be an integral constant
 *        expression.
 * 
 *  589   [C] Enumeration constant must be an integral constant
 *        expression.
 * 
 *  590   [C] Array bound must be an integral constant expression.
 * 
 *  591   [C] A 'case' label must be an integral constant
 *        expression.
 * 
 *  605   [C] A declaration must declare a tag or an identifier.
 * 
 *  616   [C] Illegal combination of type specifiers or storage
 *        class specifiers.
 * 
 *  619   [C] The identifier '%s' has already been defined in the
 *        current scope within the ordinary identifier namespace.
 * 
 *  620   [C] Cannot initialize '%s' because it has unknown size.
 * 
 *  621   [C] The struct/union '%s' cannot be initialized because
 *        it has unknown size.
 * 
 *  622   [C] The identifier '%s' has been declared both with and
 *        without linkage in the same scope.
 * 
 *  627   [C] '%s' has different type to previous declaration in
 *        the same scope.
 * 
 *  628   [C] '%s' has different type to previous declaration at
 *        wider scope.
 * 
 *  629   [C] More than one definition of '%s' (with internal
 *        linkage).
 * 
 *  631   [C] More than one declaration of '%s' (with no linkage).
 * 
 *  638   [C] Duplicate member name '%s' in 'struct' or 'union'.
 * 
 *  640   [C] '%s' in 'struct' or 'union' type may not have 'void'
 *        type.
 * 
 *  641   [C] '%s' in 'struct' or 'union' type may not have
 *        function type.
 * 
 *  642   [C] '%s' in 'struct' or 'union' type may not be an array
 *        of unknown size.
 * 
 *  643   [C] '%s' in 'struct' or 'union' type may not be a
 *        'struct' or 'union' with unknown content.
 * 
 *  644   [C] Width of bit-field must be no bigger than the width
 *        of an 'int'.
 * 
 *  645   [C] A zero width bit-field cannot be given a name.
 * 
 *  646   [C] Enumeration constants must have values representable
 *        as 'int's.
 * 
 *  649   [C] K&R style declaration of parameters is not legal
 *        after a function header that includes a parameter list.
 * 
 *  650   [C] Illegal storage class specifier on named function
 *        parameter.
 * 
 *  651   [C] Missing type specifiers in function declaration.
 * 
 *  653   [C] Duplicate definition of 'struct', 'union' or 'enum'
 *        tag '%s'.
 * 
 *  655   [C] Illegal storage class specifier on unnamed function
 *        parameter.
 * 
 *  656   [C] Function return type cannot be function or array
 *        type, or an incomplete struct/union (for function
 *        definition).
 * 
 *  657   [C] Unnamed parameter specified in function definition.
 * 
 *  659   [C] The identifier '%s' was not given in the parameter
 *        list.
 * 
 *  664   [C] Parameter specified with type 'void'.
 * 
 *  665   [C] Two parameters have been declared with the same name
 *        '%s'.
 * 
 *  671   [C] Initializer for object of arithmetic type is not of
 *        arithmetic type.
 * 
 *  673   [C] Initializer points to a more heavily qualified type.
 * 
 *  674   [C] Initializer for pointer is of incompatible type.
 * 
 *  675   [C] Initializer is not of compatible 'struct'/'union'
 *        type.
 * 
 *  677   [C] Array size is negative, or unrepresentable.
 * 
 *  682   [C] Initializer for object of a character type is a
 *        string literal.
 * 
 *  683   [C] Initializer for object of a character type is a wide
 *        string literal.
 * 
 *  684   [C] Too many initializers.
 * 
 *  685   [C] Initializer for any object with static storage
 *        duration must be a constant expression.
 * 
 *  690   [C] String literal contains too many characters to
 *        initialize object.
 * 
 *  698   [C] String literal used to initialize an object of
 *        incompatible type.
 * 
 *  699   [C] String literal used to initialize a pointer of
 *        incompatible type.
 * 
 *  708   [C] No definition found for the label '%s' in this
 *        function.
 * 
 *  709   [C] Initialization of locally declared 'extern %s' is
 *        illegal.
 * 
 *  736   [C] 'case' label does not have unique value within this
 *        'switch' statement.
 * 
 *  737   [C] More than one 'default' label found in 'switch'
 *        statement.
 * 
 *  738   [C] Controlling expression in a 'switch' statement must
 *        have integral type.
 * 
 *  746   [C] 'return exp;' found in '%s()' whose return type is
 *        'void'.
 * 
 *  747   [C] 'return exp;' found in '%s()' whose return type is
 *        qualified 'void'.
 * 
 *  755   [C] 'return' expression is not of arithmetic type.
 * 
 *  756   [C] 'return' expression is not of compatible
 *        'struct'/'union' type.
 * 
 *  757   [C] 'return' expression points to a more heavily
 *        qualified type.
 * 
 *  758   [C] 'return' expression is not of compatible pointer
 *        type.
 * 
 *  766   [C] 'continue' statement found outside an iteration
 *        statement.
 * 
 *  767   [C] 'break' statement found outside a 'switch' or
 *        iteration statement.
 * 
 *  768   [C] 'case' or 'default' found outside a 'switch'
 *        statement.
 * 
 *  774   [C] 'auto' may not be specified on global declaration of
 *        '%s'.
 * 
 *  775   [C] 'register' may not be specified on global
 *        declaration of '%s'.
 * 
 *  801   [C] The '##' operator may not be the first token in a
 *        macro replacement list.
 * 
 *  802   [C] The '##' operator may not be the last token in a
 *        macro replacement list.
 * 
 *  803   [C] The '#' operator may only appear before a macro
 *        parameter.
 * 
 *  804   [C] Macro parameter '%s' is not unique.
 * 
 *  811   [C] The glue operator '##' may only appear in a
 *        '#define' preprocessing directive.
 * 
 *  812   [C] Header name token '<text>' found outside '#include'
 *        preprocessing directive.
 * 
 *  821   [C] '#include %s' does not identify a header or source
 *        file that can be processed.
 * 
 *  834   [C] Function-like macro '%s()' is being redefined as an
 *        object-like macro.
 * 
 *  835   [C] Macro '%s' is being redefined with different
 *        parameter names.
 * 
 *  844   [C] Macro '%s' is being redefined with a different
 *        replacement list.
 * 
 *  845   [C] Object-like macro '%s' is being redefined as a
 *        function-like macro.
 * 
 *  851   [C] More arguments in macro call than specified in
 *        definition.
 * 
 *  852   [C] Unable to find the ')' that marks the end of the
 *        macro call.
 * 
 *  856   [C] Fewer arguments in macro call than specified in
 *        definition.
 * 
 *  866   [C] The string literal in a '#line' directive cannot be
 *        a 'wide string literal'.
 * 
 *  873   [C] Preprocessing token cannot be converted to an actual
 *        token.
 * 
 *  877   [C] '#if' and '#elif' expressions may contain only
 *        integral constants.
 * 
 *  940   [C] Illegal usage of a variably modified type.
 * 
 *  941   [C] A variable length array may not be initialized.
 * 
 *  943   [C] Jump to label '%s' is a jump into the scope of an
 *        identifier with variably modified type.
 * 
 *  944   [C] The label '%s' is inside the scope of an identifier
 *        with variably modified type.
 * 
 * 1023   [C] Using '__alignof__' on function types is illegal.
 * 
 * 1024   [C] Using '__alignof__' on incomplete types is illegal.
 * 
 * 1025   [C] Using '__alignof__' on bit-fields is illegal.
 * 
 * 1033   [C] The identifier __VA_ARGS__ may only be used in the
 *        replacement list of a variadic macro.
 * 
 * 1047   [C] Function is being declared with default argument
 *        syntax after a previous call to the function. This is
 *        not allowed.
 * 
 * 1048   [C] Default argument values are missing for some
 *        parameters in this function declaration. This is not
 *        allowed.
 * 
 * 3236   [C] 'inline' may not be applied to function 'main'.
 * 
 * 3237   [C] inline function '%1s' has external linkage and is
 *        defining an object, '%2s', with static storage duration.
 * 
 * 3238   [C] inline function '%1s' has external linkage and is
 *        referring to an object, '%2s', with internal linkage.
 * 
 * 3244   [C] 'inline' may only be used in the declaration of a
 *        function identifier.
 * 
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_0101( void )
{
   return 0;
}
