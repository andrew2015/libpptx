#define __PPTX_PRIVATE_INCLUDES__ /* Allow private includes */
/* Standard headers */
#include <string.h>
/* Self header */
#include <private/pptx-ct-dgm-ctcategory.h>
/* Imported internal stuff */

typedef struct pptx_ct_dgm_ctcategory_s {
    pptx_string type;
    pptx_uint pri;
    int32_t index;
} pptx_ct_dgm_ctcategory;

pptx_ct_dgm_ctcategory *
pptx_ct_dgm_ctcategory_new(xmlNode *node)
{
    pptx_ct_dgm_ctcategory *obj;
    xmlXPathObject *xpath __attribute__((unused));
    if (node == NULL)
        return NULL;
    obj = malloc(sizeof *obj);
    if (obj == NULL)
        return NULL;
    obj->type = pptx_xml_get_attribute_as_string(node, (const xmlChar *) "type");
    obj->pri = pptx_xml_get_attribute_as_uint(node, (const xmlChar *) "pri");
    obj->index = pptx_xml_get_node_depth(node);
    return obj;
}

pptx_string 
pptx_ct_dgm_ctcategory_get_type(const pptx_ct_dgm_ctcategory *const obj)
{
    return obj->type;
}

pptx_uint 
pptx_ct_dgm_ctcategory_get_pri(const pptx_ct_dgm_ctcategory *const obj)
{
    return obj->pri;
}

int32_t
pptx_ct_dgm_ctcategory_get_index(pptx_ct_dgm_ctcategory *obj)
{
    return obj->index;
}

void
pptx_ct_dgm_ctcategory_free(pptx_ct_dgm_ctcategory *obj)
{
    if (obj == NULL)
        return;
    xmlFree(obj->type);
    free(obj);
}