#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HTMLFormElement HTMLFormElement;


/**
 * @brief Interface HTMLLabelElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLabelElement)
 */
DECLARE_EMLITE_TYPE(HTMLLabelElement, HTMLElement);

/**
 * @brief Creates a new `HTMLLabelElement` object. 
*/
HTMLLabelElement HTMLLabelElement_new();

/**
 * @brief Gets the `form` property. 
*/
HTMLFormElement HTMLLabelElement_form(const HTMLLabelElement *self);

/**
 * @brief Gets the `htmlFor` property. 
*/
jb_String HTMLLabelElement_htmlFor(const HTMLLabelElement *self);

/**
 * @brief Sets the `htmlFor` property. 
*/
void HTMLLabelElement_set_htmlFor(HTMLLabelElement* self, jb_String * value);

/**
 * @brief Gets the `control` property. 
*/
HTMLElement HTMLLabelElement_control(const HTMLLabelElement *self);

#ifdef __cplusplus
}
#endif
