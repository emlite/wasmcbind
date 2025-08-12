#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLOptGroupElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptGroupElement)
 */
DECLARE_EMLITE_TYPE(HTMLOptGroupElement, HTMLElement);

/**
 * @brief Creates a new `HTMLOptGroupElement` object. 
*/
HTMLOptGroupElement HTMLOptGroupElement_new();

/**
 * @brief Gets the `disabled` property. 
*/
bool HTMLOptGroupElement_disabled(const HTMLOptGroupElement *self);

/**
 * @brief Sets the `disabled` property. 
*/
void HTMLOptGroupElement_set_disabled(HTMLOptGroupElement* self, bool value);

/**
 * @brief Gets the `label` property. 
*/
jb_String HTMLOptGroupElement_label(const HTMLOptGroupElement *self);

/**
 * @brief Sets the `label` property. 
*/
void HTMLOptGroupElement_set_label(HTMLOptGroupElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
