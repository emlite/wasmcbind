#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLMenuElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMenuElement)
 */
DECLARE_EMLITE_TYPE(HTMLMenuElement, HTMLElement);

/**
 * @brief Creates a new `HTMLMenuElement` object. 
*/
HTMLMenuElement HTMLMenuElement_new();

/**
 * @brief Gets the `compact` property. 
*/
bool HTMLMenuElement_compact(const HTMLMenuElement *self);

/**
 * @brief Sets the `compact` property. 
*/
void HTMLMenuElement_set_compact(HTMLMenuElement* self, bool value);

#ifdef __cplusplus
}
#endif
