#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLDirectoryElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDirectoryElement)
 */
DECLARE_EMLITE_TYPE(HTMLDirectoryElement, HTMLElement);

/**
 * @brief Creates a new `HTMLDirectoryElement` object. 
*/
HTMLDirectoryElement HTMLDirectoryElement_new();

/**
 * @brief Gets the `compact` property. 
*/
bool HTMLDirectoryElement_compact(const HTMLDirectoryElement *self);

/**
 * @brief Sets the `compact` property. 
*/
void HTMLDirectoryElement_set_compact(HTMLDirectoryElement* self, bool value);

#ifdef __cplusplus
}
#endif
