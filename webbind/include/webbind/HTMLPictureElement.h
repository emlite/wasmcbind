#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLPictureElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLPictureElement)
 */
DECLARE_EMLITE_TYPE(HTMLPictureElement, HTMLElement);

/**
 * @brief Creates a new `HTMLPictureElement` object. 
*/
HTMLPictureElement HTMLPictureElement_new();

#ifdef __cplusplus
}
#endif
