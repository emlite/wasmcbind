#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLHtmlElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLHtmlElement)
 */
DECLARE_EMLITE_TYPE(HTMLHtmlElement, HTMLElement);

/**
 * @brief Creates a new `HTMLHtmlElement` object. 
*/
HTMLHtmlElement HTMLHtmlElement_new();

/**
 * @brief Gets the `version` property. 
*/
jb_String HTMLHtmlElement_version(const HTMLHtmlElement *self);

/**
 * @brief Sets the `version` property. 
*/
void HTMLHtmlElement_set_version(HTMLHtmlElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
