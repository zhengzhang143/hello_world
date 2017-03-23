/* >>>------------------------------------------------------------
 * 
 * File: Rule-12.01.c,  Module: M3CM-1.0-QAC-8.1.2
 * 
 * RULE Rule-12.1 (Advisory):
 * The precedence of operators within expressions should be made
 * explicit
 * 
 * Implemented by messages:
 * 3389   Extra parentheses recommended to clarify the ordering of
 *        a % operator and another arithmetic operator (* / % +
 *        -).
 * 
 * 3391   Extra parentheses recommended. A conditional operation
 *        is the operand of another conditional operator.
 * 
 * 3392   Extra parentheses recommended. A shift, relational or
 *        equality operation is the operand of a second identical
 *        operator.
 * 
 * 3394   Extra parentheses recommended. A shift, relational or
 *        equality operation is the operand of a different
 *        operator with the same precedence.
 * 
 * 3395   Extra parentheses recommended. A * or / operation is the
 *        operand of a + or - operator.
 * 
 * 3396   Extra parentheses recommended. A binary operation is the
 *        operand of a conditional operator.
 * 
 * 3397   Extra parentheses recommended. A binary operation is the
 *        operand of a binary operator with different precedence.
 * 
 * <<<------------------------------------------------------------ */



#pragma PRQA_MESSAGES_OFF 3408
#pragma PRQA_MESSAGES_OFF 291,294,295,297,310,314,488,489,502,505,506,510,584,585,587,702,776,777,1278,1307,2201,2205,2213,2214,2216
#pragma PRQA_MESSAGES_OFF 2791,2814,2832,2834,2861,2912,2982,2984,2995,2996
#pragma PRQA_MESSAGES_OFF 3101,3102,3103,3112,3120,3132,3198,3199,3200,3203,3208,3210,3212,3227,3243,3305,3343,3344,3355,3356
#pragma PRQA_MESSAGES_OFF 3371,3372,3381,3382,3404,3408,3415,3416,3417,3422,3423,3424,3425,3426,3427,3440,3444,3446,3447,3448,3492,3495
#pragma PRQA_MESSAGES_OFF 3600,3602,3617,3672,3671,3673,3684,3689,3760,3762,4104,4105,4108,4109,4110,4111,4112,4114,4115,4116,4130,4131
#pragma PRQA_MESSAGES_OFF 1800-1899,4200-4299,4303,4304,4397,4400-4599

#include "misra.h"
#include "m3cmex.h"

typedef unsigned int TYPE;
typedef struct st { TYPE sa; TYPE sb; } TD;

extern TYPE      ef(void);
static TYPE      ar[100];
static TYPE      a;
static TYPE      b;
static TYPE      c;
static TYPE      d;
static TYPE      e;
static TYPE *    p;
static TD        stx;
static TD   *    pst;
static uint32_t  x;

static void mex(void);
static void bang(void);
static void comp(void);
static void preplusplus(void);
static void preminusminus(void);
static void postplusplus(void);
static void postminusminus(void);
static void unaryplus(void);
static void unaryminus(void);
static void deref(void);
static void cast(void);
static void multiply(void);
static void divide(void);
static void modulo(void);
static void add(void);
static void subtract(void);
static void lshift(void);
static void rshift(void);
static void lt(void);
static void lte(void);
static void gte(void);
static void gt(void);
static void equals(void);
static void neq(void);
static void fbitand(void);
static void bitxor(void);
static void bitior(void);
static void fand(void);
static void funcor(void);
static void t1(void);
static void t2(void);
static void t3(void);
static void assign(void);
static void plusequals(void);
static void minusequals(void);
static void multiplyequals(void);
static void divideequals(void);
static void moduloequals(void);
static void andequals(void);
static void xorequals(void);
static void orequals(void);
static void comma(void);

extern int16_t rule_1201( void )
{
    mex();
    bang();
    comp();
    preplusplus();
    preminusminus();
    postplusplus();
    postminusminus();
    unaryplus();
    unaryminus();
    deref();
    cast();
    multiply();
    divide();
    modulo();
    add();
    subtract();
    lshift();
    rshift();
    lt();
    lte();
    gte();
    gt();
    equals();
    neq();
    fbitand();
    bitxor();
    bitior();
    fand();
    funcor();
    t1();
    t2();
    t3();
    assign();
    plusequals();
    minusequals();
    multiplyequals();
    divideequals();
    moduloequals();
    andequals();
    xorequals();
    orequals();
    comma();

    return 1;
}


static void mex(void)
{
    *p++;                                               /*           */        /* Compliant     */
    sizeof a+b;                                         /*           */        /* Non-compliant */

    a + b;                                              /*           */        /* Compliant     */
    a + b + c;                                          /*           */        /* Compliant     */
    (a + b) + c;                                        /*           */        /* Compliant     */
    a + (b + c);                                        /*           */        /* Compliant     */
    a + b - c + d;                                      /*           */        /* Compliant     */
    (a + b) - (c + d);                                  /*           */        /* Compliant     */

    d = a == b ? a : a - b;                             /* 3396 3390 */        /* Non-Compliant */

    d = (a == b) ? a : (a - b);                         /*           */        /* Compliant     */
    d = a << (b + c);                                   /*           */        /* Compliant     */
    if (a && b && c) { }                                /*           */        /* Compliant     */

    #if defined(X) && ((X + Y) > Z)                     /*           */        /* Compliant     */
    #endif
    #if !defined(X) && defined(Y)                       /*           */        /* Compliant     */
    #endif

    d = a , b;                                          /*           */        /* Compliant     */
}





static void bang(void)
{
/**********************
Unary ! operator
**********************/
    ! ef();                      ef();                  /*           */
    ! ar[2];                     ef();                  /*           */
    ! pst->sa;                   ef();                  /*           */
    ! stx.sa;                    ef();                  /*           */
    ! b *  c;                    ef();                  /*           */
    ! b /  c;                    ef();                  /*           */
    ! b %  c;                    ef();                  /*           */
    ! b +  c;                    ef();                  /*           */
    ! b -  c;                    ef();                  /*           */
    ! b &  c;                    ef();                  /*           */
    ! b |  c;                    ef();                  /*           */
    ! b ^  c;                    ef();                  /*           */
    ! b << c;                    ef();                  /*           */
    ! b >> c;                    ef();                  /*           */
    ! b <  c;                    ef();                  /*           */
    ! b <= c;                    ef();                  /*           */
    ! b >= c;                    ef();                  /*           */
    ! b >  c;                    ef();                  /*           */
    ! b == c;                    ef();                  /*           */
    ! b != c;                    ef();                  /*           */
    ! b && c;                    ef();                  /*           */
    ! b || c;                    ef();                  /*           */
    ! !b;                        ef();                  /*           */
    ! ++b;                       ef();                  /*           */
    ! --b;                       ef();                  /*           */
    ! b++;                       ef();                  /*           */
    ! b--;                       ef();                  /*           */
    ! +b;                        ef();                  /*           */
    ! -b;                        ef();                  /*           */
    ! ~b;                        ef();                  /*           */
    ! *p;                        ef();                  /*           */
    ! (TYPE)x;                   ef();                  /*           */
    ! a ? b : c;                 ef();                  /*           */
    a ? ! b : c;                 ef();                  /*           */
    a ? b : ! c;                 ef();                  /*           */

}


static void comp(void)
{
/**********************
Unary ~ operator
**********************/
    ~ ef();                      ef();                  /*           */
    ~ ar[2];                     ef();                  /*           */
    ~ pst->sa;                   ef();                  /*           */
    ~ stx.sa;                    ef();                  /*           */
    ~ b *  c;                    ef();                  /*           */
    ~ b /  c;                    ef();                  /*           */
    ~ b %  c;                    ef();                  /*           */
    ~ b +  c;                    ef();                  /*           */
    ~ b -  c;                    ef();                  /*           */
    ~ b &  c;                    ef();                  /*           */
    ~ b |  c;                    ef();                  /*           */
    ~ b ^  c;                    ef();                  /*           */
    ~ b << c;                    ef();                  /*           */
    ~ b >> c;                    ef();                  /*           */
    ~ b <  c;                    ef();                  /*           */
    ~ b <= c;                    ef();                  /*           */
    ~ b >= c;                    ef();                  /*           */
    ~ b >  c;                    ef();                  /*           */
    ~ b == c;                    ef();                  /*           */
    ~ b != c;                    ef();                  /*           */
    ~ b && c;                    ef();                  /*           */
    ~ b || c;                    ef();                  /*           */
    ~ !b;                        ef();                  /*           */
    ~ ++b;                       ef();                  /*           */
    ~ --b;                       ef();                  /*           */
    ~ b++;                       ef();                  /*           */
    ~ b--;                       ef();                  /*           */
    ~ +b;                        ef();                  /*           */
    ~ -b;                        ef();                  /*           */
    ~ ~b;                        ef();                  /*           */
    ~ *p;                        ef();                  /*           */
    ~ (TYPE)x;                   ef();                  /*           */
    ~ a ? b : c;                 ef();                  /*           */
    a ? ~ b : c;                 ef();                  /*           */
    a ? b : ~ c;                 ef();                  /*           */

}


static void preplusplus(void)
{
/**********************
Unary prefix ++ operator
**********************/
    ++ ar[2];                    ef();                  /*           */
    ++ pst->sa;                  ef();                  /*           */
    ++ stx.sa;                   ef();                  /*           */
    ++ b *  c;                   ef();                  /*           */
    ++ b /  c;                   ef();                  /*           */
    ++ b %  c;                   ef();                  /*           */
    ++ b +  c;                   ef();                  /*           */
    ++ b -  c;                   ef();                  /*           */
    ++ b &  c;                   ef();                  /*           */
    ++ b |  c;                   ef();                  /*           */
    ++ b ^  c;                   ef();                  /*           */
    ++ b << c;                   ef();                  /*           */
    ++ b >> c;                   ef();                  /*           */
    ++ b <  c;                   ef();                  /*           */
    ++ b <= c;                   ef();                  /*           */
    ++ b >= c;                   ef();                  /*           */
    ++ b >  c;                   ef();                  /*           */
    ++ b == c;                   ef();                  /*           */
    ++ b != c;                   ef();                  /*           */
    ++ b && c;                   ef();                  /*           */
    ++ b || c;                   ef();                  /*           */
    ++a ? b : c;                 ef();                  /*           */
    a ? ++b : c;                 ef();                  /*           */
    a ? b : ++c;                 ef();                  /*           */

}

