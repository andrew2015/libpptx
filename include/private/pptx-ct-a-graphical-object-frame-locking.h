#ifndef __PPTX_CT_A_GRAPHICAL_OBJECT_FRAME_LOCKING_H__
#define __PPTX_CT_A_GRAPHICAL_OBJECT_FRAME_LOCKING_H__

#ifndef __PPTX_PRIVATE_INCLUDES__
#error "Please do not include this file directly"
#endif /* __PPTX_H__ */

#include <libxml/parser.h>
#include <private/pptx-common.h>

typedef struct pptx_ct_a_office_art_extension_list_s pptx_ct_a_office_art_extension_list;

typedef struct pptx_ct_a_graphical_object_frame_locking_s pptx_ct_a_graphical_object_frame_locking;
pptx_ct_a_graphical_object_frame_locking *pptx_ct_a_graphical_object_frame_locking_new(xmlNode *node);
void pptx_ct_a_graphical_object_frame_locking_free(pptx_ct_a_graphical_object_frame_locking *obj);
pptx_ct_a_office_art_extension_list *pptx_ct_a_graphical_object_frame_locking_get_ext_lst(const pptx_ct_a_graphical_object_frame_locking *const obj);
pptx_bool pptx_ct_a_graphical_object_frame_locking_get_no_grp(const pptx_ct_a_graphical_object_frame_locking *const obj);
pptx_bool pptx_ct_a_graphical_object_frame_locking_get_no_drilldown(const pptx_ct_a_graphical_object_frame_locking *const obj);
pptx_bool pptx_ct_a_graphical_object_frame_locking_get_no_select(const pptx_ct_a_graphical_object_frame_locking *const obj);
pptx_bool pptx_ct_a_graphical_object_frame_locking_get_no_change_aspect(const pptx_ct_a_graphical_object_frame_locking *const obj);
pptx_bool pptx_ct_a_graphical_object_frame_locking_get_no_move(const pptx_ct_a_graphical_object_frame_locking *const obj);
pptx_bool pptx_ct_a_graphical_object_frame_locking_get_no_resize(const pptx_ct_a_graphical_object_frame_locking *const obj);
int32_t pptx_ct_a_graphical_object_frame_locking_get_index(pptx_ct_a_graphical_object_frame_locking *obj);

#endif /* __PPTX_CT_A_GRAPHICAL_OBJECT_FRAME_LOCKING_H__ */
