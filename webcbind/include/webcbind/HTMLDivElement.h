#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLDivElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDivElement)
 */
DECLARE_EMLITE_TYPE(HTMLDivElement, HTMLElement);

/**
 * @brief Creates a new `HTMLDivElement` object. 
*/
HTMLDivElement HTMLDivElement_new();

/**
 * @brief Gets the `align` property. 
*/
jb_String HTMLDivElement_align(const HTMLDivElement *self);

/**
 * @brief Sets the `align` property. 
*/
void HTMLDivElement_set_align(HTMLDivElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
