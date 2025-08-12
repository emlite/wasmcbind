#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLBRElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLBRElement)
 */
DECLARE_EMLITE_TYPE(HTMLBRElement, HTMLElement);

/**
 * @brief Creates a new `HTMLBRElement` object. 
*/
HTMLBRElement HTMLBRElement_new();

/**
 * @brief Gets the `clear` property. 
*/
jb_String HTMLBRElement_clear(const HTMLBRElement *self);

/**
 * @brief Sets the `clear` property. 
*/
void HTMLBRElement_set_clear(HTMLBRElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
