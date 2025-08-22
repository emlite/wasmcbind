#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLDetailsElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDetailsElement)
 */
DECLARE_EMLITE_TYPE(HTMLDetailsElement, HTMLElement);

/**
 * @brief Creates a new `HTMLDetailsElement` object. 
*/
HTMLDetailsElement HTMLDetailsElement_new();

/**
 * @brief Gets the `name` property. 
*/
jb_String HTMLDetailsElement_name(const HTMLDetailsElement *self);

/**
 * @brief Sets the `name` property. 
*/
void HTMLDetailsElement_set_name(HTMLDetailsElement* self, jb_String * value);

/**
 * @brief Gets the `open` property. 
*/
bool HTMLDetailsElement_open(const HTMLDetailsElement *self);

/**
 * @brief Sets the `open` property. 
*/
void HTMLDetailsElement_set_open(HTMLDetailsElement* self, bool value);

#ifdef __cplusplus
}
#endif
