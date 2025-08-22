#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLUListElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLUListElement)
 */
DECLARE_EMLITE_TYPE(HTMLUListElement, HTMLElement);

/**
 * @brief Creates a new `HTMLUListElement` object. 
*/
HTMLUListElement HTMLUListElement_new();

/**
 * @brief Gets the `compact` property. 
*/
bool HTMLUListElement_compact(const HTMLUListElement *self);

/**
 * @brief Sets the `compact` property. 
*/
void HTMLUListElement_set_compact(HTMLUListElement* self, bool value);

/**
 * @brief Gets the `type` property. 
*/
jb_String HTMLUListElement_type(const HTMLUListElement *self);

/**
 * @brief Sets the `type` property. 
*/
void HTMLUListElement_set_type(HTMLUListElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
