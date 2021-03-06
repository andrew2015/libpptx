#define __PPTX_PRIVATE_INCLUDES__ /* Allow private includes */
/* Standard headers */
#include <string.h>
/* Self header */
#include <private/pptx-ct-a-picture.h>
/* Imported internal stuff */
#include <private/pptx-ct-a-picture-non-visual.h>
#include <private/pptx-ct-a-blip-fill-properties.h>
#include <private/pptx-ct-a-shape-properties.h>

typedef struct pptx_ct_a_picture_s {
    pptx_ct_a_picture_non_visual *nv_pic_pr;
    pptx_ct_a_blip_fill_properties *blip_fill;
    pptx_ct_a_shape_properties *sp_pr;
    int32_t index;
} pptx_ct_a_picture;

pptx_ct_a_picture *
pptx_ct_a_picture_new(xmlNode *node)
{
    pptx_ct_a_picture *obj;
    xmlXPathObject *xpath __attribute__((unused));
    if (node == NULL)
        return NULL;
    obj = malloc(sizeof *obj);
    if (obj == NULL)
        return NULL;

    xpath = pptx_xml_find_node(node, (const xmlChar *) "a:nvPicPr");
    if (xpath != NULL) {
        xmlNodeSet *nodes;
        nodes = xpath->nodesetval;
        if ((nodes->nodeNr != 1) || (nodes->nodeNr < -1)) {       
            obj->nv_pic_pr = NULL;
        } else {
            obj->nv_pic_pr = pptx_ct_a_picture_non_visual_new(nodes->nodeTab[0]);
        }
        xmlXPathFreeObject(xpath);
    } else {
        obj->nv_pic_pr = NULL;
    }

    xpath = pptx_xml_find_node(node, (const xmlChar *) "a:blipFill");
    if (xpath != NULL) {
        xmlNodeSet *nodes;
        nodes = xpath->nodesetval;
        if ((nodes->nodeNr != 1) || (nodes->nodeNr < -1)) {       
            obj->blip_fill = NULL;
        } else {
            obj->blip_fill = pptx_ct_a_blip_fill_properties_new(nodes->nodeTab[0]);
        }
        xmlXPathFreeObject(xpath);
    } else {
        obj->blip_fill = NULL;
    }

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

pptx_ct_a_picture_non_visual *
pptx_ct_a_picture_get_nv_pic_pr(const pptx_ct_a_picture *const obj)
{
    return obj->nv_pic_pr;
}

pptx_ct_a_blip_fill_properties *
pptx_ct_a_picture_get_blip_fill(const pptx_ct_a_picture *const obj)
{
    return obj->blip_fill;
}

pptx_ct_a_shape_properties *
pptx_ct_a_picture_get_sp_pr(const pptx_ct_a_picture *const obj)
{
    return obj->sp_pr;
}

int32_t
pptx_ct_a_picture_get_index(pptx_ct_a_picture *obj)
{
    return obj->index;
}

void
pptx_ct_a_picture_free(pptx_ct_a_picture *obj)
{
    if (obj == NULL)
        return;
    pptx_ct_a_picture_non_visual_free(obj->nv_pic_pr);
    pptx_ct_a_blip_fill_properties_free(obj->blip_fill);
    pptx_ct_a_shape_properties_free(obj->sp_pr);
    free(obj);
}