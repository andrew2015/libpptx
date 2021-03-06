#ifndef __PPTX_CT_A_NON_VISUAL_CONTENT_PART_PROPERTIES_H__
#define __PPTX_CT_A_NON_VISUAL_CONTENT_PART_PROPERTIES_H__

#ifndef __PPTX_PRIVATE_INCLUDES__
#error "Please do not include this file directly"
#endif /* __PPTX_H__ */

#include <libxml/parser.h>
#include <private/pptx-common.h>

typedef struct pptx_ct_a_content_part_locking_s pptx_ct_a_content_part_locking;
typedef struct pptx_ct_a_office_art_extension_list_s pptx_ct_a_office_art_extension_list;

typedef struct pptx_ct_a_non_visual_content_part_properties_s pptx_ct_a_non_visual_content_part_properties;
pptx_ct_a_non_visual_content_part_properties *pptx_ct_a_non_visual_content_part_properties_new(xmlNode *node);
void pptx_ct_a_non_visual_content_part_properties_free(pptx_ct_a_non_visual_content_part_properties *obj);
pptx_ct_a_content_part_locking *pptx_ct_a_non_visual_content_part_properties_get_cp_locks(const pptx_ct_a_non_visual_content_part_properties *const obj);
pptx_ct_a_office_art_extension_list *pptx_ct_a_non_visual_content_part_properties_get_ext_lst(const pptx_ct_a_non_visual_content_part_properties *const obj);
pptx_bool pptx_ct_a_non_visual_content_part_properties_get_is_comment(const pptx_ct_a_non_visual_content_part_properties *const obj);
int32_t pptx_ct_a_non_visual_content_part_properties_get_index(pptx_ct_a_non_visual_content_part_properties *obj);

#endif /* __PPTX_CT_A_NON_VISUAL_CONTENT_PART_PROPERTIES_H__ */
