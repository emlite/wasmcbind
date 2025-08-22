#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLTitleElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTitleElement)
 */
DECLARE_EMLITE_TYPE(HTMLTitleElement, HTMLElement);

/**
 * @brief Creates a new `HTMLTitleElement` object. 
*/
HTMLTitleElement HTMLTitleElement_new();

/**
 * @brief Gets the `text` property. 
*/
jb_String HTMLTitleElement_text(const HTMLTitleElement *self);

/**
 * @brief Sets the `text` property. 
*/
void HTMLTitleElement_set_text(HTMLTitleElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