static void preminusminus(void)
{
/**********************
Unary prefix -- operator
**********************/
    -- ar[2];                    ef();                  /*           */
    -- pst->sa;                  ef();                  /*           */
    -- stx.sa;                   ef();                  /*           */
    -- b *  c;                   ef();                  /*           */
    -- b /  c;                   ef();                  /*           */
    -- b %  c;                   ef();                  /*           */
    -- b +  c;                   ef();                  /*           */
    -- b -  c;                   ef();                  /*           */
    -- b &  c;                   ef();                  /*           */
    -- b |  c;                   ef();                  /*           */
    -- b ^  c;                   ef();                  /*           */
    -- b << c;                   ef();                  /*           */
    -- b >> c;                   ef();                  /*           */
    -- b <  c;                   ef();                  /*           */
    -- b <= c;                   ef();                  /*           */
    -- b >= c;                   ef();                  /*           */
    -- b >  c;                   ef();                  /*           */
    -- b == c;                   ef();                  /*           */
    -- b != c;                   ef();                  /*           */
    -- b && c;                   ef();                  /*           */
    -- b || c;                   ef();                  /*           */
    --a ? b : c;                 ef();                  /*           */
    a ? --b : c;                 ef();                  /*           */
    a ? b : --c;                 ef();                  /*           */

}

static void postplusplus(void)
{
/**********************
Unary postfix ++ operator
**********************/
    ar[2] ++;                    ef();                  /*           */
    pst->sa ++;                  ef();                  /*           */
    stx.sa ++;                   ef();                  /*           */
    b ++ *  c;                   ef();                  /*           */
    b ++ /  c;                   ef();                  /*           */
    b ++ %  c;                   ef();                  /*           */
    b ++ +  c;                   ef();                  /*           */
    b ++ -  c;                   ef();                  /*           */
    b ++ &  c;                   ef();                  /*           */
    b ++ |  c;                   ef();                  /*           */
    b ++ ^  c;                   ef();                  /*           */
    b ++ << c;                   ef();                  /*           */
    b ++ >> c;                   ef();                  /*           */
    b ++ <  c;                   ef();                  /*           */
    b ++ <= c;                   ef();                  /*           */
    b ++ >= c;                   ef();                  /*           */
    b ++ >  c;                   ef();                  /*           */
    b ++ == c;                   ef();                  /*           */
    b ++ != c;                   ef();                  /*           */
    b ++ && c;                   ef();                  /*           */
    b ++ || c;                   ef();                  /*           */
    a++ ? b : c;                 ef();                  /*           */
    a ? b++ : c;                 ef();                  /*           */
    a ? b : c++;                 ef();                  /*           */

}


static void postminusminus(void)
{
/**********************
Unary postfix -- operator
**********************/
    ar[2] --;                    ef();                  /*           */
    pst->sa --;                  ef();                  /*           */
    stx.sa --;                   ef();                  /*           */
    b -- *  c;                   ef();                  /*           */
    b -- /  c;                   ef();                  /*           */
    b -- %  c;                   ef();                  /*           */
    b -- +  c;                   ef();                  /*           */
    b -- -  c;                   ef();                  /*           */
    b -- &  c;                   ef();                  /*           */
    b -- |  c;                   ef();                  /*           */
    b -- ^  c;                   ef();                  /*           */
    b -- << c;                   ef();                  /*           */
    b -- >> c;                   ef();                  /*           */
    b -- <  c;                   ef();                  /*           */
    b -- <= c;                   ef();                  /*           */
    b -- >= c;                   ef();                  /*           */
    b -- >  c;                   ef();                  /*           */
    b -- == c;                   ef();                  /*           */
    b -- != c;                   ef();                  /*           */
    b -- && c;                   ef();                  /*           */
    b -- || c;                   ef();                  /*           */
    a-- ? b : c;                 ef();                  /*           */
    a ? b-- : c;                 ef();                  /*           */
    a ? b : c--;                 ef();                  /*           */

}

static void unaryplus(void)
{
/**********************
Unary + operator
**********************/
    + ef();                      ef();                  /*           */
    + ar[2];                     ef();                  /*           */
    + pst->sa;                   ef();                  /*           */
    + stx.sa;                    ef();                  /*           */
    + b *  c;                    ef();                  /*           */
    + b /  c;                    ef();                  /*           */
    + b %  c;                    ef();                  /*           */
    + b +  c;                    ef();                  /*           */
    + b -  c;                    ef();                  /*           */
    + b &  c;                    ef();                  /*           */
    + b |  c;                    ef();                  /*           */
    + b ^  c;                    ef();                  /*           */
    + b << c;                    ef();                  /*           */
    + b >> c;                    ef();                  /*           */
    + b <  c;                    ef();                  /*           */
    + b <= c;                    ef();                  /*           */
    + b >= c;                    ef();                  /*           */
    + b >  c;                    ef();                  /*           */
    + b == c;                    ef();                  /*           */
    + b != c;                    ef();                  /*           */
    + b && c;                    ef();                  /*           */
    + b || c;                    ef();                  /*           */
    + !b;                        ef();                  /*           */
    + ++b;                       ef();                  /*           */
    + --b;                       ef();                  /*           */
    + b++;                       ef();                  /*           */
    + b--;                       ef();                  /*           */
    + +b;                        ef();                  /*           */
    + -b;                        ef();                  /*           */
    + ~b;                        ef();                  /*           */
    + *p;                        ef();                  /*           */
    + (TYPE)x;                   ef();                  /*           */
    + a ? b : c;                 ef();                  /*           */
    a ? + b : c;                 ef();                  /*           */
    a ? b : + c;                 ef();                  /*           */

}

static void unaryminus(void)
{
/**********************
Unary - operator
**********************/
    - ef();                      ef();                  /*           */
    - ar[2];                     ef();                  /*           */
    - pst->sa;                   ef();                  /*           */
    - stx.sa;                    ef();                  /*           */
    - b *  c;                    ef();                  /*           */
    - b /  c;                    ef();                  /*           */
    - b %  c;                    ef();                  /*           */
    - b +  c;                    ef();                  /*           */
    - b -  c;                    ef();                  /*           */
    - b &  c;                    ef();                  /*           */
    - b |  c;                    ef();                  /*           */
    - b ^  c;                    ef();                  /*           */
    - b << c;                    ef();                  /*           */
    - b >> c;                    ef();                  /*           */
    - b <  c;                    ef();                  /*           */
    - b <= c;                    ef();                  /*           */
    - b >= c;                    ef();                  /*           */
    - b >  c;                    ef();                  /*           */
    - b == c;                    ef();                  /*           */
    - b != c;                    ef();                  /*           */
    - b && c;                    ef();                  /*           */
    - b || c;                    ef();                  /*           */
    - !b;                        ef();                  /*           */
    - ++b;                       ef();                  /*           */
    - --b;                       ef();                  /*           */
    - b++;                       ef();                  /*           */
    - b--;                       ef();                  /*           */
    - +b;                        ef();                  /*           */
    - -b;                        ef();                  /*           */
    - ~b;                        ef();                  /*           */
    - *p;                        ef();                  /*           */
    - (TYPE)x;                   ef();                  /*           */
    - a ? b : c;                 ef();                  /*           */
    a ? - b : c;                 ef();                  /*           */
    a ? b : - c;                 ef();                  /*           */

}



static void deref(void)
{
/**********************
Unary * operator
**********************/
    * p *  c;                    ef();                  /*           */
    * p /  c;                    ef();                  /*           */
    * p %  c;                    ef();                  /*           */
    * p +  c;                    ef();                  /*           */
    * p -  c;                    ef();                  /*           */
    * p &  c;                    ef();                  /*           */
    * p |  c;                    ef();                  /*           */
    * p ^  c;                    ef();                  /*           */
    * p << c;                    ef();                  /*           */
    * p >> c;                    ef();                  /*           */
    * p <  c;                    ef();                  /*           */
    * p <= c;                    ef();                  /*           */
    * p >= c;                    ef();                  /*           */
    * p >  c;                    ef();                  /*           */
    * p == c;                    ef();                  /*           */
    * p != c;                    ef();                  /*           */
    * p && c;                    ef();                  /*           */
    * p || c;                    ef();                  /*           */
    * ++p;                       ef();                  /*           */
    ++ *p;                       ef();                  /*           */
    * --p;                       ef();                  /*           */
    -- *p;                       ef();                  /*           */
    * p++;                       ef();                  /*           */
    * p--;                       ef();                  /*           */
    * (TYPE *)p;                 ef();                  /*           */
    * p ? b : c;                 ef();                  /*           */
    a ? * p : c;                 ef();                  /*           */
    a ? b : * p;                 ef();                  /*           */


}



static void cast(void)
{
/**********************
Unary (cast) operator
**********************/
    (TYPE) ef();                 ef();                  /*           */
    (TYPE) ar[2];                ef();                  /*           */
    (TYPE) pst->sa;              ef();                  /*           */
    (TYPE) stx.sa;               ef();                  /*           */
    (TYPE) b *  c;               ef();                  /*           */
    (TYPE) b /  c;               ef();                  /*           */
    (TYPE) b %  c;               ef();                  /*           */
    (TYPE) b +  c;               ef();                  /*           */
    (TYPE) b -  c;               ef();                  /*           */
    (TYPE) b &  c;               ef();                  /*           */
    (TYPE) b |  c;               ef();                  /*           */
    (TYPE) b ^  c;               ef();                  /*           */
    (TYPE) b << c;               ef();                  /*           */
    (TYPE) b >> c;               ef();                  /*           */
    (TYPE) b <  c;               ef();                  /*           */
    (TYPE) b <= c;               ef();                  /*           */
    (TYPE) b >= c;               ef();                  /*           */
    (TYPE) b >  c;               ef();                  /*           */
    (TYPE) b == c;               ef();                  /*           */
    (TYPE) b != c;               ef();                  /*           */
    (TYPE) b && c;               ef();                  /*           */
    (TYPE) b || c;               ef();                  /*           */
    (TYPE) !b;                   ef();                  /*           */
    (TYPE) ++b;                  ef();                  /*           */
    (TYPE) --b;                  ef();                  /*           */
    (TYPE) b++;                  ef();                  /*           */
    (TYPE) b--;                  ef();                  /*           */
    (TYPE) +b;                   ef();                  /*           */
    (TYPE) -b;                   ef();                  /*           */
    (TYPE) ~b;                   ef();                  /*           */
    (TYPE) *p;                   ef();                  /*           */
    (TYPE) (TYPE)x;              ef();                  /*           */
    (TYPE) a ? b : c;            ef();                  /*           */
    a ? (TYPE) b : c;            ef();                  /*           */
    a ? b : (TYPE) c;            ef();                  /*           */

}



