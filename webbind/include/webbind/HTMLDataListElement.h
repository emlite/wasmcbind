#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HTMLCollection HTMLCollection;


/**
 * @brief Interface HTMLDataListElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDataListElement)
 */
DECLARE_EMLITE_TYPE(HTMLDataListElement, HTMLElement);

/**
 * @brief Creates a new `HTMLDataListElement` object. 
*/
HTMLDataListElement HTMLDataListElement_new();

/**
 * @brief Gets the `options` property. 
*/
HTMLCollection HTMLDataListElement_options(const HTMLDataListElement *self);

#ifdef __cplusplus
}
#endif
