#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLBaseElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLBaseElement)
 */
DECLARE_EMLITE_TYPE(HTMLBaseElement, HTMLElement);

/**
 * @brief Creates a new `HTMLBaseElement` object. 
*/
HTMLBaseElement HTMLBaseElement_new();

/**
 * @brief Gets the `href` property. 
*/
jb_String HTMLBaseElement_href(const HTMLBaseElement *self);

/**
 * @brief Sets the `href` property. 
*/
void HTMLBaseElement_set_href(HTMLBaseElement* self, jb_String * value);

/**
 * @brief Gets the `target` property. 
*/
jb_String HTMLBaseElement_target(const HTMLBaseElement *self);

/**
 * @brief Sets the `target` property. 
*/
void HTMLBaseElement_set_target(HTMLBaseElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
