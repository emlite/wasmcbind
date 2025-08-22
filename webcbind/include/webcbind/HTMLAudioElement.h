#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "HTMLMediaElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLAudioElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAudioElement)
 */
DECLARE_EMLITE_TYPE(HTMLAudioElement, HTMLMediaElement);

/**
 * @brief Creates a new `HTMLAudioElement` object. 
*/
HTMLAudioElement HTMLAudioElement_new();

#ifdef __cplusplus
}
#endif
