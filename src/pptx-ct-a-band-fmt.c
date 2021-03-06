#define __PPTX_PRIVATE_INCLUDES__ /* Allow private includes */
/* Standard headers */
#include <string.h>
/* Self header */
#include <private/pptx-ct-a-band-fmt.h>
/* Imported internal stuff */
#include <private/pptx-ct-a-shape-properties.h>

typedef struct pptx_ct_a_band_fmt_s {
    pptx_uint idx;
    pptx_ct_a_shape_properties *sp_pr;
    int32_t index;
} pptx_ct_a_band_fmt;

pptx_ct_a_band_fmt *
pptx_ct_a_band_fmt_new(xmlNode *node)
{
    pptx_ct_a_band_fmt *obj;
    xmlXPathObject *xpath __attribute__((unused));
    if (node == NULL)
        return NULL;
    obj = malloc(sizeof *obj);
    if (obj == NULL)
        return NULL;
    obj->idx = pptx_xml_get_content_as_uint(node, (const xmlChar *) "a:idx");

    xpath = pptx_xml_find_node(node, (const xmlChar *) "a:spPr");
    if (xpath != NULL) {
        xmlNodeSet *nodes;
        nodes = xpath->nodesetval;
        if ((nodes->nodeNr != 1) || (nodes->nodeNr < -1)) {       
            obj->sp_pr = NULL;
        } else {
            obj->sp_pr = pptx_ct_a_shape_properties_new(nodes->nodeTab[0]);
        }
        xmlXPathFreeObject(xpath);
    } else {
        obj->sp_pr = NULL;
    }
    obj->index = pptx_xml_get_node_depth(node);
    return obj;
}

pptx_uint 
pptx_ct_a_band_fmt_get_idx(const pptx_ct_a_band_fmt *const obj)
{
    return obj->idx;
}

pptx_ct_a_shape_properties *
pptx_ct_a_band_fmt_get_sp_pr(const pptx_ct_a_band_fmt *const obj)
{
    return obj->sp_pr;
}

int32_t
pptx_ct_a_band_fmt_get_index(pptx_ct_a_band_fmt *obj)
{
    return obj->index;
}

void
pptx_ct_a_band_fmt_free(pptx_ct_a_band_fmt *obj)
{
    if (obj == NULL)
        return;
    pptx_ct_a_shape_properties_free(obj->sp_pr);
    free(obj);
}