/* >>>------------------------------------------------------------
 *
 * File: m3cmex.h,  Module: M3CM-1.0-QAC-8.1.2
 *
 * <<<------------------------------------------------------------ */

#ifndef M2CMEX_H
#define M2CMEX_H

#include "misra.h"

int16_t obj_0806c;                              /* 3406 */

typedef enum TN1 {RED, AMBER, GREEN} N1;
typedef enum TN2 {APPLE, BANANA, PLUM} N2;

extern BL bla;
extern BL blb;
extern BL blr;

extern PC pca;
extern PC pcb;
extern PC pcr;

extern SC sca;
extern SC scb;
extern SC scr;

extern SS ssa;
extern SS ssb;
extern SS ssr;

extern SI sia;
extern SI sib;
extern SI sir;

extern SL sla;
extern SL slb;
extern SL slr;

extern SX sxa;
extern SX sxb;
extern SX sxr;

extern UC uca;
extern UC ucb;
extern UC ucr;

extern US usa;
extern US usb;
extern US usr;

extern UI uia;
extern UI uib;
extern UI uir;

extern UL ula;
extern UL ulb;
extern UL ulr;

extern UX uxa;
extern UX uxb;
extern UX uxr;

extern FT fta;
extern FT ftb;
extern FT ftr;

extern DB dba;
extern DB dbb;
extern DB dbr;

extern LD lda;
extern LD ldb;
extern LD ldd;

extern N1 n1a;
extern N1 n1b;
extern N1 n1r;

extern N2 n2a;
extern N2 n2b;
extern N2 n2r;



extern uint8_t u8r;
extern uint8_t u8a;
extern uint8_t u8b;
extern uint8_t u8c;

extern uint16_t u16r;
extern uint16_t u16a;
extern uint16_t u16b;
extern uint16_t u16c;
extern uint16_t u16d;

extern uint32_t u32r;
extern uint32_t u32a;
extern uint32_t u32b;
extern uint32_t u32c;
extern uint32_t u32d;

extern int8_t s8r;
extern int8_t s8a;
extern int8_t s8b;

extern int16_t s16r;
extern int16_t s16a;
extern int16_t s16b;
extern int16_t s16c;
extern int16_t s16d;

extern int32_t s32r;
extern int32_t s32a;
extern int32_t s32b;

extern float32_t f32r;
extern float32_t f32a;
extern float32_t f32b;
extern float32_t f32c;

extern float64_t f64r;
extern float64_t f64a;
extern float64_t f64b;

extern float128_t f128a;
extern float128_t f128b;

extern void use_u8(uint8_t u8p);
extern void use_u16(uint16_t u16p);
extern void use_u32(uint32_t u32p);

extern void use_s8(int8_t s8p);
extern void use_s16(int16_t s16p);
extern void use_s32(int32_t s32p);

extern void use_f32(float32_t f32p);
extern void use_f64(float64_t f64p);
extern void use_f128(float128_t f128p);

extern BL get_bool(void);

extern uint8_t get_u8(void);
extern uint16_t get_u16(void);
extern uint16_t get_u32(void);

extern int8_t get_s8(void);
extern int16_t get_s16(void);
extern int16_t get_s32(void);

extern float32_t get_f32(void);
extern float64_t get_f64(void);
extern float128_t get_f128(void);