static void multiply(void)
{
/**********************
Binary * operator
**********************/
    a * ef();                    ef();                  /*           */
    a * ar[2];                   ef();                  /*           */
    a * pst->sa;                 ef();                  /*           */
    a * stx.sa;                  ef();                  /*           */
    a * b *  c;                  ef();                  /*           */
    a * b /  c;                  ef();                  /*           */
    a * b %  c;                  ef();                  /* 3389 3390 */
    a * b +  c;                  ef();                  /* 3395 3390 */
    a * b -  c;                  ef();                  /* 3395 3390 */
    a * b &  c;                  ef();                  /* 3397 3390 */
    a * b |  c;                  ef();                  /* 3397 3390 */
    a * b ^  c;                  ef();                  /* 3397 3390 */
    a * b << c;                  ef();                  /* 3397 3390 */
    a * b >> c;                  ef();                  /* 3397 3390 */
    a * b <  c;                  ef();                  /* 3397 3390 */
    a * b <= c;                  ef();                  /* 3397 3390 */
    a * b >= c;                  ef();                  /* 3397 3390 */
    a * b >  c;                  ef();                  /* 3397 3390 */
    a * b == c;                  ef();                  /* 3397 3390 */
    a * b != c;                  ef();                  /* 3397 3390 */
    a * b && c;                  ef();                  /* 3397 3390 */
    a * b || c;                  ef();                  /* 3397 3390 */
    a *  !b;                     ef();                  /*           */
    a *  ++b;                    ef();                  /*           */
    a *  --b;                    ef();                  /*           */
    a *  b++;                    ef();                  /*           */
    a *  b--;                    ef();                  /*           */
    a *  +b;                     ef();                  /*           */
    a *  -b;                     ef();                  /*           */
    a *  ~b;                     ef();                  /*           */
    a *  *p;                     ef();                  /*           */
    a *  (TYPE)x;                ef();                  /*           */
    a * d ? b : c;               ef();                  /* 3396 3390 */
    a ? b * d : c;               ef();                  /* 3396 3390 */
    a ? b : c * d;               ef();                  /* 3396 3390 */

}



static void divide(void)
{
/**********************
Binary / operator
**********************/
    a / ef();                    ef();                  /*           */
    a / ar[2];                   ef();                  /*           */
    a / pst->sa;                 ef();                  /*           */
    a / stx.sa;                  ef();                  /*           */
    a / b *  c;                  ef();                  /*           */
    a / b /  c;                  ef();                  /*           */
    a / b %  c;                  ef();                  /* 3389 3390 */
    a / b +  c;                  ef();                  /* 3395 3390 */
    a / b -  c;                  ef();                  /* 3395 3390 */
    a / b &  c;                  ef();                  /* 3397 3390 */
    a / b |  c;                  ef();                  /* 3397 3390 */
    a / b ^  c;                  ef();                  /* 3397 3390 */
    a / b << c;                  ef();                  /* 3397 3390 */
    a / b >> c;                  ef();                  /* 3397 3390 */
    a / b <  c;                  ef();                  /* 3397 3390 */
    a / b <= c;                  ef();                  /* 3397 3390 */
    a / b >= c;                  ef();                  /* 3397 3390 */
    a / b >  c;                  ef();                  /* 3397 3390 */
    a / b == c;                  ef();                  /* 3397 3390 */
    a / b != c;                  ef();                  /* 3397 3390 */
    a / b && c;                  ef();                  /* 3397 3390 */
    a / b || c;                  ef();                  /* 3397 3390 */
    a /  !b;                     ef();                  /*           */
    a /  ++b;                    ef();                  /*           */
    a /  --b;                    ef();                  /*           */
    a /  b++;                    ef();                  /*           */
    a /  b--;                    ef();                  /*           */
    a /  +b;                     ef();                  /*           */
    a /  -b;                     ef();                  /*           */
    a /  ~b;                     ef();                  /*           */
    a /  *p;                     ef();                  /*           */
    a /  (TYPE)x;                ef();                  /*           */
    a / d ? b : c;               ef();                  /* 3396 3390 */
    a ? b / d : c;               ef();                  /* 3396 3390 */
    a ? b : c / d;               ef();                  /* 3396 3390 */


}



static void modulo(void)
{
/**********************
Binary % operator
**********************/
    a % ef();                    ef();                  /*           */
    a % ar[2];                   ef();                  /*           */
    a % pst->sa;                 ef();                  /*           */
    a % stx.sa;                  ef();                  /*           */
    a % b *  c;                  ef();                  /* 3389 3390 */
    a % b /  c;                  ef();                  /* 3389 3390 */
    a % b %  c;                  ef();                  /* 3389 3390 */
    a % b +  c;                  ef();                  /* 3389 3390 */
    a % b -  c;                  ef();                  /* 3389 3390 */
    a % b &  c;                  ef();                  /* 3397 3390 */
    a % b |  c;                  ef();                  /* 3397 3390 */
    a % b ^  c;                  ef();                  /* 3397 3390 */
    a % b << c;                  ef();                  /* 3397 3390 */
    a % b >> c;                  ef();                  /* 3397 3390 */
    a % b <  c;                  ef();                  /* 3397 3390 */
    a % b <= c;                  ef();                  /* 3397 3390 */
    a % b >= c;                  ef();                  /* 3397 3390 */
    a % b >  c;                  ef();                  /* 3397 3390 */
    a % b == c;                  ef();                  /* 3397 3390 */
    a % b != c;                  ef();                  /* 3397 3390 */
    a % b && c;                  ef();                  /* 3397 3390 */
    a % b || c;                  ef();                  /* 3397 3390 */
    a %  !b;                     ef();                  /*           */
    a %  ++b;                    ef();                  /*           */
    a %  --b;                    ef();                  /*           */
    a %  b++;                    ef();                  /*           */
    a %  b--;                    ef();                  /*           */
    a %  +b;                     ef();                  /*           */
    a %  -b;                     ef();                  /*           */
    a %  ~b;                     ef();                  /*           */
    a %  *p;                     ef();                  /*           */
    a %  (TYPE)x;                ef();                  /*           */
    a % d ? b : c;               ef();                  /* 3396 3390 */
    a ? b % d : c;               ef();                  /* 3396 3390 */
    a ? b : c % d;               ef();                  /* 3396 3390 */


}



static void add(void)
{
/**********************
Binary + operator
**********************/
    a + ef();                    ef();                  /*           */
    a + ar[2];                   ef();                  /*           */
    a + pst->sa;                 ef();                  /*           */
    a + stx.sa;                  ef();                  /*           */
    a + b *  c;                  ef();                  /* 3395 3390 */
    a + b /  c;                  ef();                  /* 3395 3390 */
    a + b %  c;                  ef();                  /* 3389 3390 */
    a + b +  c;                  ef();                  /*           */
    a + b -  c;                  ef();                  /*           */
    a + b &  c;                  ef();                  /* 3397 3390 */
    a + b |  c;                  ef();                  /* 3397 3390 */
    a + b ^  c;                  ef();                  /* 3397 3390 */
    a + b << c;                  ef();                  /* 3397 3390 */
    a + b >> c;                  ef();                  /* 3397 3390 */
    a + b <  c;                  ef();                  /* 3397 3390 */
    a + b <= c;                  ef();                  /* 3397 3390 */
    a + b >= c;                  ef();                  /* 3397 3390 */
    a + b >  c;                  ef();                  /* 3397 3390 */
    a + b == c;                  ef();                  /* 3397 3390 */
    a + b != c;                  ef();                  /* 3397 3390 */
    a + b && c;                  ef();                  /* 3397 3390 */
    a + b || c;                  ef();                  /* 3397 3390 */
    a +  !b;                     ef();                  /*           */
    a +  ++b;                    ef();                  /*           */
    a +  --b;                    ef();                  /*           */
    a +  b++;                    ef();                  /*           */
    a +  b--;                    ef();                  /*           */
    a +  +b;                     ef();                  /*           */
    a +  -b;                     ef();                  /*           */
    a +  ~b;                     ef();                  /*           */
    a +  *p;                     ef();                  /*           */
    a +  (TYPE)x;                ef();                  /*           */
    a + d ? b : c;               ef();                  /* 3396 3390 */
    a ? b + d : c;               ef();                  /* 3396 3390 */
    a ? b : c + d;               ef();                  /* 3396 3390 */

}



static void subtract(void)
{
/**********************
Binary - operator
**********************/
    a - ef();                    ef();                  /*           */
    a - ar[2];                   ef();                  /*           */
    a - pst->sa;                 ef();                  /*           */
    a - stx.sa;                  ef();                  /*           */
    a - b *  c;                  ef();                  /* 3395 3390 */
    a - b /  c;                  ef();                  /* 3395 3390 */
    a - b %  c;                  ef();                  /* 3389 3390 */
    a - b +  c;                  ef();                  /*           */
    a - b -  c;                  ef();                  /*           */
    a - b &  c;                  ef();                  /* 3397 3390 */
    a - b |  c;                  ef();                  /* 3397 3390 */
    a - b ^  c;                  ef();                  /* 3397 3390 */
    a - b << c;                  ef();                  /* 3397 3390 */
    a - b >> c;                  ef();                  /* 3397 3390 */
    a - b <  c;                  ef();                  /* 3397 3390 */
    a - b <= c;                  ef();                  /* 3397 3390 */
    a - b >= c;                  ef();                  /* 3397 3390 */
    a - b >  c;                  ef();                  /* 3397 3390 */
    a - b == c;                  ef();                  /* 3397 3390 */
    a - b != c;                  ef();                  /* 3397 3390 */
    a - b && c;                  ef();                  /* 3397 3390 */
    a - b || c;                  ef();                  /* 3397 3390 */
    a -  !b;                     ef();                  /*           */
    a -  ++b;                    ef();                  /*           */
    a -  --b;                    ef();                  /*           */
    a -  b++;                    ef();                  /*           */
    a -  b--;                    ef();                  /*           */
    a -  +b;                     ef();                  /*           */
    a -  -b;                     ef();                  /*           */
    a -  ~b;                     ef();                  /*           */
    a -  *p;                     ef();                  /*           */
    a -  (TYPE)x;                ef();                  /*           */
    a - d ? b : c;               ef();                  /* 3396 3390 */
    a ? b - d : c;               ef();                  /* 3396 3390 */
    a ? b : c - d;               ef();                  /* 3396 3390 */
}



