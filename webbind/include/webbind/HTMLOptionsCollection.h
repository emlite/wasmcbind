#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLCollection.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HTMLOptionElement HTMLOptionElement;


/**
 * @brief Interface HTMLOptionsCollection
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptionsCollection)
 */
DECLARE_EMLITE_TYPE(HTMLOptionsCollection, HTMLCollection);

/**
 * @brief Gets the `length` property. 
*/
unsigned long HTMLOptionsCollection_length(const HTMLOptionsCollection *self);

/**
 * @brief Sets the `length` property. 
*/
void HTMLOptionsCollection_set_length(HTMLOptionsCollection* self, unsigned long value);

/**
 * @brief Calls the `add` method. 
*/
jb_Undefined HTMLOptionsCollection_add0(HTMLOptionsCollection* self , jb_Any * element);

/**
 * @brief Calls the `add` method. 
*/
jb_Undefined HTMLOptionsCollection_add1(HTMLOptionsCollection* self , jb_Any * element, jb_Any * before);

/**
 * @brief Calls the `remove` method. 
*/
jb_Undefined HTMLOptionsCollection_remove(HTMLOptionsCollection* self , long index);

/**
 * @brief Gets the `selectedIndex` property. 
*/
long HTMLOptionsCollection_selectedIndex(const HTMLOptionsCollection *self);

/**
 * @brief Sets the `selectedIndex` property. 
*/
void HTMLOptionsCollection_set_selectedIndex(HTMLOptionsCollection* self, long value);

#ifdef __cplusplus
}
#endif
