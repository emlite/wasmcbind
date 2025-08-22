#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLSpanElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSpanElement)
 */
DECLARE_EMLITE_TYPE(HTMLSpanElement, HTMLElement);

/**
 * @brief Creates a new `HTMLSpanElement` object. 
*/
HTMLSpanElement HTMLSpanElement_new();

#ifdef __cplusplus
}
#endif