static void lshift(void)
{
/**********************
Binary << operator
**********************/
    a << ef();                   ef();                  /*           */
    a << ar[2];                  ef();                  /*           */
    a << pst->sa;                ef();                  /*           */
    a << stx.sa;                 ef();                  /*           */
    a << b *  c;                 ef();                  /* 3397 3390 */
    a << b /  c;                 ef();                  /* 3397 3390 */
    a << b %  c;                 ef();                  /* 3397 3390 */
    a << b +  c;                 ef();                  /* 3397 3390 */
    a << b -  c;                 ef();                  /* 3397 3390 */
    a << b &  c;                 ef();                  /* 3397 3390 */
    a << b |  c;                 ef();                  /* 3397 3390 */
    a << b ^  c;                 ef();                  /* 3397 3390 */
    a << b << c;                 ef();                  /* 3392 3390 */
    a << b >> c;                 ef();                  /* 3394 3390 */
    a << b <  c;                 ef();                  /* 3397 3390 */
    a << b <= c;                 ef();                  /* 3397 3390 */
    a << b >= c;                 ef();                  /* 3397 3390 */
    a << b >  c;                 ef();                  /* 3397 3390 */
    a << b == c;                 ef();                  /* 3397 3390 */
    a << b != c;                 ef();                  /* 3397 3390 */
    a << b && c;                 ef();                  /* 3397 3390 */
    a << b || c;                 ef();                  /* 3397 3390 */
    a << !b;                     ef();                  /*           */
    a << ++b;                    ef();                  /*           */
    a << --b;                    ef();                  /*           */
    a << b++;                    ef();                  /*           */
    a << b--;                    ef();                  /*           */
    a << +b;                     ef();                  /*           */
    a << -b;                     ef();                  /*           */
    a << ~b;                     ef();                  /*           */
    a << *p;                     ef();                  /*           */
    a << (TYPE)x;                ef();                  /*           */
    a<< d ? b : c;               ef();                  /* 3396 3390 */
    a ? b<< d : c;               ef();                  /* 3396 3390 */
    a ? b : c<< d;               ef();                  /* 3396 3390 */

}



static void rshift(void)
{
/**********************
Binary << operator
**********************/
    a >> ef();                   ef();                  /*           */
    a >> ar[2];                  ef();                  /*           */
    a >> pst->sa;                ef();                  /*           */
    a >> stx.sa;                 ef();                  /*           */
    a >> b *  c;                 ef();                  /* 3397 3390 */
    a >> b /  c;                 ef();                  /* 3397 3390 */
    a >> b %  c;                 ef();                  /* 3397 3390 */
    a >> b +  c;                 ef();                  /* 3397 3390 */
    a >> b -  c;                 ef();                  /* 3397 3390 */
    a >> b &  c;                 ef();                  /* 3397 3390 */
    a >> b |  c;                 ef();                  /* 3397 3390 */
    a >> b ^  c;                 ef();                  /* 3397 3390 */
    a >> b << c;                 ef();                  /* 3394 3390 */
    a >> b >> c;                 ef();                  /* 3392 3390 */
    a >> b <  c;                 ef();                  /* 3397 3390 */
    a >> b <= c;                 ef();                  /* 3397 3390 */
    a >> b >= c;                 ef();                  /* 3397 3390 */
    a >> b >  c;                 ef();                  /* 3397 3390 */
    a >> b == c;                 ef();                  /* 3397 3390 */
    a >> b != c;                 ef();                  /* 3397 3390 */
    a >> b && c;                 ef();                  /* 3397 3390 */
    a >> b || c;                 ef();                  /* 3397 3390 */
    a >> !b;                     ef();                  /*           */
    a >> ++b;                    ef();                  /*           */
    a >> --b;                    ef();                  /*           */
    a >> b++;                    ef();                  /*           */
    a >> b--;                    ef();                  /*           */
    a >> +b;                     ef();                  /*           */
    a >> -b;                     ef();                  /*           */
    a >> ~b;                     ef();                  /*           */
    a >> *p;                     ef();                  /*           */
    a >> (TYPE)x;                ef();                  /*           */
    a>> d ? b : c;               ef();                  /* 3396 3390 */
    a ? b>> d : c;               ef();                  /* 3396 3390 */
    a ? b : c>> d;               ef();                  /* 3396 3390 */
}



static void lt(void)
{
/**********************
Binary <  operator
**********************/
    a <  ef();                   ef();                  /*           */
    a <  ar[2];                  ef();                  /*           */
    a <  pst->sa;                ef();                  /*           */
    a <  stx.sa;                 ef();                  /*           */
    a <  b *  c;                 ef();                  /* 3397 3390 */
    a <  b /  c;                 ef();                  /* 3397 3390 */
    a <  b %  c;                 ef();                  /* 3397 3390 */
    a <  b +  c;                 ef();                  /* 3397 3390 */
    a <  b -  c;                 ef();                  /* 3397 3390 */
    a <  b &  c;                 ef();                  /* 3397 3390 */
    a <  b |  c;                 ef();                  /* 3397 3390 */
    a <  b ^  c;                 ef();                  /* 3397 3390 */
    a <  b << c;                 ef();                  /* 3397 3390 */
    a <  b >> c;                 ef();                  /* 3397 3390 */
    a <  b <  c;                 ef();                  /* 3392 3390 */
    a <  b <= c;                 ef();                  /* 3394 3390 */
    a <  b >= c;                 ef();                  /* 3394 3390 */
    a <  b >  c;                 ef();                  /* 3394 3390 */
    a <  b == c;                 ef();                  /* 3397 3390 */
    a <  b != c;                 ef();                  /* 3397 3390 */
    a <  b && c;                 ef();                  /* 3397 3390 */
    a <  b || c;                 ef();                  /* 3397 3390 */
    a <  !b;                     ef();                  /*           */
    a <  ++b;                    ef();                  /*           */
    a <  --b;                    ef();                  /*           */
    a <  b++;                    ef();                  /*           */
    a <  b--;                    ef();                  /*           */
    a <  +b;                     ef();                  /*           */
    a <  -b;                     ef();                  /*           */
    a <  ~b;                     ef();                  /*           */
    a <  *p;                     ef();                  /*           */
    a <  (TYPE)x;                ef();                  /*           */
    a < d ? b : c;               ef();                  /* 3396 3390 */
    a ? b < d : c;               ef();                  /* 3396 3390 */
    a ? b : c < d;               ef();                  /* 3396 3390 */
}



static void lte(void)
{
/**********************
Binary <= operator
**********************/
    a <= ef();                   ef();                  /*           */
    a <= ar[2];                  ef();                  /*           */
    a <= pst->sa;                ef();                  /*           */
    a <= stx.sa;                 ef();                  /*           */
    a <= b *  c;                 ef();                  /* 3397 3390 */
    a <= b /  c;                 ef();                  /* 3397 3390 */
    a <= b %  c;                 ef();                  /* 3397 3390 */
    a <= b +  c;                 ef();                  /* 3397 3390 */
    a <= b -  c;                 ef();                  /* 3397 3390 */
    a <= b &  c;                 ef();                  /* 3397 3390 */
    a <= b |  c;                 ef();                  /* 3397 3390 */
    a <= b ^  c;                 ef();                  /* 3397 3390 */
    a <= b << c;                 ef();                  /* 3397 3390 */
    a <= b >> c;                 ef();                  /* 3397 3390 */
    a <= b <  c;                 ef();                  /* 3394 3390 */
    a <= b <= c;                 ef();                  /* 3392 3390 */
    a <= b >= c;                 ef();                  /* 3394 3390 */
    a <= b >  c;                 ef();                  /* 3394 3390 */
    a <= b == c;                 ef();                  /* 3397 3390 */
    a <= b != c;                 ef();                  /* 3397 3390 */
    a <= b && c;                 ef();                  /* 3397 3390 */
    a <= b || c;                 ef();                  /* 3397 3390 */
    a <= !b;                     ef();                  /*           */
    a <= ++b;                    ef();                  /*           */
    a <= --b;                    ef();                  /*           */
    a <= b++;                    ef();                  /*           */
    a <= b--;                    ef();                  /*           */
    a <= +b;                     ef();                  /*           */
    a <= -b;                     ef();                  /*           */
    a <= ~b;                     ef();                  /*           */
    a <= *p;                     ef();                  /*           */
    a <= (TYPE)x;                ef();                  /*           */
    a<= d ? b : c;               ef();                  /* 3396 3390 */
    a ? b<= d : c;               ef();                  /* 3396 3390 */
    a ? b : c<= d;               ef();                  /* 3396 3390 */
}



static void gte(void)
{
/**********************
Binary >= operator
**********************/
    a >= ef();                   ef();                  /*           */
    a >= ar[2];                  ef();                  /*           */
    a >= pst->sa;                ef();                  /*           */
    a >= stx.sa;                 ef();                  /*           */
    a >= b *  c;                 ef();                  /* 3397 3390 */
    a >= b /  c;                 ef();                  /* 3397 3390 */
    a >= b %  c;                 ef();                  /* 3397 3390 */
    a >= b +  c;                 ef();                  /* 3397 3390 */
    a >= b -  c;                 ef();                  /* 3397 3390 */
    a >= b &  c;                 ef();                  /* 3397 3390 */
    a >= b |  c;                 ef();                  /* 3397 3390 */
    a >= b ^  c;                 ef();                  /* 3397 3390 */
    a >= b << c;                 ef();                  /* 3397 3390 */
    a >= b >> c;                 ef();                  /* 3397 3390 */
    a >= b <  c;                 ef();                  /* 3394 3390 */
    a >= b <= c;                 ef();                  /* 3394 3390 */
    a >= b >= c;                 ef();                  /* 3392 3390 */
    a >= b >  c;                 ef();                  /* 3394 3390 */
    a >= b == c;                 ef();                  /* 3397 3390 */
    a >= b != c;                 ef();                  /* 3397 3390 */
    a >= b && c;                 ef();                  /* 3397 3390 */
    a >= b || c;                 ef();                  /* 3397 3390 */
    a >= !b;                     ef();                  /*           */
    a >= ++b;                    ef();                  /*           */
    a >= --b;                    ef();                  /*           */
    a >= b++;                    ef();                  /*           */
    a >= b--;                    ef();                  /*           */
    a >= +b;                     ef();                  /*           */
    a >= -b;                     ef();                  /*           */
    a >= ~b;                     ef();                  /*           */
    a >= *p;                     ef();                  /*           */
    a >= (TYPE)x;                ef();                  /*           */
    a>= d ? b : c;               ef();                  /* 3396 3390 */
    a ? b>= d : c;               ef();                  /* 3396 3390 */
    a ? b : c>= d;               ef();                  /* 3396 3390 */
}