extern int16_t dir_0101(void);
extern int16_t dir_0201(void);
extern int16_t dir_0301(void);
extern int16_t dir_0401(void);
extern int16_t dir_0402(void);
extern int16_t dir_0403(void);
extern int16_t dir_0404(void);
extern int16_t dir_0405(void);
extern int16_t dir_0406(void);
extern int16_t dir_0407(void);
extern int16_t dir_0408(void);
extern int16_t dir_0409(void);
extern int16_t dir_0410(void);
extern int16_t dir_0411(void);
extern int16_t dir_0412(void);
extern int16_t dir_0413(void);
extern int16_t rule_0101(void);
extern int16_t rule_0102(void);
extern int16_t rule_0103(void);
extern int16_t rule_0201(void);
extern int16_t rule_0202(void);
extern int16_t rule_0203(void);
extern int16_t rule_0204(void);
extern int16_t rule_0205(void);
extern int16_t rule_0206(void);
extern int16_t rule_0207(void);
extern int16_t rule_0301(void);
extern int16_t rule_0302(void);
extern int16_t rule_0401(void);
extern int16_t rule_0402(void);
extern int16_t rule_0501(void);
extern int16_t rule_0502(void);
extern int16_t rule_0503(void);
extern int16_t rule_0504(void);
extern int16_t rule_0505(void);
extern int16_t rule_0506(void);
extern int16_t rule_0507(void);
extern int16_t rule_0508(void);
extern int16_t rule_0509(void);
extern int16_t rule_0601(void);
extern int16_t rule_0602(void);
extern int16_t rule_0701(void);
extern int16_t rule_0702(void);
extern int16_t rule_0703(void);
extern int16_t rule_0704(void);
extern int16_t rule_0801(void);
extern int16_t rule_0802(void);
extern int16_t rule_0803(void);
extern int16_t rule_0804(void);
extern int16_t rule_0805(void);
extern int16_t rule_0806(void);
extern int16_t rule_0807(void);
extern int16_t rule_0808(void);
extern int16_t rule_0809(void);
extern int16_t rule_0810(void);
extern int16_t rule_0811(void);
extern int16_t rule_0812(void);
extern int16_t rule_0813(void);
extern int16_t rule_0814(void);
extern int16_t rule_0901(void);
extern int16_t rule_0902(void);
extern int16_t rule_0903(void);
extern int16_t rule_0904(void);
extern int16_t rule_0905(void);
extern int16_t rule_1001_Boolean(void);
extern int16_t rule_1001_character(void);
extern int16_t rule_1001_enum(void);
extern int16_t rule_1001_floating(void);
extern int16_t rule_1001_signed(void);
extern int16_t rule_1001_unsigned(void);
extern int16_t rule_1002(void);
extern int16_t rule_1003_from_Boolean(void);
extern int16_t rule_1003_from_character(void);
extern int16_t rule_1003_from_enum(void);
extern int16_t rule_1003_from_floating(void);
extern int16_t rule_1003_from_signed(void);
extern int16_t rule_1003_from_unsigned(void);
extern int16_t rule_1003_narrow_floating(void);
extern int16_t rule_1003_narrow_signed(void);
extern int16_t rule_1003_narrow_unsigned(void);
extern int16_t rule_1003_switch(void);
extern int16_t rule_1004_compare(void);
extern int16_t rule_1004_integer_float(void);
extern int16_t rule_1004_signed_unsigned(void);
extern int16_t rule_1005(void);
extern int16_t rule_1006(void);
extern int16_t rule_1007(void);
extern int16_t rule_1008(void);
extern int16_t rule_1101(void);
extern int16_t rule_1102(void);
extern int16_t rule_1103(void);
extern int16_t rule_1104(void);
extern int16_t rule_1105(void);
extern int16_t rule_1106(void);
extern int16_t rule_1107(void);
extern int16_t rule_1108(void);
extern int16_t rule_1109(void);
extern int16_t rule_1201(void);
extern int16_t rule_1202(void);
extern int16_t rule_1203(void);
extern int16_t rule_1204(void);
extern int16_t rule_1301(void);
extern int16_t rule_1302(void);
extern int16_t rule_1303(void);
extern int16_t rule_1304(void);
extern int16_t rule_1305(void);
extern int16_t rule_1306(void);
extern int16_t rule_1401(void);
extern int16_t rule_1402(void);
extern int16_t rule_1403(void);
extern int16_t rule_1404(void);
extern int16_t rule_1501(void);
extern int16_t rule_1502(void);
extern int16_t rule_1503(void);
extern int16_t rule_1504(void);
extern int16_t rule_1505(void);
extern int16_t rule_1506(void);
extern int16_t rule_1507(void);
extern int16_t rule_1601(void);
extern int16_t rule_1602(void);
extern int16_t rule_1603(void);
extern int16_t rule_1604(void);
extern int16_t rule_1605(void);
extern int16_t rule_1606(void);
extern int16_t rule_1607(void);
extern int16_t rule_1701(void);
extern int16_t rule_1702(void);
extern int16_t rule_1703(void);
extern int16_t rule_1704(void);
extern int16_t rule_1705(void);
extern int16_t rule_1706(void);
extern int16_t rule_1707(void);
extern int16_t rule_1708(void);
extern int16_t rule_1801(void);
extern int16_t rule_1802(void);
extern int16_t rule_1803(void);
extern int16_t rule_1804(void);
extern int16_t rule_1805(void);
extern int16_t rule_1806(void);
extern int16_t rule_1807(void);
extern int16_t rule_1808(void);
extern int16_t rule_1901(void);
extern int16_t rule_1902(void);
extern int16_t rule_2001(void);
extern int16_t rule_2002(void);
extern int16_t rule_2003(void);
extern int16_t rule_2004(void);
extern int16_t rule_2005(void);
extern int16_t rule_2006(void);
extern int16_t rule_2007(void);
extern int16_t rule_2008(void);
extern int16_t rule_2009(void);
extern int16_t rule_2010(void);
extern int16_t rule_2011(void);
extern int16_t rule_2012(void);
extern int16_t rule_2013(void);
extern int16_t rule_2014(void);
extern int16_t rule_2101(void);
extern int16_t rule_2102(void);
extern int16_t rule_2103(void);
extern int16_t rule_2104(void);
extern int16_t rule_2105(void);
extern int16_t rule_2106(void);
extern int16_t rule_2107(void);
extern int16_t rule_2108(void);
extern int16_t rule_2109(void);
extern int16_t rule_2110(void);
extern int16_t rule_2111(void);
extern int16_t rule_2112(void);
extern int16_t rule_2201(void);
extern int16_t rule_2202(void);
extern int16_t rule_2203(void);
extern int16_t rule_2204(void);
extern int16_t rule_2205(void);
extern int16_t rule_2206(void);

extern void blf(BL                 blp);

extern void pcf(PC                 pcp);

extern void s8f(int8_t             scp);
extern void s16f(int16_t           sip);
extern void s32f(int32_t           slp);

extern void u8f(uint8_t            ucp);
extern void u16f(uint16_t          uip);
extern void u32f(uint32_t          ulp);

extern void ft32f(float32_t        ftp);
extern void ft64f(float64_t        dbp);
extern void ft128f(float128_t      ldp);

extern void n1f(N1                 n1p);
extern void n2f(N2                 n2p);

#endif
