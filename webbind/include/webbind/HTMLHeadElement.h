#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLHeadElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLHeadElement)
 */
DECLARE_EMLITE_TYPE(HTMLHeadElement, HTMLElement);

/**
 * @brief Creates a new `HTMLHeadElement` object. 
*/
HTMLHeadElement HTMLHeadElement_new();

#ifdef __cplusplus
}
#endif
