#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>


// Aliases
#define IT_BSLS GRAVE   // (backslash)
#define IT_N1 N1        // 1
#define IT_N2 N2        // 2
#define IT_N3 N3        // 3
#define IT_N4 N4        // 4
#define IT_N5 N5        // 5
#define IT_N6 N6        // 6
#define IT_N7 N7        // 7
#define IT_N8 N8        // 8
#define IT_N9 N9        // 9
#define IT_N0 N0        // 0
#define IT_SQT MINUS    // '
#define IT_IGRV EQUAL   // ì

#define IT_Q Q          // Q
#define IT_W W          // W
#define IT_E E          // E
#define IT_R R          // R
#define IT_T T          // T
#define IT_Y Y          // Y
#define IT_U U          // U
#define IT_I I          // I
#define IT_O O          // O
#define IT_P P          // P
#define IT_EGRV LBKT    // è
#define IT_PLUS RBKT    // +
#define IT_A A          // A
#define IT_S S          // S
#define IT_D D          // D
#define IT_F F          // F
#define IT_G G          // G
#define IT_H H          // H
#define IT_J J          // J
#define IT_K K          // K
#define IT_L L          // L
#define IT_OGRV SEMI    // ò
#define IT_AGRV SQT     // à
#define IT_UGRV NUHS    // ù

#define IT_LABK NUBS    // <
#define IT_Z    Z       // Z
#define IT_X    X       // X
#define IT_C    C       // C
#define IT_V    V       // V
#define IT_B    B       // B
#define IT_N    N       // N
#define IT_M    M       // M
#define IT_COMMA COMMA  // ,
#define IT_DOT  DOT     // .
#define IT_MINUS FSLH   // -