static void gt(void)
{
/**********************
Binary >  operator
**********************/
    a >  ef();                   ef();                  /*           */
    a >  ar[2];                  ef();                  /*           */
    a >  pst->sa;                ef();                  /*           */
    a >  stx.sa;                 ef();                  /*           */
    a >  b *  c;                 ef();                  /* 3397 3390 */
    a >  b /  c;                 ef();                  /* 3397 3390 */
    a >  b %  c;                 ef();                  /* 3397 3390 */
    a >  b +  c;                 ef();                  /* 3397 3390 */
    a >  b -  c;                 ef();                  /* 3397 3390 */
    a >  b &  c;                 ef();                  /* 3397 3390 */
    a >  b |  c;                 ef();                  /* 3397 3390 */
    a >  b ^  c;                 ef();                  /* 3397 3390 */
    a >  b << c;                 ef();                  /* 3397 3390 */
    a >  b >> c;                 ef();                  /* 3397 3390 */
    a >  b <  c;                 ef();                  /* 3394 3390 */
    a >  b <= c;                 ef();                  /* 3394 3390 */
    a >  b >= c;                 ef();                  /* 3394 3390 */
    a >  b >  c;                 ef();                  /* 3392 3390 */
    a >  b == c;                 ef();                  /* 3397 3390 */
    a >  b != c;                 ef();                  /* 3397 3390 */
    a >  b && c;                 ef();                  /* 3397 3390 */
    a >  b || c;                 ef();                  /* 3397 3390 */
    a >  !b;                     ef();                  /*           */
    a >  ++b;                    ef();                  /*           */
    a >  --b;                    ef();                  /*           */
    a >  b++;                    ef();                  /*           */
    a >  b--;                    ef();                  /*           */
    a >  +b;                     ef();                  /*           */
    a >  -b;                     ef();                  /*           */
    a >  ~b;                     ef();                  /*           */
    a >  *p;                     ef();                  /*           */
    a >  (TYPE)x;                ef();                  /*           */
    a > d ? b : c;               ef();                  /* 3396 3390 */
    a ? b > d : c;               ef();                  /* 3396 3390 */
    a ? b : c > d;               ef();                  /* 3396 3390 */
}



static void equals(void)
{
/**********************
Binary == operator
**********************/
    a == ef();                   ef();                  /*           */
    a == ar[2];                  ef();                  /*           */
    a == pst->sa;                ef();                  /*           */
    a == stx.sa;                 ef();                  /*           */
    a == b *  c;                 ef();                  /* 3397 3390 */
    a == b /  c;                 ef();                  /* 3397 3390 */
    a == b %  c;                 ef();                  /* 3397 3390 */
    a == b +  c;                 ef();                  /* 3397 3390 */
    a == b -  c;                 ef();                  /* 3397 3390 */
    a == b &  c;                 ef();                  /* 3397 3390 */
    a == b |  c;                 ef();                  /* 3397 3390 */
    a == b ^  c;                 ef();                  /* 3397 3390 */
    a == b << c;                 ef();                  /* 3397 3390 */
    a == b >> c;                 ef();                  /* 3397 3390 */
    a == b <  c;                 ef();                  /* 3397 3390 */
    a == b <= c;                 ef();                  /* 3397 3390 */
    a == b >= c;                 ef();                  /* 3397 3390 */
    a == b >  c;                 ef();                  /* 3397 3390 */
    a == b == c;                 ef();                  /* 3392 3390 */
    a == b != c;                 ef();                  /* 3394 3390 */
    a == b && c;                 ef();                  /* 3397 3390 */
    a == b || c;                 ef();                  /* 3397 3390 */
    a == !b;                     ef();                  /*           */
    a == ++b;                    ef();                  /*           */
    a == --b;                    ef();                  /*           */
    a == b++;                    ef();                  /*           */
    a == b--;                    ef();                  /*           */
    a == +b;                     ef();                  /*           */
    a == -b;                     ef();                  /*           */
    a == ~b;                     ef();                  /*           */
    a == *p;                     ef();                  /*           */
    a == (TYPE)x;                ef();                  /*           */
    a ==d ? b : c;               ef();                  /* 3396 3390 */
    a ? b ==d : c;               ef();                  /* 3396 3390 */
    a ? b : c ==d;               ef();                  /* 3396 3390 */

}



static void neq(void)
{
/**********************
Binary != operator
**********************/
    a != ef();                   ef();                  /*           */
    a != ar[2];                  ef();                  /*           */
    a != pst->sa;                ef();                  /*           */
    a != stx.sa;                 ef();                  /*           */
    a != b *  c;                 ef();                  /* 3397 3390 */
    a != b /  c;                 ef();                  /* 3397 3390 */
    a != b %  c;                 ef();                  /* 3397 3390 */
    a != b +  c;                 ef();                  /* 3397 3390 */
    a != b -  c;                 ef();                  /* 3397 3390 */
    a != b &  c;                 ef();                  /* 3397 3390 */
    a != b |  c;                 ef();                  /* 3397 3390 */
    a != b ^  c;                 ef();                  /* 3397 3390 */
    a != b << c;                 ef();                  /* 3397 3390 */
    a != b >> c;                 ef();                  /* 3397 3390 */
    a != b <  c;                 ef();                  /* 3397 3390 */
    a != b <= c;                 ef();                  /* 3397 3390 */
    a != b >= c;                 ef();                  /* 3397 3390 */
    a != b >  c;                 ef();                  /* 3397 3390 */
    a != b == c;                 ef();                  /* 3394 3390 */
    a != b != c;                 ef();                  /* 3392 3390 */
    a != b && c;                 ef();                  /* 3397 3390 */
    a != b || c;                 ef();                  /* 3397 3390 */
    a != !b;                     ef();                  /*           */
    a != ++b;                    ef();                  /*           */
    a != --b;                    ef();                  /*           */
    a != b++;                    ef();                  /*           */
    a != b--;                    ef();                  /*           */
    a != +b;                     ef();                  /*           */
    a != -b;                     ef();                  /*           */
    a != ~b;                     ef();                  /*           */
    a != *p;                     ef();                  /*           */
    a != (TYPE)x;                ef();                  /*           */
    a !=d ? b : c;               ef();                  /* 3396 3390 */
    a ? b !=d : c;               ef();                  /* 3396 3390 */
    a ? b : c !=d;               ef();                  /* 3396 3390 */

}



static void fbitand(void)
{
/**********************
Binary & operator
**********************/
    a & ef();                    ef();                  /*           */
    a & ar[2];                   ef();                  /*           */
    a & pst->sa;                 ef();                  /*           */
    a & stx.sa;                  ef();                  /*           */
    a & b *  c;                  ef();                  /* 3397 3390 */
    a & b /  c;                  ef();                  /* 3397 3390 */
    a & b %  c;                  ef();                  /* 3397 3390 */
    a & b +  c;                  ef();                  /* 3397 3390 */
    a & b -  c;                  ef();                  /* 3397 3390 */
    a & b &  c;                  ef();                  /*           */
    a & b |  c;                  ef();                  /* 3397 3390 */
    a & b ^  c;                  ef();                  /* 3397 3390 */
    a & b << c;                  ef();                  /* 3397 3390 */
    a & b >> c;                  ef();                  /* 3397 3390 */
    a & b <  c;                  ef();                  /* 3397 3390 */
    a & b <= c;                  ef();                  /* 3397 3390 */
    a & b >= c;                  ef();                  /* 3397 3390 */
    a & b >  c;                  ef();                  /* 3397 3390 */
    a & b == c;                  ef();                  /* 3397 3390 */
    a & b != c;                  ef();                  /* 3397 3390 */
    a & b && c;                  ef();                  /* 3397 3390 */
    a & b || c;                  ef();                  /* 3397 3390 */
    a &  !b;                     ef();                  /*           */
    a &  ++b;                    ef();                  /*           */
    a &  --b;                    ef();                  /*           */
    a &  b++;                    ef();                  /*           */
    a &  b--;                    ef();                  /*           */
    a &  +b;                     ef();                  /*           */
    a &  -b;                     ef();                  /*           */
    a &  ~b;                     ef();                  /*           */
    a &  *p;                     ef();                  /*           */
    a &  (TYPE)x;                ef();                  /*           */
    a & d ? b : c;               ef();                  /* 3396 3390 */
    a ? b & d : c;               ef();                  /* 3396 3390 */
    a ? b : c & d;               ef();                  /* 3396 3390 */
}


static void bitxor(void)
{
/**********************
Binary ^ operator
**********************/
    a ^ ef();                    ef();                  /*           */
    a ^ ar[2];                   ef();                  /*           */
    a ^ pst->sa;                 ef();                  /*           */
    a ^ stx.sa;                  ef();                  /*           */
    a ^ b *  c;                  ef();                  /* 3397 3390 */
    a ^ b /  c;                  ef();                  /* 3397 3390 */
    a ^ b %  c;                  ef();                  /* 3397 3390 */
    a ^ b +  c;                  ef();                  /* 3397 3390 */
    a ^ b -  c;                  ef();                  /* 3397 3390 */
    a ^ b &  c;                  ef();                  /* 3397 3390 */
    a ^ b |  c;                  ef();                  /* 3397 3390 */
    a ^ b ^  c;                  ef();                  /*           */
    a ^ b << c;                  ef();                  /* 3397 3390 */
    a ^ b >> c;                  ef();                  /* 3397 3390 */
    a ^ b <  c;                  ef();                  /* 3397 3390 */
    a ^ b <= c;                  ef();                  /* 3397 3390 */
    a ^ b >= c;                  ef();                  /* 3397 3390 */
    a ^ b >  c;                  ef();                  /* 3397 3390 */
    a ^ b == c;                  ef();                  /* 3397 3390 */
    a ^ b != c;                  ef();                  /* 3397 3390 */
    a ^ b && c;                  ef();                  /* 3397 3390 */
    a ^ b || c;                  ef();                  /* 3397 3390 */
    a ^  !b;                     ef();                  /*           */
    a ^  ++b;                    ef();                  /*           */
    a ^  --b;                    ef();                  /*           */
    a ^  b++;                    ef();                  /*           */
    a ^  b--;                    ef();                  /*           */
    a ^  +b;                     ef();                  /*           */
    a ^  -b;                     ef();                  /*           */
    a ^  ~b;                     ef();                  /*           */
    a ^  *p;                     ef();                  /*           */
    a ^  (TYPE)x;                ef();                  /*           */
    a ^ d ? b : c;               ef();                  /* 3396 3390 */
    a ? b ^ d : c;               ef();                  /* 3396 3390 */
    a ? b : c ^ d;               ef();                  /* 3396 3390 */
}



