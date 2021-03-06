#ifndef __PPTX_ST_PRESET_PATTERN_VAL_H__
#define __PPTX_ST_PRESET_PATTERN_VAL_H__

#ifndef __PPTX_PRIVATE_INCLUDES__
#error "Please do not include this file directly"
#endif /* __PPTX_H__ */

#include <libxml/parser.h>
#include <private/pptx-common.h>

typedef enum pptx_st_preset_pattern_val_token_enum {
    ST_PRESET_PATTERN_VAL_LG_CONFETTI,
    ST_PRESET_PATTERN_VAL_UP_DIAG,
    ST_PRESET_PATTERN_VAL_PCT80,
    ST_PRESET_PATTERN_VAL_DIAG_BRICK,
    ST_PRESET_PATTERN_VAL_WAVE,
    ST_PRESET_PATTERN_VAL_SM_CHECK,
    ST_PRESET_PATTERN_VAL_DOT_GRID,
    ST_PRESET_PATTERN_VAL_NAR_HORZ,
    ST_PRESET_PATTERN_VAL_SPHERE,
    ST_PRESET_PATTERN_VAL_ZIG_ZAG,
    ST_PRESET_PATTERN_VAL_HORZ,
    ST_PRESET_PATTERN_VAL_DN_DIAG,
    ST_PRESET_PATTERN_VAL_PCT60,
    ST_PRESET_PATTERN_VAL_LT_HORZ,
    ST_PRESET_PATTERN_VAL_PCT20,
    ST_PRESET_PATTERN_VAL_SOLID_DMND,
    ST_PRESET_PATTERN_VAL_PCT40,
    ST_PRESET_PATTERN_VAL_CROSS,
    ST_PRESET_PATTERN_VAL_LG_CHECK,
    ST_PRESET_PATTERN_VAL_PCT25,
    ST_PRESET_PATTERN_VAL_HORZ_BRICK,
    ST_PRESET_PATTERN_VAL_DASH_HORZ,
    ST_PRESET_PATTERN_VAL_DASH_UP_DIAG,
    ST_PRESET_PATTERN_VAL_DK_UP_DIAG,
    ST_PRESET_PATTERN_VAL_SHINGLE,
    ST_PRESET_PATTERN_VAL_LT_DN_DIAG,
    ST_PRESET_PATTERN_VAL_DIVOT,
    ST_PRESET_PATTERN_VAL_VERT,
    ST_PRESET_PATTERN_VAL_NIL,
    ST_PRESET_PATTERN_VAL_DASH_DN_DIAG,
    ST_PRESET_PATTERN_VAL_NAR_VERT,
    ST_PRESET_PATTERN_VAL_PCT90,
    ST_PRESET_PATTERN_VAL_DK_VERT,
    ST_PRESET_PATTERN_VAL_PLAID,
    ST_PRESET_PATTERN_VAL_DASH_VERT,
    ST_PRESET_PATTERN_VAL_SM_CONFETTI,
    ST_PRESET_PATTERN_VAL_PCT10,
    ST_PRESET_PATTERN_VAL_LT_UP_DIAG,
    ST_PRESET_PATTERN_VAL_WD_UP_DIAG,
    ST_PRESET_PATTERN_VAL_DK_DN_DIAG,
    ST_PRESET_PATTERN_VAL_WD_DN_DIAG,
    ST_PRESET_PATTERN_VAL_DIAG_CROSS,
    ST_PRESET_PATTERN_VAL_WEAVE,
    ST_PRESET_PATTERN_VAL_PCT75,
    ST_PRESET_PATTERN_VAL_LG_GRID,
    ST_PRESET_PATTERN_VAL_SM_GRID,
    ST_PRESET_PATTERN_VAL_PCT50,
    ST_PRESET_PATTERN_VAL_PCT70,
    ST_PRESET_PATTERN_VAL_PCT30,
    ST_PRESET_PATTERN_VAL_DK_HORZ,
    ST_PRESET_PATTERN_VAL_OPEN_DMND,
    ST_PRESET_PATTERN_VAL_DOT_DMND,
    ST_PRESET_PATTERN_VAL_PCT5,
    ST_PRESET_PATTERN_VAL_LT_VERT,
    ST_PRESET_PATTERN_VAL_TRELLIS
} pptx_st_preset_pattern_val_token_enum;

pptx_st_preset_pattern_val_token_enum pptx_get_st_preset_pattern_val(xmlNode *node, const xmlChar *property);

#endif /* __PPTX_ST_PRESET_PATTERN_VAL_H__ */
