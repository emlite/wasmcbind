#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HTMLFormElement HTMLFormElement;
typedef struct HTMLOptionsCollection HTMLOptionsCollection;
typedef struct HTMLOptionElement HTMLOptionElement;
typedef struct HTMLCollection HTMLCollection;
typedef struct ValidityState ValidityState;
typedef struct NodeList NodeList;


/**
 * @brief Interface HTMLSelectElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectElement)
 */
DECLARE_EMLITE_TYPE(HTMLSelectElement, HTMLElement);

/**
 * @brief Creates a new `HTMLSelectElement` object. 
*/
HTMLSelectElement HTMLSelectElement_new();

/**
 * @brief Gets the `autocomplete` property. 
*/
jb_String HTMLSelectElement_autocomplete(const HTMLSelectElement *self);

/**
 * @brief Sets the `autocomplete` property. 
*/
void HTMLSelectElement_set_autocomplete(HTMLSelectElement* self, jb_String * value);

/**
 * @brief Gets the `disabled` property. 
*/
bool HTMLSelectElement_disabled(const HTMLSelectElement *self);

/**
 * @brief Sets the `disabled` property. 
*/
void HTMLSelectElement_set_disabled(HTMLSelectElement* self, bool value);

/**
 * @brief Gets the `form` property. 
*/
HTMLFormElement HTMLSelectElement_form(const HTMLSelectElement *self);

/**
 * @brief Gets the `multiple` property. 
*/
bool HTMLSelectElement_multiple(const HTMLSelectElement *self);

/**
 * @brief Sets the `multiple` property. 
*/
void HTMLSelectElement_set_multiple(HTMLSelectElement* self, bool value);

/**
 * @brief Gets the `name` property. 
*/
jb_String HTMLSelectElement_name(const HTMLSelectElement *self);

/**
 * @brief Sets the `name` property. 
*/
void HTMLSelectElement_set_name(HTMLSelectElement* self, jb_String * value);

/**
 * @brief Gets the `required` property. 
*/
bool HTMLSelectElement_required(const HTMLSelectElement *self);

/**
 * @brief Sets the `required` property. 
*/
void HTMLSelectElement_set_required(HTMLSelectElement* self, bool value);

/**
 * @brief Gets the `size` property. 
*/
unsigned long HTMLSelectElement_size(const HTMLSelectElement *self);

/**
 * @brief Sets the `size` property. 
*/
void HTMLSelectElement_set_size(HTMLSelectElement* self, unsigned long value);

/**
 * @brief Gets the `type` property. 
*/
jb_String HTMLSelectElement_type(const HTMLSelectElement *self);

/**
 * @brief Gets the `options` property. 
*/
HTMLOptionsCollection HTMLSelectElement_options(const HTMLSelectElement *self);

/**
 * @brief Gets the `length` property. 
*/
unsigned long HTMLSelectElement_length(const HTMLSelectElement *self);

/**
 * @brief Sets the `length` property. 
*/
void HTMLSelectElement_set_length(HTMLSelectElement* self, unsigned long value);

/**
 * @brief Calls the `item` method. 
*/
HTMLOptionElement HTMLSelectElement_item(HTMLSelectElement* self , unsigned long index);

/**
 * @brief Calls the `namedItem` method. 
*/
HTMLOptionElement HTMLSelectElement_namedItem(HTMLSelectElement* self , jb_String * name);

/**
 * @brief Calls the `add` method. 
*/
jb_Undefined HTMLSelectElement_add0(HTMLSelectElement* self , jb_Any * element);

/**
 * @brief Calls the `add` method. 
*/
jb_Undefined HTMLSelectElement_add1(HTMLSelectElement* self , jb_Any * element, jb_Any * before);

/**
 * @brief Calls the `remove` method. 
*/
jb_Undefined HTMLSelectElement_remove(HTMLSelectElement* self , long index);

/**
 * @brief Gets the `selectedOptions` property. 
*/
HTMLCollection HTMLSelectElement_selectedOptions(const HTMLSelectElement *self);

/**
 * @brief Gets the `selectedIndex` property. 
*/
long HTMLSelectElement_selectedIndex(const HTMLSelectElement *self);

/**
 * @brief Sets the `selectedIndex` property. 
*/
void HTMLSelectElement_set_selectedIndex(HTMLSelectElement* self, long value);

/**
 * @brief Gets the `value` property. 
*/
jb_String HTMLSelectElement_value(const HTMLSelectElement *self);

/**
 * @brief Sets the `value` property. 
*/
void HTMLSelectElement_set_value(HTMLSelectElement* self, jb_String * value);

/**
 * @brief Gets the `willValidate` property. 
*/
bool HTMLSelectElement_willValidate(const HTMLSelectElement *self);

/**
 * @brief Gets the `validity` property. 
*/
ValidityState HTMLSelectElement_validity(const HTMLSelectElement *self);

/**
 * @brief Gets the `validationMessage` property. 
*/
jb_String HTMLSelectElement_validationMessage(const HTMLSelectElement *self);

/**
 * @brief Calls the `checkValidity` method. 
*/
bool HTMLSelectElement_checkValidity(HTMLSelectElement* self );

/**
 * @brief Calls the `reportValidity` method. 
*/
bool HTMLSelectElement_reportValidity(HTMLSelectElement* self );

/**
 * @brief Calls the `setCustomValidity` method. 
*/
jb_Undefined HTMLSelectElement_setCustomValidity(HTMLSelectElement* self , jb_String * error);

/**
 * @brief Calls the `showPicker` method. 
*/
jb_Undefined HTMLSelectElement_showPicker(HTMLSelectElement* self );

/**
 * @brief Gets the `labels` property. 
*/
NodeList HTMLSelectElement_labels(const HTMLSelectElement *self);

#ifdef __cplusplus
}
#endif
