#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMTokenList DOMTokenList;
typedef struct HTMLFormElement HTMLFormElement;
typedef struct ValidityState ValidityState;
typedef struct NodeList NodeList;


/**
 * @brief Interface HTMLOutputElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOutputElement)
 */
DECLARE_EMLITE_TYPE(HTMLOutputElement, HTMLElement);

/**
 * @brief Creates a new `HTMLOutputElement` object. 
*/
HTMLOutputElement HTMLOutputElement_new();

/**
 * @brief Gets the `htmlFor` property. 
*/
DOMTokenList HTMLOutputElement_htmlFor(const HTMLOutputElement *self);

/**
 * @brief Gets the `form` property. 
*/
HTMLFormElement HTMLOutputElement_form(const HTMLOutputElement *self);

/**
 * @brief Gets the `name` property. 
*/
jb_String HTMLOutputElement_name(const HTMLOutputElement *self);

/**
 * @brief Sets the `name` property. 
*/
void HTMLOutputElement_set_name(HTMLOutputElement* self, jb_String * value);

/**
 * @brief Gets the `type` property. 
*/
jb_String HTMLOutputElement_type(const HTMLOutputElement *self);

/**
 * @brief Gets the `defaultValue` property. 
*/
jb_String HTMLOutputElement_defaultValue(const HTMLOutputElement *self);

/**
 * @brief Sets the `defaultValue` property. 
*/
void HTMLOutputElement_set_defaultValue(HTMLOutputElement* self, jb_String * value);

/**
 * @brief Gets the `value` property. 
*/
jb_String HTMLOutputElement_value(const HTMLOutputElement *self);

/**
 * @brief Sets the `value` property. 
*/
void HTMLOutputElement_set_value(HTMLOutputElement* self, jb_String * value);

/**
 * @brief Gets the `willValidate` property. 
*/
bool HTMLOutputElement_willValidate(const HTMLOutputElement *self);

/**
 * @brief Gets the `validity` property. 
*/
ValidityState HTMLOutputElement_validity(const HTMLOutputElement *self);

/**
 * @brief Gets the `validationMessage` property. 
*/
jb_String HTMLOutputElement_validationMessage(const HTMLOutputElement *self);

/**
 * @brief Calls the `checkValidity` method. 
*/
bool HTMLOutputElement_checkValidity(HTMLOutputElement* self );

/**
 * @brief Calls the `reportValidity` method. 
*/
bool HTMLOutputElement_reportValidity(HTMLOutputElement* self );

/**
 * @brief Calls the `setCustomValidity` method. 
*/
jb_Undefined HTMLOutputElement_setCustomValidity(HTMLOutputElement* self , jb_String * error);

/**
 * @brief Gets the `labels` property. 
*/
NodeList HTMLOutputElement_labels(const HTMLOutputElement *self);

#ifdef __cplusplus
}
#endif