static void bitior(void)
{
/**********************
Binary | operator
**********************/
    a | ef();                    ef();                  /*           */
    a | ar[2];                   ef();                  /*           */
    a | pst->sa;                 ef();                  /*           */
    a | stx.sa;                  ef();                  /*           */
    a | b *  c;                  ef();                  /* 3397 3390 */
    a | b /  c;                  ef();                  /* 3397 3390 */
    a | b %  c;                  ef();                  /* 3397 3390 */
    a | b +  c;                  ef();                  /* 3397 3390 */
    a | b -  c;                  ef();                  /* 3397 3390 */
    a | b &  c;                  ef();                  /* 3397 3390 */
    a | b |  c;                  ef();                  /*           */
    a | b ^  c;                  ef();                  /* 3397 3390 */
    a | b << c;                  ef();                  /* 3397 3390 */
    a | b >> c;                  ef();                  /* 3397 3390 */
    a | b <  c;                  ef();                  /* 3397 3390 */
    a | b <= c;                  ef();                  /* 3397 3390 */
    a | b >= c;                  ef();                  /* 3397 3390 */
    a | b >  c;                  ef();                  /* 3397 3390 */
    a | b == c;                  ef();                  /* 3397 3390 */
    a | b != c;                  ef();                  /* 3397 3390 */
    a | b && c;                  ef();                  /* 3397 3390 */
    a | b || c;                  ef();                  /* 3397 3390 */
    a |  !b;                     ef();                  /*           */
    a |  ++b;                    ef();                  /*           */
    a |  --b;                    ef();                  /*           */
    a |  b++;                    ef();                  /*           */
    a |  b--;                    ef();                  /*           */
    a |  +b;                     ef();                  /*           */
    a |  -b;                     ef();                  /*           */
    a |  ~b;                     ef();                  /*           */
    a |  *p;                     ef();                  /*           */
    a |  (TYPE)x;                ef();                  /*           */
    a | d ? b : c;               ef();                  /* 3396 3390 */
    a ? b | d : c;               ef();                  /* 3396 3390 */
    a ? b : c | d;               ef();                  /* 3396 3390 */
}



static void fand(void)
{
/**********************
Binary && operator
**********************/
    a && ef();                   ef();                  /*           */
    a && ar[2];                  ef();                  /*           */
    a && pst->sa;                ef();                  /*           */
    a && stx.sa;                 ef();                  /*           */
    a && b *  c;                 ef();                  /* 3397 3390 */
    a && b /  c;                 ef();                  /* 3397 3390 */
    a && b %  c;                 ef();                  /* 3397 3390 */
    a && b +  c;                 ef();                  /* 3397 3390 */
    a && b -  c;                 ef();                  /* 3397 3390 */
    a && b &  c;                 ef();                  /* 3397 3390 */
    a && b |  c;                 ef();                  /* 3397 3390 */
    a && b ^  c;                 ef();                  /* 3397 3390 */
    a && b << c;                 ef();                  /* 3397 3390 */
    a && b >> c;                 ef();                  /* 3397 3390 */
    a && b <  c;                 ef();                  /* 3397 3390 */
    a && b <= c;                 ef();                  /* 3397 3390 */
    a && b >= c;                 ef();                  /* 3397 3390 */
    a && b >  c;                 ef();                  /* 3397 3390 */
    a && b == c;                 ef();                  /* 3397 3390 */
    a && b != c;                 ef();                  /* 3397 3390 */
    a && b && c;                 ef();                  /*           */
    a && b || c;                 ef();                  /* 3397 3390 */
    a && !b;                     ef();                  /*           */
    a && ++b;                    ef();                  /*           */
    a && --b;                    ef();                  /*           */
    a && b++;                    ef();                  /*           */
    a && b--;                    ef();                  /*           */
    a && +b;                     ef();                  /*           */
    a && -b;                     ef();                  /*           */
    a && ~b;                     ef();                  /*           */
    a && *p;                     ef();                  /*           */
    a && (TYPE)x;                ef();                  /*           */
    a && d ? b : c;              ef();                  /* 3396 3390 */
    a ? b && d : c;              ef();                  /* 3396 3390 */
    a ? b : c && d;              ef();                  /* 3396 3390 */
}


static void funcor(void)
{
/**********************
Binary || operator
**********************/
    a || ef();                   ef();                  /*           */
    a || ar[2];                  ef();                  /*           */
    a || pst->sa;                ef();                  /*           */
    a || stx.sa;                 ef();                  /*           */
    a || b *  c;                 ef();                  /* 3397 3390 */
    a || b /  c;                 ef();                  /* 3397 3390 */
    a || b %  c;                 ef();                  /* 3397 3390 */
    a || b +  c;                 ef();                  /* 3397 3390 */
    a || b -  c;                 ef();                  /* 3397 3390 */
    a || b &  c;                 ef();                  /* 3397 3390 */
    a || b |  c;                 ef();                  /* 3397 3390 */
    a || b ^  c;                 ef();                  /* 3397 3390 */
    a || b << c;                 ef();                  /* 3397 3390 */
    a || b >> c;                 ef();                  /* 3397 3390 */
    a || b <  c;                 ef();                  /* 3397 3390 */
    a || b <= c;                 ef();                  /* 3397 3390 */
    a || b >= c;                 ef();                  /* 3397 3390 */
    a || b >  c;                 ef();                  /* 3397 3390 */
    a || b == c;                 ef();                  /* 3397 3390 */
    a || b != c;                 ef();                  /* 3397 3390 */
    a || b && c;                 ef();                  /* 3397 3390 */
    a || b || c;                 ef();                  /*           */
    a || !b;                     ef();                  /*           */
    a || ++b;                    ef();                  /*           */
    a || --b;                    ef();                  /*           */
    a || b++;                    ef();                  /*           */
    a || b--;                    ef();                  /*           */
    a || +b;                     ef();                  /*           */
    a || -b;                     ef();                  /*           */
    a || ~b;                     ef();                  /*           */
    a || *p;                     ef();                  /*           */
    a || (TYPE)x;                ef();                  /*           */
    a ||d ? b : c;               ef();                  /* 3396 3390 */
    a ? b ||d : c;               ef();                  /* 3396 3390 */
    a ? b : c ||d;               ef();                  /* 3396 3390 */


}


static void t1(void)
{
/**********************
Ternary ? :  1st operand
**********************/
    ef( ) ? b : c;               ef();                  /*           */
    ar[2] ? b : c;               ef();                  /*           */
    pst->sa ? b : c;             ef();                  /*           */
    stx.sa ? b : c;              ef();                  /*           */
    a *  d ? b : c;              ef();                  /* 3396 3390 */
    a /  d ? b : c;              ef();                  /* 3396 3390 */
    a %  d ? b : c;              ef();                  /* 3396 3390 */
    a +  d ? b : c;              ef();                  /* 3396 3390 */
    a -  d ? b : c;              ef();                  /* 3396 3390 */
    a &  d ? b : c;              ef();                  /* 3396 3390 */
    a |  d ? b : c;              ef();                  /* 3396 3390 */
    a ^  d ? b : c;              ef();                  /* 3396 3390 */
    a << d ? b : c;              ef();                  /* 3396 3390 */
    a >> d ? b : c;              ef();                  /* 3396 3390 */
    a <  d ? b : c;              ef();                  /* 3396 3390 */
    a <= d ? b : c;              ef();                  /* 3396 3390 */
    a >= d ? b : c;              ef();                  /* 3396 3390 */
    a >  d ? b : c;              ef();                  /* 3396 3390 */
    a == d ? b : c;              ef();                  /* 3396 3390 */
    a != d ? b : c;              ef();                  /* 3396 3390 */
    a && d ? b : c;              ef();                  /* 3396 3390 */
    a || d ? b : c;              ef();                  /* 3396 3390 */

    ! a ? b : c;                 ef();                  /*           */
    ++a ? b : c;                 ef();                  /*           */
    --a ? b : c;                 ef();                  /*           */
    a++ ? b : c;                 ef();                  /*           */
    a-- ? b : c;                 ef();                  /*           */
    + a ? b : c;                 ef();                  /*           */
    - a ? b : c;                 ef();                  /*           */
    ~ a ? b : c;                 ef();                  /*           */
    * p ? b : c;                 ef();                  /*           */
    (int16_t)x ? b : c;          ef();                  /*           */
    (static void *)p ? a : b;    ef();                  /*           */
    (int16_t *)p ? a : b;        ef();                  /*           */
    c ? d : e ? a : b;           ef();                  /* 3391 3390 */
}



static void t2(void)
{
/**********************
Ternary ? :  2nd operand
**********************/
    b ? ef( ) : c;               ef();                  /*           */
    b ? ar[2] : c;               ef();                  /*           */
    b ? pst->sa : c;             ef();                  /*           */
    b ? stx.sa : c;              ef();                  /*           */
    b ? a *  d : c;              ef();                  /* 3396 3390 */
    b ? a /  d : c;              ef();                  /* 3396 3390 */
    b ? a %  d : c;              ef();                  /* 3396 3390 */
    b ? a +  d : c;              ef();                  /* 3396 3390 */
    b ? a -  d : c;              ef();                  /* 3396 3390 */
    b ? a &  d : c;              ef();                  /* 3396 3390 */
    b ? a |  d : c;              ef();                  /* 3396 3390 */
    b ? a ^  d : c;              ef();                  /* 3396 3390 */
    b ? a << d : c;              ef();                  /* 3396 3390 */
    b ? a >> d : c;              ef();                  /* 3396 3390 */
    b ? a <  d : c;              ef();                  /* 3396 3390 */
    b ? a <= d : c;              ef();                  /* 3396 3390 */
    b ? a >= d : c;              ef();                  /* 3396 3390 */
    b ? a >  d : c;              ef();                  /* 3396 3390 */
    b ? a == d : c;              ef();                  /* 3396 3390 */
    b ? a != d : c;              ef();                  /* 3396 3390 */
    b ? a && d : c;              ef();                  /* 3396 3390 */
    b ? a || d : c;              ef();                  /* 3396 3390 */

    b ? ! a : c;                 ef();                  /*           */
    b ? ++a : c;                 ef();                  /*           */
    b ? --a : c;                 ef();                  /*           */
    b ? a++ : c;                 ef();                  /*           */
    b ? a-- : c;                 ef();                  /*           */
    b ? + a : c;                 ef();                  /*           */
    b ? - a : c;                 ef();                  /*           */
    b ? ~ a : c;                 ef();                  /*           */
    b ? * p : c;                 ef();                  /*           */
    b ? (int16_t)x : c;          ef();                  /*           */
    b ? (static void *)p : 0;    ef();                  /*           */
    b ? (int16_t *)p : 0;        ef();                  /*           */
    a ? c ? d : e : b;           ef();                  /* 3391 3390 */
}



