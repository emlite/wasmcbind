#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Element Element;
typedef struct HTMLFormElement HTMLFormElement;
typedef struct ValidityState ValidityState;
typedef struct NodeList NodeList;


/**
 * @brief Interface HTMLButtonElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement)
 */
DECLARE_EMLITE_TYPE(HTMLButtonElement, HTMLElement);

/**
 * @brief Creates a new `HTMLButtonElement` object. 
*/
HTMLButtonElement HTMLButtonElement_new();

/**
 * @brief Gets the `command` property. 
*/
jb_String HTMLButtonElement_command(const HTMLButtonElement *self);

/**
 * @brief Sets the `command` property. 
*/
void HTMLButtonElement_set_command(HTMLButtonElement* self, jb_String * value);

/**
 * @brief Gets the `commandForElement` property. 
*/
Element HTMLButtonElement_commandForElement(const HTMLButtonElement *self);

/**
 * @brief Sets the `commandForElement` property. 
*/
void HTMLButtonElement_set_commandForElement(HTMLButtonElement* self, Element * value);

/**
 * @brief Gets the `disabled` property. 
*/
bool HTMLButtonElement_disabled(const HTMLButtonElement *self);

/**
 * @brief Sets the `disabled` property. 
*/
void HTMLButtonElement_set_disabled(HTMLButtonElement* self, bool value);

/**
 * @brief Gets the `form` property. 
*/
HTMLFormElement HTMLButtonElement_form(const HTMLButtonElement *self);

/**
 * @brief Gets the `formAction` property. 
*/
jb_String HTMLButtonElement_formAction(const HTMLButtonElement *self);

/**
 * @brief Sets the `formAction` property. 
*/
void HTMLButtonElement_set_formAction(HTMLButtonElement* self, jb_String * value);

/**
 * @brief Gets the `formEnctype` property. 
*/
jb_String HTMLButtonElement_formEnctype(const HTMLButtonElement *self);

/**
 * @brief Sets the `formEnctype` property. 
*/
void HTMLButtonElement_set_formEnctype(HTMLButtonElement* self, jb_String * value);

/**
 * @brief Gets the `formMethod` property. 
*/
jb_String HTMLButtonElement_formMethod(const HTMLButtonElement *self);

/**
 * @brief Sets the `formMethod` property. 
*/
void HTMLButtonElement_set_formMethod(HTMLButtonElement* self, jb_String * value);

/**
 * @brief Gets the `formNoValidate` property. 
*/
bool HTMLButtonElement_formNoValidate(const HTMLButtonElement *self);

/**
 * @brief Sets the `formNoValidate` property. 
*/
void HTMLButtonElement_set_formNoValidate(HTMLButtonElement* self, bool value);

/**
 * @brief Gets the `formTarget` property. 
*/
jb_String HTMLButtonElement_formTarget(const HTMLButtonElement *self);

/**
 * @brief Sets the `formTarget` property. 
*/
void HTMLButtonElement_set_formTarget(HTMLButtonElement* self, jb_String * value);

/**
 * @brief Gets the `name` property. 
*/
jb_String HTMLButtonElement_name(const HTMLButtonElement *self);

/**
 * @brief Sets the `name` property. 
*/
void HTMLButtonElement_set_name(HTMLButtonElement* self, jb_String * value);

/**
 * @brief Gets the `type` property. 
*/
jb_String HTMLButtonElement_type(const HTMLButtonElement *self);

/**
 * @brief Sets the `type` property. 
*/
void HTMLButtonElement_set_type(HTMLButtonElement* self, jb_String * value);

/**
 * @brief Gets the `value` property. 
*/
jb_String HTMLButtonElement_value(const HTMLButtonElement *self);

/**
 * @brief Sets the `value` property. 
*/
void HTMLButtonElement_set_value(HTMLButtonElement* self, jb_String * value);

/**
 * @brief Gets the `willValidate` property. 
*/
bool HTMLButtonElement_willValidate(const HTMLButtonElement *self);

/**
 * @brief Gets the `validity` property. 
*/
ValidityState HTMLButtonElement_validity(const HTMLButtonElement *self);

/**
 * @brief Gets the `validationMessage` property. 
*/
jb_String HTMLButtonElement_validationMessage(const HTMLButtonElement *self);

/**
 * @brief Calls the `checkValidity` method. 
*/
bool HTMLButtonElement_checkValidity(HTMLButtonElement* self );

/**
 * @brief Calls the `reportValidity` method. 
*/
bool HTMLButtonElement_reportValidity(HTMLButtonElement* self );

/**
 * @brief Calls the `setCustomValidity` method. 
*/
jb_Undefined HTMLButtonElement_setCustomValidity(HTMLButtonElement* self , jb_String * error);

/**
 * @brief Gets the `labels` property. 
*/
NodeList HTMLButtonElement_labels(const HTMLButtonElement *self);

/**
 * @brief Gets the `popoverTargetElement` property. 
*/
Element HTMLButtonElement_popoverTargetElement(const HTMLButtonElement *self);

/**
 * @brief Sets the `popoverTargetElement` property. 
*/
void HTMLButtonElement_set_popoverTargetElement(HTMLButtonElement* self, Element * value);

/**
 * @brief Gets the `popoverTargetAction` property. 
*/
jb_String HTMLButtonElement_popoverTargetAction(const HTMLButtonElement *self);

/**
 * @brief Sets the `popoverTargetAction` property. 
*/
void HTMLButtonElement_set_popoverTargetAction(HTMLButtonElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
