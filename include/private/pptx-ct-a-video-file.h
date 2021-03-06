#ifndef __PPTX_CT_A_VIDEO_FILE_H__
#define __PPTX_CT_A_VIDEO_FILE_H__

#ifndef __PPTX_PRIVATE_INCLUDES__
#error "Please do not include this file directly"
#endif /* __PPTX_H__ */

#include <libxml/parser.h>
#include <private/pptx-common.h>

typedef struct pptx_ct_a_office_art_extension_list_s pptx_ct_a_office_art_extension_list;

typedef struct pptx_ct_a_video_file_s pptx_ct_a_video_file;
pptx_ct_a_video_file *pptx_ct_a_video_file_new(xmlNode *node);
void pptx_ct_a_video_file_free(pptx_ct_a_video_file *obj);
pptx_ct_a_office_art_extension_list *pptx_ct_a_video_file_get_ext_lst(const pptx_ct_a_video_file *const obj);
pptx_string pptx_ct_a_video_file_get_link(const pptx_ct_a_video_file *const obj);
pptx_string pptx_ct_a_video_file_get_content_type(const pptx_ct_a_video_file *const obj);
int32_t pptx_ct_a_video_file_get_index(pptx_ct_a_video_file *obj);

#endif /* __PPTX_CT_A_VIDEO_FILE_H__ */
