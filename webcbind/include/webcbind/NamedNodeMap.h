#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Attr Attr;


/**
 * @brief Interface NamedNodeMap
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/NamedNodeMap)
 */
DECLARE_EMLITE_TYPE(NamedNodeMap, em_Val);

/**
 * @brief Gets the `length` property. 
*/
unsigned long NamedNodeMap_length(const NamedNodeMap *self);

/**
 * @brief Calls the `item` method. 
*/
Attr NamedNodeMap_item(NamedNodeMap* self , unsigned long index);

/**
 * @brief Calls the `getNamedItem` method. 
*/
Attr NamedNodeMap_getNamedItem(NamedNodeMap* self , jb_String * qualifiedName);

/**
 * @brief Calls the `getNamedItemNS` method. 
*/
Attr NamedNodeMap_getNamedItemNS(NamedNodeMap* self , jb_String * namespace_, jb_String * localName);

/**
 * @brief Calls the `setNamedItem` method. 
*/
Attr NamedNodeMap_setNamedItem(NamedNodeMap* self , Attr * attr);

/**
 * @brief Calls the `setNamedItemNS` method. 
*/
Attr NamedNodeMap_setNamedItemNS(NamedNodeMap* self , Attr * attr);

/**
 * @brief Calls the `removeNamedItem` method. 
*/
Attr NamedNodeMap_removeNamedItem(NamedNodeMap* self , jb_String * qualifiedName);

/**
 * @brief Calls the `removeNamedItemNS` method. 
*/
Attr NamedNodeMap_removeNamedItemNS(NamedNodeMap* self , jb_String * namespace_, jb_String * localName);

#ifdef __cplusplus
}
#endif
