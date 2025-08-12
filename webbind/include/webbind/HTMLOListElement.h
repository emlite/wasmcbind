#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLOListElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOListElement)
 */
DECLARE_EMLITE_TYPE(HTMLOListElement, HTMLElement);

/**
 * @brief Creates a new `HTMLOListElement` object. 
*/
HTMLOListElement HTMLOListElement_new();

/**
 * @brief Gets the `reversed` property. 
*/
bool HTMLOListElement_reversed(const HTMLOListElement *self);

/**
 * @brief Sets the `reversed` property. 
*/
void HTMLOListElement_set_reversed(HTMLOListElement* self, bool value);

/**
 * @brief Gets the `start` property. 
*/
long HTMLOListElement_start(const HTMLOListElement *self);

/**
 * @brief Sets the `start` property. 
*/
void HTMLOListElement_set_start(HTMLOListElement* self, long value);

/**
 * @brief Gets the `type` property. 
*/
jb_String HTMLOListElement_type(const HTMLOListElement *self);

/**
 * @brief Sets the `type` property. 
*/
void HTMLOListElement_set_type(HTMLOListElement* self, jb_String * value);

/**
 * @brief Gets the `compact` property. 
*/
bool HTMLOListElement_compact(const HTMLOListElement *self);

/**
 * @brief Sets the `compact` property. 
*/
void HTMLOListElement_set_compact(HTMLOListElement* self, bool value);

#ifdef __cplusplus
}
#endif
