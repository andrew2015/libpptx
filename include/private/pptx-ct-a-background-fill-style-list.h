#ifndef __PPTX_CT_A_BACKGROUND_FILL_STYLE_LIST_H__
#define __PPTX_CT_A_BACKGROUND_FILL_STYLE_LIST_H__

#ifndef __PPTX_PRIVATE_INCLUDES__
#error "Please do not include this file directly"
#endif /* __PPTX_H__ */

#include <libxml/parser.h>
#include <private/pptx-common.h>

typedef struct pptx_ct_a_no_fill_properties_s pptx_ct_a_no_fill_properties;
typedef struct pptx_ct_a_solid_color_fill_properties_s pptx_ct_a_solid_color_fill_properties;
typedef struct pptx_ct_a_gradient_fill_properties_s pptx_ct_a_gradient_fill_properties;
typedef struct pptx_ct_a_blip_fill_properties_s pptx_ct_a_blip_fill_properties;
typedef struct pptx_ct_a_pattern_fill_properties_s pptx_ct_a_pattern_fill_properties;
typedef struct pptx_ct_a_group_fill_properties_s pptx_ct_a_group_fill_properties;

typedef struct pptx_ct_a_background_fill_style_list_s pptx_ct_a_background_fill_style_list;
pptx_ct_a_background_fill_style_list *pptx_ct_a_background_fill_style_list_new(xmlNode *node);
void pptx_ct_a_background_fill_style_list_free(pptx_ct_a_background_fill_style_list *obj);
pptx_ct_a_no_fill_properties **pptx_ct_a_background_fill_style_list_get_fill_properties_no_fill(const pptx_ct_a_background_fill_style_list *const obj);
pptx_ct_a_solid_color_fill_properties **pptx_ct_a_background_fill_style_list_get_fill_properties_solid_fill(const pptx_ct_a_background_fill_style_list *const obj);
pptx_ct_a_gradient_fill_properties **pptx_ct_a_background_fill_style_list_get_fill_properties_grad_fill(const pptx_ct_a_background_fill_style_list *const obj);
pptx_ct_a_blip_fill_properties **pptx_ct_a_background_fill_style_list_get_fill_properties_blip_fill(const pptx_ct_a_background_fill_style_list *const obj);
pptx_ct_a_pattern_fill_properties **pptx_ct_a_background_fill_style_list_get_fill_properties_patt_fill(const pptx_ct_a_background_fill_style_list *const obj);
pptx_ct_a_group_fill_properties **pptx_ct_a_background_fill_style_list_get_fill_properties_grp_fill(const pptx_ct_a_background_fill_style_list *const obj);
int32_t pptx_ct_a_background_fill_style_list_get_index(pptx_ct_a_background_fill_style_list *obj);

#endif /* __PPTX_CT_A_BACKGROUND_FILL_STYLE_LIST_H__ */
