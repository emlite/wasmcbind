#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Node Node;


/**
 * @brief Interface NodeList
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/NodeList)
 */
DECLARE_EMLITE_TYPE(NodeList, em_Val);

/**
 * @brief Calls the `item` method. 
*/
Node NodeList_item(NodeList* self , unsigned long index);

/**
 * @brief Gets the `length` property. 
*/
unsigned long NodeList_length(const NodeList *self);

#ifdef __cplusplus
}
#endif