static void t3(void)
{
/**********************
Ternary ? :  3rd operand
**********************/
    c ? b : ef( );               ef();                  /*           */
    c ? b : ar[2];               ef();                  /*           */
    c ? b : pst->sa;             ef();                  /*           */
    c ? b : stx.sa;              ef();                  /*           */
    c ? b : a *  d;              ef();                  /* 3396 3390 */
    c ? b : a /  d;              ef();                  /* 3396 3390 */
    c ? b : a %  d;              ef();                  /* 3396 3390 */
    c ? b : a +  d;              ef();                  /* 3396 3390 */
    c ? b : a -  d;              ef();                  /* 3396 3390 */
    c ? b : a &  d;              ef();                  /* 3396 3390 */
    c ? b : a |  d;              ef();                  /* 3396 3390 */
    c ? b : a ^  d;              ef();                  /* 3396 3390 */
    c ? b : a << d;              ef();                  /* 3396 3390 */
    c ? b : a >> d;              ef();                  /* 3396 3390 */
    c ? b : a <  d;              ef();                  /* 3396 3390 */
    c ? b : a <= d;              ef();                  /* 3396 3390 */
    c ? b : a >= d;              ef();                  /* 3396 3390 */
    c ? b : a >  d;              ef();                  /* 3396 3390 */
    c ? b : a == d;              ef();                  /* 3396 3390 */
    c ? b : a != d;              ef();                  /* 3396 3390 */
    c ? b : a && d;              ef();                  /* 3396 3390 */
    c ? b : a || d;              ef();                  /* 3396 3390 */

    c ? b : ! a;                 ef();                  /*           */
    c ? b : ++a;                 ef();                  /*           */
    c ? b : --a;                 ef();                  /*           */
    c ? b : a++;                 ef();                  /*           */
    c ? b : a--;                 ef();                  /*           */
    c ? b : + a;                 ef();                  /*           */
    c ? b : - a;                 ef();                  /*           */
    c ? b : ~ a;                 ef();                  /*           */
    c ? b : * p;                 ef();                  /*           */
    c ? b : (int16_t)x;          ef();                  /*           */
    b ? 0 : (static void *)p;    ef();                  /*           */
    b ? 0 : (int16_t *)p;        ef();                  /*           */
    b ? a : c ? d : e;           ef();                  /* 3391 3390 */
}



static void assign(void)
{
/**********************
Binary = operator
**********************/
    a = ef();                    ef();                  /*           */
    a = ar[2];                   ef();                  /*           */
    a = pst->sa;                 ef();                  /*           */
    a = stx.sa;                  ef();                  /*           */
    a = b *  c;                  ef();                  /*           */
    a = b /  c;                  ef();                  /*           */
    a = b %  c;                  ef();                  /*           */
    a = b +  c;                  ef();                  /*           */
    a = b -  c;                  ef();                  /*           */
    a = b &  c;                  ef();                  /*           */
    a = b |  c;                  ef();                  /*           */
    a = b ^  c;                  ef();                  /*           */
    a = b << c;                  ef();                  /*           */
    a = b >> c;                  ef();                  /*           */
    a = b <  c;                  ef();                  /*           */
    a = b <= c;                  ef();                  /*           */
    a = b >= c;                  ef();                  /*           */
    a = b >  c;                  ef();                  /*           */
    a = b == c;                  ef();                  /*           */
    a = b != c;                  ef();                  /*           */
    a = b && c;                  ef();                  /*           */
    a = b || c;                  ef();                  /*           */
    a =  !b;                     ef();                  /*           */
    a =  ++b;                    ef();                  /*           */
    a =  --b;                    ef();                  /*           */
    a =  b++;                    ef();                  /*           */
    a =  b--;                    ef();                  /*           */
    a =  +b;                     ef();                  /*           */
    a =  -b;                     ef();                  /*           */
    a =  ~b;                     ef();                  /*           */
    a =  *p;                     ef();                  /*           */
    a =  (TYPE)x;                ef();                  /*           */
    a = d ? b : c;               ef();                  /*           */
}



static void plusequals(void)
{
/**********************
Binary += operator
**********************/
    a += ef();                   ef();                  /*           */
    a += ar[2];                  ef();                  /*           */
    a += pst->sa;                ef();                  /*           */
    a += stx.sa;                 ef();                  /*           */
    a += b *  c;                 ef();                  /*           */
    a += b /  c;                 ef();                  /*           */
    a += b %  c;                 ef();                  /*           */
    a += b +  c;                 ef();                  /*           */
    a += b -  c;                 ef();                  /*           */
    a += b &  c;                 ef();                  /*           */
    a += b |  c;                 ef();                  /*           */
    a += b ^  c;                 ef();                  /*           */
    a += b << c;                 ef();                  /*           */
    a += b >> c;                 ef();                  /*           */
    a += b <  c;                 ef();                  /*           */
    a += b <= c;                 ef();                  /*           */
    a += b >= c;                 ef();                  /*           */
    a += b >  c;                 ef();                  /*           */
    a += b == c;                 ef();                  /*           */
    a += b != c;                 ef();                  /*           */
    a += b && c;                 ef();                  /*           */
    a += b || c;                 ef();                  /*           */
    a +=  !b;                    ef();                  /*           */
    a +=  ++b;                   ef();                  /*           */
    a +=  --b;                   ef();                  /*           */
    a +=  b++;                   ef();                  /*           */
    a +=  b--;                   ef();                  /*           */
    a +=  +b;                    ef();                  /*           */
    a +=  -b;                    ef();                  /*           */
    a +=  ~b;                    ef();                  /*           */
    a +=  *p;                    ef();                  /*           */
    a +=  (TYPE)x;               ef();                  /*           */
    a += d ? b : c;              ef();                  /*           */

}

static void minusequals(void)
{
/**********************
Binary -= operator
**********************/
    a -= ef();                   ef();                  /*           */
    a -= ar[2];                  ef();                  /*           */
    a -= pst->sa;                ef();                  /*           */
    a -= stx.sa;                 ef();                  /*           */
    a -= b *  c;                 ef();                  /*           */
    a -= b /  c;                 ef();                  /*           */
    a -= b %  c;                 ef();                  /*           */
    a -= b +  c;                 ef();                  /*           */
    a -= b -  c;                 ef();                  /*           */
    a -= b &  c;                 ef();                  /*           */
    a -= b |  c;                 ef();                  /*           */
    a -= b ^  c;                 ef();                  /*           */
    a -= b << c;                 ef();                  /*           */
    a -= b >> c;                 ef();                  /*           */
    a -= b <  c;                 ef();                  /*           */
    a -= b <= c;                 ef();                  /*           */
    a -= b >= c;                 ef();                  /*           */
    a -= b >  c;                 ef();                  /*           */
    a -= b == c;                 ef();                  /*           */
    a -= b != c;                 ef();                  /*           */
    a -= b && c;                 ef();                  /*           */
    a -= b || c;                 ef();                  /*           */
    a -=  !b;                    ef();                  /*           */
    a -=  ++b;                   ef();                  /*           */
    a -=  --b;                   ef();                  /*           */
    a -=  b++;                   ef();                  /*           */
    a -=  b--;                   ef();                  /*           */
    a -=  +b;                    ef();                  /*           */
    a -=  -b;                    ef();                  /*           */
    a -=  ~b;                    ef();                  /*           */
    a -=  *p;                    ef();                  /*           */
    a -=  (TYPE)x;               ef();                  /*           */
    a -= d ? b : c;              ef();                  /*           */

}

static void multiplyequals(void)
{
/**********************
Binary *= operator
**********************/
    a *= ef();                   ef();                  /*           */
    a *= ar[2];                  ef();                  /*           */
    a *= pst->sa;                ef();                  /*           */
    a *= stx.sa;                 ef();                  /*           */
    a *= b *  c;                 ef();                  /*           */
    a *= b /  c;                 ef();                  /*           */
    a *= b %  c;                 ef();                  /*           */
    a *= b +  c;                 ef();                  /*           */
    a *= b -  c;                 ef();                  /*           */
    a *= b &  c;                 ef();                  /*           */
    a *= b |  c;                 ef();                  /*           */
    a *= b ^  c;                 ef();                  /*           */
    a *= b << c;                 ef();                  /*           */
    a *= b >> c;                 ef();                  /*           */
    a *= b <  c;                 ef();                  /*           */
    a *= b <= c;                 ef();                  /*           */
    a *= b >= c;                 ef();                  /*           */
    a *= b >  c;                 ef();                  /*           */
    a *= b == c;                 ef();                  /*           */
    a *= b != c;                 ef();                  /*           */
    a *= b && c;                 ef();                  /*           */
    a *= b || c;                 ef();                  /*           */
    a *=  !b;                    ef();                  /*           */
    a *=  ++b;                   ef();                  /*           */
    a *=  --b;                   ef();                  /*           */
    a *=  b++;                   ef();                  /*           */
    a *=  b--;                   ef();                  /*           */
    a *=  +b;                    ef();                  /*           */
    a *=  -b;                    ef();                  /*           */
    a *=  ~b;                    ef();                  /*           */
    a *=  *p;                    ef();                  /*           */
    a *=  (TYPE)x;               ef();                  /*           */
    a *= d ? b : c;              ef();                  /*           */

}

