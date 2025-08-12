#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLDataElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDataElement)
 */
DECLARE_EMLITE_TYPE(HTMLDataElement, HTMLElement);

/**
 * @brief Creates a new `HTMLDataElement` object. 
*/
HTMLDataElement HTMLDataElement_new();

/**
 * @brief Gets the `value` property. 
*/
jb_String HTMLDataElement_value(const HTMLDataElement *self);

/**
 * @brief Sets the `value` property. 
*/
void HTMLDataElement_set_value(HTMLDataElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
