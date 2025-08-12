#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLPreElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLPreElement)
 */
DECLARE_EMLITE_TYPE(HTMLPreElement, HTMLElement);

/**
 * @brief Creates a new `HTMLPreElement` object. 
*/
HTMLPreElement HTMLPreElement_new();

/**
 * @brief Gets the `width` property. 
*/
long HTMLPreElement_width(const HTMLPreElement *self);

/**
 * @brief Sets the `width` property. 
*/
void HTMLPreElement_set_width(HTMLPreElement* self, long value);

#ifdef __cplusplus
}
#endif
