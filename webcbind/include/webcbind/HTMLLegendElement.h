#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HTMLFormElement HTMLFormElement;


/**
 * @brief Interface HTMLLegendElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLegendElement)
 */
DECLARE_EMLITE_TYPE(HTMLLegendElement, HTMLElement);

/**
 * @brief Creates a new `HTMLLegendElement` object. 
*/
HTMLLegendElement HTMLLegendElement_new();

/**
 * @brief Gets the `form` property. 
*/
HTMLFormElement HTMLLegendElement_form(const HTMLLegendElement *self);

/**
 * @brief Gets the `align` property. 
*/
jb_String HTMLLegendElement_align(const HTMLLegendElement *self);

/**
 * @brief Sets the `align` property. 
*/
void HTMLLegendElement_set_align(HTMLLegendElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
