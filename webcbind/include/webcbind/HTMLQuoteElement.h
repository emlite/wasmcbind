#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLQuoteElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLQuoteElement)
 */
DECLARE_EMLITE_TYPE(HTMLQuoteElement, HTMLElement);

/**
 * @brief Creates a new `HTMLQuoteElement` object. 
*/
HTMLQuoteElement HTMLQuoteElement_new();

/**
 * @brief Gets the `cite` property. 
*/
jb_String HTMLQuoteElement_cite(const HTMLQuoteElement *self);

/**
 * @brief Sets the `cite` property. 
*/
void HTMLQuoteElement_set_cite(HTMLQuoteElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
