#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Element Element;


/**
 * @brief Interface HTMLCollection
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLCollection)
 */
DECLARE_EMLITE_TYPE(HTMLCollection, em_Val);

/**
 * @brief Gets the `length` property. 
*/
unsigned long HTMLCollection_length(const HTMLCollection *self);

/**
 * @brief Calls the `item` method. 
*/
Element HTMLCollection_item(HTMLCollection* self , unsigned long index);

/**
 * @brief Calls the `namedItem` method. 
*/
Element HTMLCollection_namedItem(HTMLCollection* self , jb_String * name);

#ifdef __cplusplus
}
#endif
