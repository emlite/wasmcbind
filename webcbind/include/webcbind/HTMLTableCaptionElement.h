#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLTableCaptionElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableCaptionElement)
 */
DECLARE_EMLITE_TYPE(HTMLTableCaptionElement, HTMLElement);

/**
 * @brief Creates a new `HTMLTableCaptionElement` object. 
*/
HTMLTableCaptionElement HTMLTableCaptionElement_new();

/**
 * @brief Gets the `align` property. 
*/
jb_String HTMLTableCaptionElement_align(const HTMLTableCaptionElement *self);

/**
 * @brief Sets the `align` property. 
*/
void HTMLTableCaptionElement_set_align(HTMLTableCaptionElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
