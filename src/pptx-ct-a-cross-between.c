#define __PPTX_PRIVATE_INCLUDES__ /* Allow private includes */
/* Standard headers */
#include <string.h>
/* Self header */
#include <private/pptx-ct-a-cross-between.h>
/* Imported internal stuff */
#include <private/pptx-st-cross-between.h>

typedef struct pptx_ct_a_cross_between_s {
    pptx_st_cross_between_text_enum val;
    int32_t index;
} pptx_ct_a_cross_between;

pptx_ct_a_cross_between *
pptx_ct_a_cross_between_new(xmlNode *node)
{
    pptx_ct_a_cross_between *obj;
    xmlXPathObject *xpath __attribute__((unused));
    if (node == NULL)
        return NULL;
    obj = malloc(sizeof *obj);
    if (obj == NULL)
        return NULL;
    obj->val = pptx_get_st_cross_between(node, (const xmlChar *) "val");
    obj->index = pptx_xml_get_node_depth(node);
    return obj;
}

pptx_st_cross_between_text_enum 
pptx_ct_a_cross_between_get_val(const pptx_ct_a_cross_between *const obj)
{
    return obj->val;
}

int32_t
pptx_ct_a_cross_between_get_index(pptx_ct_a_cross_between *obj)
{
    return obj->index;
}

void
pptx_ct_a_cross_between_free(pptx_ct_a_cross_between *obj)
{
    if (obj == NULL)
        return;
    free(obj);
}