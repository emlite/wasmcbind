#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Element Element;


/**
 * @brief Interface HTMLAllCollection
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAllCollection)
 */
DECLARE_EMLITE_TYPE(HTMLAllCollection, em_Val);

/**
 * @brief Gets the `length` property. 
*/
unsigned long HTMLAllCollection_length(const HTMLAllCollection *self);

/**
 * @brief Calls the `namedItem` method. 
*/
jb_Any HTMLAllCollection_namedItem(HTMLAllCollection* self , jb_String * name);

/**
 * @brief Calls the `item` method. 
*/
jb_Any HTMLAllCollection_item0(HTMLAllCollection* self );

/**
 * @brief Calls the `item` method. 
*/
jb_Any HTMLAllCollection_item1(HTMLAllCollection* self , jb_String * nameOrIndex);

#ifdef __cplusplus
}
#endif
