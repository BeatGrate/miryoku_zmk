// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#if !defined (MIRYOKU_LAYOUTMAPPING_VAULT_KATANA)

#define XXX &none

#define MIRYOKU_LAYOUTMAPPING_VAULT_KATANA( \
     K00, K01, K02, K03, K04,      N05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, N16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, N27, K28, K29, \
     K30, K31, K32, N33, K34,      K35, K36, K37, N38, N39 \
) \
K00  K01  K02  K03  K04  XXX  K06  K07  K08  K09  K10 \
K11  K12  K13  K14  K15  XXX  K17  K18  K19  K20  K21 \
K22  K23  K24  K25  K26  XXX  K28  K29  K30  K31  K32 \
XXX               K34 K35  K36 K37                XXX

#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_VAULT_KATANA
