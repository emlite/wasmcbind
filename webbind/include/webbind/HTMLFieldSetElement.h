#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HTMLFormElement HTMLFormElement;
typedef struct HTMLCollection HTMLCollection;
typedef struct ValidityState ValidityState;


/**
 * @brief Interface HTMLFieldSetElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFieldSetElement)
 */
DECLARE_EMLITE_TYPE(HTMLFieldSetElement, HTMLElement);

/**
 * @brief Creates a new `HTMLFieldSetElement` object. 
*/
HTMLFieldSetElement HTMLFieldSetElement_new();

/**
 * @brief Gets the `disabled` property. 
*/
bool HTMLFieldSetElement_disabled(const HTMLFieldSetElement *self);

/**
 * @brief Sets the `disabled` property. 
*/
void HTMLFieldSetElement_set_disabled(HTMLFieldSetElement* self, bool value);

/**
 * @brief Gets the `form` property. 
*/
HTMLFormElement HTMLFieldSetElement_form(const HTMLFieldSetElement *self);

/**
 * @brief Gets the `name` property. 
*/
jb_String HTMLFieldSetElement_name(const HTMLFieldSetElement *self);

/**
 * @brief Sets the `name` property. 
*/
void HTMLFieldSetElement_set_name(HTMLFieldSetElement* self, jb_String * value);

/**
 * @brief Gets the `type` property. 
*/
jb_String HTMLFieldSetElement_type(const HTMLFieldSetElement *self);

/**
 * @brief Gets the `elements` property. 
*/
HTMLCollection HTMLFieldSetElement_elements(const HTMLFieldSetElement *self);

/**
 * @brief Gets the `willValidate` property. 
*/
bool HTMLFieldSetElement_willValidate(const HTMLFieldSetElement *self);

/**
 * @brief Gets the `validity` property. 
*/
ValidityState HTMLFieldSetElement_validity(const HTMLFieldSetElement *self);

/**
 * @brief Gets the `validationMessage` property. 
*/
jb_String HTMLFieldSetElement_validationMessage(const HTMLFieldSetElement *self);

/**
 * @brief Calls the `checkValidity` method. 
*/
bool HTMLFieldSetElement_checkValidity(HTMLFieldSetElement* self );

/**
 * @brief Calls the `reportValidity` method. 
*/
bool HTMLFieldSetElement_reportValidity(HTMLFieldSetElement* self );

/**
 * @brief Calls the `setCustomValidity` method. 
*/
jb_Undefined HTMLFieldSetElement_setCustomValidity(HTMLFieldSetElement* self , jb_String * error);

#ifdef __cplusplus
}
#endif
