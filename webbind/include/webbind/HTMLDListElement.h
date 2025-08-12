#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLDListElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDListElement)
 */
DECLARE_EMLITE_TYPE(HTMLDListElement, HTMLElement);

/**
 * @brief Creates a new `HTMLDListElement` object. 
*/
HTMLDListElement HTMLDListElement_new();

/**
 * @brief Gets the `compact` property. 
*/
bool HTMLDListElement_compact(const HTMLDListElement *self);

/**
 * @brief Sets the `compact` property. 
*/
void HTMLDListElement_set_compact(HTMLDListElement* self, bool value);

#ifdef __cplusplus
}
#endif
