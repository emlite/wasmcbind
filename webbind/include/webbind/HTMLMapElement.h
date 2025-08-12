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
 * @brief Interface HTMLMapElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMapElement)
 */
DECLARE_EMLITE_TYPE(HTMLMapElement, HTMLElement);

/**
 * @brief Creates a new `HTMLMapElement` object. 
*/
HTMLMapElement HTMLMapElement_new();

/**
 * @brief Gets the `name` property. 
*/
jb_String HTMLMapElement_name(const HTMLMapElement *self);

/**
 * @brief Sets the `name` property. 
*/
void HTMLMapElement_set_name(HTMLMapElement* self, jb_String * value);

/**
 * @brief Gets the `areas` property. 
*/
HTMLCollection HTMLMapElement_areas(const HTMLMapElement *self);

#ifdef __cplusplus
}
#endif
