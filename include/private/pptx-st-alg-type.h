#ifndef __PPTX_ST_ALG_TYPE_H__
#define __PPTX_ST_ALG_TYPE_H__

#ifndef __PPTX_PRIVATE_INCLUDES__
#error "Please do not include this file directly"
#endif /* __PPTX_H__ */

#include <libxml/parser.h>
#include <private/pptx-common.h>

typedef enum pptx_st_alg_type_text_enum {
    ST_ALG_TYPE_TYPE_ANY,
    ST_ALG_TYPE_NIL,
    ST_ALG_TYPE_CUSTOM
} pptx_st_alg_type_text_enum;

pptx_st_alg_type_text_enum pptx_get_st_alg_type(xmlNode *node, const xmlChar *property);

#endif /* __PPTX_ST_ALG_TYPE_H__ */
