#ifndef __PPTX_CT_A_DUOTONE_EFFECT_H__
#define __PPTX_CT_A_DUOTONE_EFFECT_H__

#ifndef __PPTX_PRIVATE_INCLUDES__
#error "Please do not include this file directly"
#endif /* __PPTX_H__ */

#include <libxml/parser.h>
#include <private/pptx-common.h>

typedef struct pptx_ct_a_sc_rgb_color_s pptx_ct_a_sc_rgb_color;
typedef struct pptx_ct_a_srgb_color_s pptx_ct_a_srgb_color;
typedef struct pptx_ct_a_hsl_color_s pptx_ct_a_hsl_color;
typedef struct pptx_ct_a_system_color_s pptx_ct_a_system_color;
typedef struct pptx_ct_a_scheme_color_s pptx_ct_a_scheme_color;
typedef struct pptx_ct_a_preset_color_s pptx_ct_a_preset_color;

typedef struct pptx_ct_a_duotone_effect_s pptx_ct_a_duotone_effect;
pptx_ct_a_duotone_effect *pptx_ct_a_duotone_effect_new(xmlNode *node);
void pptx_ct_a_duotone_effect_free(pptx_ct_a_duotone_effect *obj);
pptx_ct_a_sc_rgb_color **pptx_ct_a_duotone_effect_get_color_choice_scrgb_clr(const pptx_ct_a_duotone_effect *const obj);
pptx_ct_a_srgb_color **pptx_ct_a_duotone_effect_get_color_choice_srgb_clr(const pptx_ct_a_duotone_effect *const obj);
pptx_ct_a_hsl_color **pptx_ct_a_duotone_effect_get_color_choice_hsl_clr(const pptx_ct_a_duotone_effect *const obj);
pptx_ct_a_system_color **pptx_ct_a_duotone_effect_get_color_choice_sys_clr(const pptx_ct_a_duotone_effect *const obj);
pptx_ct_a_scheme_color **pptx_ct_a_duotone_effect_get_color_choice_scheme_clr(const pptx_ct_a_duotone_effect *const obj);
pptx_ct_a_preset_color **pptx_ct_a_duotone_effect_get_color_choice_prst_clr(const pptx_ct_a_duotone_effect *const obj);
int32_t pptx_ct_a_duotone_effect_get_index(pptx_ct_a_duotone_effect *obj);

#endif /* __PPTX_CT_A_DUOTONE_EFFECT_H__ */
