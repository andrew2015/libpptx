#define __PPTX_PRIVATE_INCLUDES__ /* Allow private includes */
/* Standard headers */
#include <string.h>
/* Self header */
#include <private/pptx-st-tlbehavior-additive-type.h>
/* Imported internal stuff */

struct map {
    char *key;
    pptx_st_tlbehavior_additive_type_token_enum value;
};

static int
comparator(const void *const lhs, const void *const rhs)
{
    return strcmp(((struct map *) lhs)->key, ((struct map *) rhs)->key);

}

pptx_st_tlbehavior_additive_type_token_enum
pptx_get_st_tlbehavior_additive_type(xmlNode *node, const xmlChar *property)
{
    struct map *found;
    struct map key;
    struct map base[6] = {
      {"base", ST_TLBEHAVIOR_ADDITIVE_TYPE_BASE},
      {"mult", ST_TLBEHAVIOR_ADDITIVE_TYPE_MULT},
      {"nil", ST_TLBEHAVIOR_ADDITIVE_TYPE_NIL},
      {"none", ST_TLBEHAVIOR_ADDITIVE_TYPE_NONE},
      {"repl", ST_TLBEHAVIOR_ADDITIVE_TYPE_REPL},
      {"sum", ST_TLBEHAVIOR_ADDITIVE_TYPE_SUM}
    };
    // Prepare the key object
    key.key = (char *) pptx_xml_get_attribute_as_string(node, property);
    if (key.key == NULL)
        return ST_TLBEHAVIOR_ADDITIVE_TYPE_NIL;
    // Perform binary search
    found = bsearch(&key, base, 6, sizeof key, comparator);
    if (found == NULL) {
        xmlFree(key.key);
        return ST_TLBEHAVIOR_ADDITIVE_TYPE_NIL;
    }
    xmlFree(key.key);
    return found->value;
}
