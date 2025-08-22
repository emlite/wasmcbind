#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLHeadingElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLHeadingElement)
 */
DECLARE_EMLITE_TYPE(HTMLHeadingElement, HTMLElement);

/**
 * @brief Creates a new `HTMLHeadingElement` object. 
*/
HTMLHeadingElement HTMLHeadingElement_new();

/**
 * @brief Gets the `align` property. 
*/
jb_String HTMLHeadingElement_align(const HTMLHeadingElement *self);

/**
 * @brief Sets the `align` property. 
*/
void HTMLHeadingElement_set_align(HTMLHeadingElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
