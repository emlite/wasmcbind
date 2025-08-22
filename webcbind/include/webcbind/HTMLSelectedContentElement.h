#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLSelectedContentElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectedContentElement)
 */
DECLARE_EMLITE_TYPE(HTMLSelectedContentElement, HTMLElement);

/**
 * @brief Creates a new `HTMLSelectedContentElement` object. 
*/
HTMLSelectedContentElement HTMLSelectedContentElement_new();

#ifdef __cplusplus
}
#endif
