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
 * @brief Interface HTMLOptionElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptionElement)
 */
DECLARE_EMLITE_TYPE(HTMLOptionElement, HTMLElement);

/**
 * @brief Creates a new `HTMLOptionElement` object. 
*/
HTMLOptionElement HTMLOptionElement_new();

/**
 * @brief Gets the `disabled` property. 
*/
bool HTMLOptionElement_disabled(const HTMLOptionElement *self);

/**
 * @brief Sets the `disabled` property. 
*/
void HTMLOptionElement_set_disabled(HTMLOptionElement* self, bool value);

/**
 * @brief Gets the `form` property. 
*/
HTMLFormElement HTMLOptionElement_form(const HTMLOptionElement *self);

/**
 * @brief Gets the `label` property. 
*/
jb_String HTMLOptionElement_label(const HTMLOptionElement *self);

/**
 * @brief Sets the `label` property. 
*/
void HTMLOptionElement_set_label(HTMLOptionElement* self, jb_String * value);

/**
 * @brief Gets the `defaultSelected` property. 
*/
bool HTMLOptionElement_defaultSelected(const HTMLOptionElement *self);

/**
 * @brief Sets the `defaultSelected` property. 
*/
void HTMLOptionElement_set_defaultSelected(HTMLOptionElement* self, bool value);

/**
 * @brief Gets the `selected` property. 
*/
bool HTMLOptionElement_selected(const HTMLOptionElement *self);

/**
 * @brief Sets the `selected` property. 
*/
void HTMLOptionElement_set_selected(HTMLOptionElement* self, bool value);

/**
 * @brief Gets the `value` property. 
*/
jb_String HTMLOptionElement_value(const HTMLOptionElement *self);

/**
 * @brief Sets the `value` property. 
*/
void HTMLOptionElement_set_value(HTMLOptionElement* self, jb_String * value);

/**
 * @brief Gets the `text` property. 
*/
jb_String HTMLOptionElement_text(const HTMLOptionElement *self);

/**
 * @brief Sets the `text` property. 
*/
void HTMLOptionElement_set_text(HTMLOptionElement* self, jb_String * value);

/**
 * @brief Gets the `index` property. 
*/
long HTMLOptionElement_index(const HTMLOptionElement *self);

#ifdef __cplusplus
}
#endif