static void divideequals(void)
{
/**********************
Binary /= operator
**********************/
    a /= ef();                   ef();                  /*           */
    a /= ar[2];                  ef();                  /*           */
    a /= pst->sa;                ef();                  /*           */
    a /= stx.sa;                 ef();                  /*           */
    a /= b *  c;                 ef();                  /*           */
    a /= b /  c;                 ef();                  /*           */
    a /= b %  c;                 ef();                  /*           */
    a /= b +  c;                 ef();                  /*           */
    a /= b -  c;                 ef();                  /*           */
    a /= b &  c;                 ef();                  /*           */
    a /= b |  c;                 ef();                  /*           */
    a /= b ^  c;                 ef();                  /*           */
    a /= b << c;                 ef();                  /*           */
    a /= b >> c;                 ef();                  /*           */
    a /= b <  c;                 ef();                  /*           */
    a /= b <= c;                 ef();                  /*           */
    a /= b >= c;                 ef();                  /*           */
    a /= b >  c;                 ef();                  /*           */
    a /= b == c;                 ef();                  /*           */
    a /= b != c;                 ef();                  /*           */
    a /= b && c;                 ef();                  /*           */
    a /= b || c;                 ef();                  /*           */
    a /=  !b;                    ef();                  /*           */
    a /=  ++b;                   ef();                  /*           */
    a /=  --b;                   ef();                  /*           */
    a /=  b++;                   ef();                  /*           */
    a /=  b--;                   ef();                  /*           */
    a /=  +b;                    ef();                  /*           */
    a /=  -b;                    ef();                  /*           */
    a /=  ~b;                    ef();                  /*           */
    a /=  *p;                    ef();                  /*           */
    a /=  (TYPE)x;               ef();                  /*           */
    a /= d ? b : c;              ef();                  /*           */
}


static void moduloequals(void)
{
/**********************
Binary %= operator
**********************/
    a %= ef();                   ef();                  /*           */
    a %= ar[2];                  ef();                  /*           */
    a %= pst->sa;                ef();                  /*           */
    a %= stx.sa;                 ef();                  /*           */
    a %= b *  c;                 ef();                  /*           */
    a %= b /  c;                 ef();                  /*           */
    a %= b %  c;                 ef();                  /*           */
    a %= b +  c;                 ef();                  /*           */
    a %= b -  c;                 ef();                  /*           */
    a %= b &  c;                 ef();                  /*           */
    a %= b |  c;                 ef();                  /*           */
    a %= b ^  c;                 ef();                  /*           */
    a %= b << c;                 ef();                  /*           */
    a %= b >> c;                 ef();                  /*           */
    a %= b <  c;                 ef();                  /*           */
    a %= b <= c;                 ef();                  /*           */
    a %= b >= c;                 ef();                  /*           */
    a %= b >  c;                 ef();                  /*           */
    a %= b == c;                 ef();                  /*           */
    a %= b != c;                 ef();                  /*           */
    a %= b && c;                 ef();                  /*           */
    a %= b || c;                 ef();                  /*           */
    a %=  !b;                    ef();                  /*           */
    a %=  ++b;                   ef();                  /*           */
    a %=  --b;                   ef();                  /*           */
    a %=  b++;                   ef();                  /*           */
    a %=  b--;                   ef();                  /*           */
    a %=  +b;                    ef();                  /*           */
    a %=  -b;                    ef();                  /*           */
    a %=  ~b;                    ef();                  /*           */
    a %=  *p;                    ef();                  /*           */
    a %=  (TYPE)x;               ef();                  /*           */
    a %= d ? b : c;              ef();                  /*           */
}


static void andequals(void)
{
/**********************
Binary &= operator
**********************/
    a &= ef();                   ef();                  /*           */
    a &= ar[2];                  ef();                  /*           */
    a &= pst->sa;                ef();                  /*           */
    a &= stx.sa;                 ef();                  /*           */
    a &= b *  c;                 ef();                  /*           */
    a &= b /  c;                 ef();                  /*           */
    a &= b %  c;                 ef();                  /*           */
    a &= b +  c;                 ef();                  /*           */
    a &= b -  c;                 ef();                  /*           */
    a &= b &  c;                 ef();                  /*           */
    a &= b |  c;                 ef();                  /*           */
    a &= b ^  c;                 ef();                  /*           */
    a &= b << c;                 ef();                  /*           */
    a &= b >> c;                 ef();                  /*           */
    a &= b <  c;                 ef();                  /*           */
    a &= b <= c;                 ef();                  /*           */
    a &= b >= c;                 ef();                  /*           */
    a &= b >  c;                 ef();                  /*           */
    a &= b == c;                 ef();                  /*           */
    a &= b != c;                 ef();                  /*           */
    a &= b && c;                 ef();                  /*           */
    a &= b || c;                 ef();                  /*           */
    a &=  !b;                    ef();                  /*           */
    a &=  ++b;                   ef();                  /*           */
    a &=  --b;                   ef();                  /*           */
    a &=  b++;                   ef();                  /*           */
    a &=  b--;                   ef();                  /*           */
    a &=  +b;                    ef();                  /*           */
    a &=  -b;                    ef();                  /*           */
    a &=  ~b;                    ef();                  /*           */
    a &=  *p;                    ef();                  /*           */
    a &=  (TYPE)x;               ef();                  /*           */
    a &= d ? b : c;              ef();                  /*           */
}



static void xorequals(void)
{
/**********************
Binary ^= operator
**********************/
    a ^= ef();                   ef();                  /*           */
    a ^= ar[2];                  ef();                  /*           */
    a ^= pst->sa;                ef();                  /*           */
    a ^= stx.sa;                 ef();                  /*           */
    a ^= b *  c;                 ef();                  /*           */
    a ^= b /  c;                 ef();                  /*           */
    a ^= b %  c;                 ef();                  /*           */
    a ^= b +  c;                 ef();                  /*           */
    a ^= b -  c;                 ef();                  /*           */
    a ^= b &  c;                 ef();                  /*           */
    a ^= b |  c;                 ef();                  /*           */
    a ^= b ^  c;                 ef();                  /*           */
    a ^= b << c;                 ef();                  /*           */
    a ^= b >> c;                 ef();                  /*           */
    a ^= b <  c;                 ef();                  /*           */
    a ^= b <= c;                 ef();                  /*           */
    a ^= b >= c;                 ef();                  /*           */
    a ^= b >  c;                 ef();                  /*           */
    a ^= b == c;                 ef();                  /*           */
    a ^= b != c;                 ef();                  /*           */
    a ^= b && c;                 ef();                  /*           */
    a ^= b || c;                 ef();                  /*           */
    a ^=  !b;                    ef();                  /*           */
    a ^=  ++b;                   ef();                  /*           */
    a ^=  --b;                   ef();                  /*           */
    a ^=  b++;                   ef();                  /*           */
    a ^=  b--;                   ef();                  /*           */
    a ^=  +b;                    ef();                  /*           */
    a ^=  -b;                    ef();                  /*           */
    a ^=  ~b;                    ef();                  /*           */
    a ^=  *p;                    ef();                  /*           */
    a ^=  (TYPE)x;               ef();                  /*           */
    a ^= d ? b : c;              ef();                  /*           */
}



static void orequals(void)
{
/**********************
Binary |= operator
**********************/
    a |= ef();                   ef();                  /*           */
    a |= ar[2];                  ef();                  /*           */
    a |= pst->sa;                ef();                  /*           */
    a |= stx.sa;                 ef();                  /*           */
    a |= b *  c;                 ef();                  /*           */
    a |= b /  c;                 ef();                  /*           */
    a |= b %  c;                 ef();                  /*           */
    a |= b +  c;                 ef();                  /*           */
    a |= b -  c;                 ef();                  /*           */
    a |= b &  c;                 ef();                  /*           */
    a |= b |  c;                 ef();                  /*           */
    a |= b ^  c;                 ef();                  /*           */
    a |= b << c;                 ef();                  /*           */
    a |= b >> c;                 ef();                  /*           */
    a |= b <  c;                 ef();                  /*           */
    a |= b <= c;                 ef();                  /*           */
    a |= b >= c;                 ef();                  /*           */
    a |= b >  c;                 ef();                  /*           */
    a |= b == c;                 ef();                  /*           */
    a |= b != c;                 ef();                  /*           */
    a |= b && c;                 ef();                  /*           */
    a |= b || c;                 ef();                  /*           */
    a |=  !b;                    ef();                  /*           */
    a |=  ++b;                   ef();                  /*           */
    a |=  --b;                   ef();                  /*           */
    a |=  b++;                   ef();                  /*           */
    a |=  b--;                   ef();                  /*           */
    a |=  +b;                    ef();                  /*           */
    a |=  -b;                    ef();                  /*           */
    a |=  ~b;                    ef();                  /*           */
    a |=  *p;                    ef();                  /*           */
    a |=  (TYPE)x;               ef();                  /*           */
    a |= d ? b : c;              ef();                  /*           */

}


static void comma(void)
{
/**********************
Binary , operator
**********************/
    a = d , ef();                ef();                  /*           */
    a = d , ar[2];               ef();                  /*           */
    a = d , pst->sa;             ef();                  /*           */
    a = d , stx.sa;              ef();                  /*           */
    a = d , b *  c;              ef();                  /*           */
    a = d , b /  c;              ef();                  /*           */
    a = d , b %  c;              ef();                  /*           */
    a = d , b +  c;              ef();                  /*           */
    a = d , b -  c;              ef();                  /*           */
    a = d , b &  c;              ef();                  /*           */
    a = d , b |  c;              ef();                  /*           */
    a = d , b ^  c;              ef();                  /*           */
    a = d , b << c;              ef();                  /*           */
    a = d , b >> c;              ef();                  /*           */
    a = d , b <  c;              ef();                  /*           */
    a = d , b <= c;              ef();                  /*           */
    a = d , b >= c;              ef();                  /*           */
    a = d , b >  c;              ef();                  /*           */
    a = d , b == c;              ef();                  /*           */
    a = d , b != c;              ef();                  /*           */
    a = d , b && c;              ef();                  /*           */
    a = d , b || c;              ef();                  /*           */
    a = d ,  !b;                 ef();                  /*           */
    a = d ,  ++b;                ef();                  /*           */
    a = d ,  --b;                ef();                  /*           */
    a = d ,  b++;                ef();                  /*           */
    a = d ,  b--;                ef();                  /*           */
    a = d ,  +b;                 ef();                  /*           */
    a = d ,  -b;                 ef();                  /*           */
    a = d ,  ~b;                 ef();                  /*           */
    a = d ,  *p;                 ef();                  /*           */
    a = d ,  (TYPE)x;            ef();                  /*           */
    a = d , d ? b : c;           ef();                  /*           */

}
