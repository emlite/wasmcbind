#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLModElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLModElement)
 */
DECLARE_EMLITE_TYPE(HTMLModElement, HTMLElement);

/**
 * @brief Creates a new `HTMLModElement` object. 
*/
HTMLModElement HTMLModElement_new();

/**
 * @brief Gets the `cite` property. 
*/
jb_String HTMLModElement_cite(const HTMLModElement *self);

/**
 * @brief Sets the `cite` property. 
*/
void HTMLModElement_set_cite(HTMLModElement* self, jb_String * value);

/**
 * @brief Gets the `dateTime` property. 
*/
jb_String HTMLModElement_dateTime(const HTMLModElement *self);

/**
 * @brief Sets the `dateTime` property. 
*/
void HTMLModElement_set_dateTime(HTMLModElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
