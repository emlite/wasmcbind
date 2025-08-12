#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLLIElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLIElement)
 */
DECLARE_EMLITE_TYPE(HTMLLIElement, HTMLElement);

/**
 * @brief Creates a new `HTMLLIElement` object. 
*/
HTMLLIElement HTMLLIElement_new();

/**
 * @brief Gets the `value` property. 
*/
long HTMLLIElement_value(const HTMLLIElement *self);

/**
 * @brief Sets the `value` property. 
*/
void HTMLLIElement_set_value(HTMLLIElement* self, long value);

/**
 * @brief Gets the `type` property. 
*/
jb_String HTMLLIElement_type(const HTMLLIElement *self);

/**
 * @brief Sets the `type` property. 
*/
void HTMLLIElement_set_type(HTMLLIElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
