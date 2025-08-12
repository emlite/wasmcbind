#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLTimeElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTimeElement)
 */
DECLARE_EMLITE_TYPE(HTMLTimeElement, HTMLElement);

/**
 * @brief Creates a new `HTMLTimeElement` object. 
*/
HTMLTimeElement HTMLTimeElement_new();

/**
 * @brief Gets the `dateTime` property. 
*/
jb_String HTMLTimeElement_dateTime(const HTMLTimeElement *self);

/**
 * @brief Sets the `dateTime` property. 
*/
void HTMLTimeElement_set_dateTime(HTMLTimeElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
