#ifndef __PPTX_CT_P_TIME_NODE_LIST_H__
#define __PPTX_CT_P_TIME_NODE_LIST_H__

#ifndef __PPTX_PRIVATE_INCLUDES__
#error "Please do not include this file directly"
#endif /* __PPTX_H__ */

#include <libxml/parser.h>
#include <private/pptx-common.h>

typedef struct pptx_ct_p_tltime_node_parallel_s pptx_ct_p_tltime_node_parallel;
typedef struct pptx_ct_p_tltime_node_sequence_s pptx_ct_p_tltime_node_sequence;
typedef struct pptx_ct_p_tltime_node_exclusive_s pptx_ct_p_tltime_node_exclusive;
typedef struct pptx_ct_p_tlanimate_behavior_s pptx_ct_p_tlanimate_behavior;
typedef struct pptx_ct_p_tlanimate_color_behavior_s pptx_ct_p_tlanimate_color_behavior;
typedef struct pptx_ct_p_tlanimate_effect_behavior_s pptx_ct_p_tlanimate_effect_behavior;
typedef struct pptx_ct_p_tlanimate_motion_behavior_s pptx_ct_p_tlanimate_motion_behavior;
typedef struct pptx_ct_p_tlanimate_rotation_behavior_s pptx_ct_p_tlanimate_rotation_behavior;
typedef struct pptx_ct_p_tlanimate_scale_behavior_s pptx_ct_p_tlanimate_scale_behavior;
typedef struct pptx_ct_p_tlcommand_behavior_s pptx_ct_p_tlcommand_behavior;
typedef struct pptx_ct_p_tlset_behavior_s pptx_ct_p_tlset_behavior;
typedef struct pptx_ct_p_tlmedia_node_audio_s pptx_ct_p_tlmedia_node_audio;
typedef struct pptx_ct_p_tlmedia_node_video_s pptx_ct_p_tlmedia_node_video;

typedef struct pptx_ct_p_time_node_list_s pptx_ct_p_time_node_list;
pptx_ct_p_time_node_list *pptx_ct_p_time_node_list_new(xmlNode *node);
void pptx_ct_p_time_node_list_free(pptx_ct_p_time_node_list *obj);
pptx_ct_p_tltime_node_parallel **pptx_ct_p_time_node_list_get_par(const pptx_ct_p_time_node_list *const obj);
pptx_ct_p_tltime_node_sequence **pptx_ct_p_time_node_list_get_seq(const pptx_ct_p_time_node_list *const obj);
pptx_ct_p_tltime_node_exclusive **pptx_ct_p_time_node_list_get_excl(const pptx_ct_p_time_node_list *const obj);
pptx_ct_p_tlanimate_behavior **pptx_ct_p_time_node_list_get_anim(const pptx_ct_p_time_node_list *const obj);
pptx_ct_p_tlanimate_color_behavior **pptx_ct_p_time_node_list_get_anim_clr(const pptx_ct_p_time_node_list *const obj);
pptx_ct_p_tlanimate_effect_behavior **pptx_ct_p_time_node_list_get_anim_effect(const pptx_ct_p_time_node_list *const obj);
pptx_ct_p_tlanimate_motion_behavior **pptx_ct_p_time_node_list_get_anim_motion(const pptx_ct_p_time_node_list *const obj);
pptx_ct_p_tlanimate_rotation_behavior **pptx_ct_p_time_node_list_get_anim_rot(const pptx_ct_p_time_node_list *const obj);
pptx_ct_p_tlanimate_scale_behavior **pptx_ct_p_time_node_list_get_anim_scale(const pptx_ct_p_time_node_list *const obj);
pptx_ct_p_tlcommand_behavior **pptx_ct_p_time_node_list_get_cmd(const pptx_ct_p_time_node_list *const obj);
pptx_ct_p_tlset_behavior **pptx_ct_p_time_node_list_get_set(const pptx_ct_p_time_node_list *const obj);
pptx_ct_p_tlmedia_node_audio **pptx_ct_p_time_node_list_get_audio(const pptx_ct_p_time_node_list *const obj);
pptx_ct_p_tlmedia_node_video **pptx_ct_p_time_node_list_get_video(const pptx_ct_p_time_node_list *const obj);
int32_t pptx_ct_p_time_node_list_get_index(pptx_ct_p_time_node_list *obj);

#endif /* __PPTX_CT_P_TIME_NODE_LIST_H__ */
