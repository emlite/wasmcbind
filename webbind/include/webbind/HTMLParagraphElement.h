#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLParagraphElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLParagraphElement)
 */
DECLARE_EMLITE_TYPE(HTMLParagraphElement, HTMLElement);

/**
 * @brief Creates a new `HTMLParagraphElement` object. 
*/
HTMLParagraphElement HTMLParagraphElement_new();

/**
 * @brief Gets the `align` property. 
*/
jb_String HTMLParagraphElement_align(const HTMLParagraphElement *self);

/**
 * @brief Sets the `align` property. 
*/
void HTMLParagraphElement_set_align(HTMLParagraphElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