#define IT_PIPE LS(IT_BSLS)   // |
#define IT_EXLM LS(IT_N1)     // !
#define IT_DQUO LS(IT_N2)     // "
#define IT_PND  LS(IT_N3)     // £
#define IT_DLR  LS(IT_N4)     // $
#define IT_PERC LS(IT_N5)     // %
#define IT_AMPR LS(IT_N6)     // &
#define IT_SLSH LS(IT_N7)     // /
#define IT_LPRN LS(IT_N8)     // (
#define IT_RPRN LS(IT_N9)     // )
#define IT_EQL  LS(IT_N0)     // =
#define IT_QUES LS(IT_QUOT)   // ?
#define IT_CIRC LS(IT_IGRV)   // ^
#define IT_EACU LS(IT_EGRV)   // é
#define IT_ASTR LS(IT_PLUS)   // *
#define IT_LCCE LS(IT_OGRV)   // ç
#define IT_DEG  LS(IT_AGRV)   // °
#define IT_SECT LS(IT_UGRV)   // §
#define IT_RABK LS(IT_LABK)   // >
#define IT_SCLN LS(IT_COMM)   // ;
#define IT_COLN LS(IT_DOT)    // :
#define IT_UNDS LS(IT_MINS)   // _
#define IT_GRV  RA(IT_BSLS) // `
#define IT_LDAQ RA(IT_1)    // «
#define IT_LDQU RA(IT_2)    // “
#define IT_LSQU RA(IT_3)    // ‘
#define IT_YEN  RA(IT_4)    // ¥
#define IT_TILD RA(IT_5)    // ~
#define IT_LSAQ RA(IT_6)    // ‹
#define IT_DIV  RA(IT_7)    // ÷
#define IT_ACUT RA(IT_8)    // ´ (dead)
#define IT_DGRV RA(IT_9)    // ` (dead)
#define IT_NEQL RA(IT_0)    // ≠
#define IT_IEXL RA(IT_QUOT) // ¡
#define IT_DCIR RA(IT_IGRV) // ˆ (dead)
#define IT_DLQU RA(IT_Q)    // „
#define IT_OMEG RA(IT_W)    // Ω
#define IT_EURO RA(IT_E)    // €
#define IT_REGD RA(IT_R)    // ®
#define IT_TM   RA(IT_T)    // ™
#define IT_AE   RA(IT_Y)    // Æ
#define IT_DIAE RA(IT_U)    // ¨ (dead)
#define IT_OE   RA(IT_I)    // Œ
#define IT_OSTR RA(IT_O)    // Ø
#define IT_PI   RA(IT_P)    // π
#define IT_LBRC RA(IT_EGRV) // [
#define IT_RBRC RA(IT_PLUS) // ]
#define IT_ARNG RA(IT_A)    // Å
#define IT_SS   RA(IT_S)    // ß
#define IT_PDIF RA(IT_D)    // ∂
#define IT_FHK  RA(IT_F)    // ƒ
#define IT_INFN RA(IT_G)    // ∞
#define IT_INCR RA(IT_H)    // ∆
#define IT_FORD RA(IT_J)    // ª
#define IT_MORD RA(IT_K)    // º
#define IT_NOT  RA(IT_L)    // ¬
#define IT_AT   RA(IT_OGRV) // @
#define IT_HASH RA(IT_AGRV) // #
#define IT_PILC RA(IT_UGRV) // ¶
#define IT_LTEQ RA(IT_LABK) // ≤
#define IT_NARS RA(IT_Z)    // ∑
#define IT_DAGG RA(IT_X)    // †
#define IT_COPY RA(IT_C)    // ©
#define IT_SQRT RA(IT_V)    // √
#define IT_INTG RA(IT_B)    // ∫
#define IT_STIL RA(IT_N)    // ˜ (dead)
#define IT_MICR RA(IT_M)    // µ
#define IT_ELLP RA(IT_COMM) // …
#define IT_BULT RA(IT_DOT)  // •
#define IT_NDSH RA(IT_MINS) // –
#define IT_DLSI S(RA(IT_BSLS)) // ı
#define IT_RDAQ S(RA(IT_1))    // »
#define IT_RDQU S(RA(IT_2))    // ”
#define IT_RSQU S(RA(IT_3))    // ’
#define IT_CENT S(RA(IT_4))    // ¢
#define IT_PERM S(RA(IT_5))    // ‰
#define IT_RSAQ S(RA(IT_6))    // ›
#define IT_FRSL S(RA(IT_7))    // ⁄
#define IT_APPL S(RA(IT_8))    //  (Apple logo)
#define IT_AEQL S(RA(IT_0))    // ≈
#define IT_IQUE S(RA(IT_QUOT)) // ¿
#define IT_PLMN S(RA(IT_IGRV)) // ±
#define IT_SLQU S(RA(IT_Q))    // ‚
#define IT_CAGR S(RA(IT_W))    // À
#define IT_CEGR S(RA(IT_E))    // È
#define IT_CIGR S(RA(IT_R))    // Ì
#define IT_COGR S(RA(IT_T))    // Ò
#define IT_CUGR S(RA(IT_U))    // Ù
#define IT_NARP S(RA(IT_P))    // ∏
#define IT_LCBR S(RA(IT_EGRV)) // {
#define IT_RCBR S(RA(IT_PLUS)) // }
#define IT_MACR S(RA(IT_S))    // ¯
#define IT_BREV S(RA(IT_D))    // ˘
#define IT_DOTA S(RA(IT_F))    // ˙
#define IT_RNGA S(RA(IT_G))    // ˚
#define IT_CEDL S(RA(IT_H))    // ¸
#define IT_DACU S(RA(IT_J))    // ˝
#define IT_OGON S(RA(IT_K))    // ˛
#define IT_CARN S(RA(IT_L))    // ˇ
#define IT_CCCE S(RA(IT_OGRV)) // Ç
#define IT_LOZN S(RA(IT_UGRV)) // ◊
#define IT_GTEQ S(RA(IT_LABK)) // ≥
#define IT_DDAG S(RA(IT_X))    // ‡
#define IT_CAAC S(RA(IT_C))    // Á
#define IT_CEAC S(RA(IT_V))    // É
#define IT_CIAC S(RA(IT_B))    // Í
#define IT_COAC S(RA(IT_N))    // Ó
#define IT_CUAC S(RA(IT_M))    // Ú
#define IT_MDDT S(RA(IT_DOT))  // ·
#define IT_MDSH S(RA(IT_MINS)) // —

