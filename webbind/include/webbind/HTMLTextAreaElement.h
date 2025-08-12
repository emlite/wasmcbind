#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HTMLFormElement HTMLFormElement;
typedef struct ValidityState ValidityState;
typedef struct NodeList NodeList;


/**
 * @brief Interface HTMLTextAreaElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement)
 */
DECLARE_EMLITE_TYPE(HTMLTextAreaElement, HTMLElement);

/**
 * @brief Creates a new `HTMLTextAreaElement` object. 
*/
HTMLTextAreaElement HTMLTextAreaElement_new();

/**
 * @brief Gets the `autocomplete` property. 
*/
jb_String HTMLTextAreaElement_autocomplete(const HTMLTextAreaElement *self);

/**
 * @brief Sets the `autocomplete` property. 
*/
void HTMLTextAreaElement_set_autocomplete(HTMLTextAreaElement* self, jb_String * value);

/**
 * @brief Gets the `cols` property. 
*/
unsigned long HTMLTextAreaElement_cols(const HTMLTextAreaElement *self);

/**
 * @brief Sets the `cols` property. 
*/
void HTMLTextAreaElement_set_cols(HTMLTextAreaElement* self, unsigned long value);

/**
 * @brief Gets the `dirName` property. 
*/
jb_String HTMLTextAreaElement_dirName(const HTMLTextAreaElement *self);

/**
 * @brief Sets the `dirName` property. 
*/
void HTMLTextAreaElement_set_dirName(HTMLTextAreaElement* self, jb_String * value);

/**
 * @brief Gets the `disabled` property. 
*/
bool HTMLTextAreaElement_disabled(const HTMLTextAreaElement *self);

/**
 * @brief Sets the `disabled` property. 
*/
void HTMLTextAreaElement_set_disabled(HTMLTextAreaElement* self, bool value);

/**
 * @brief Gets the `form` property. 
*/
HTMLFormElement HTMLTextAreaElement_form(const HTMLTextAreaElement *self);

/**
 * @brief Gets the `maxLength` property. 
*/
long HTMLTextAreaElement_maxLength(const HTMLTextAreaElement *self);

/**
 * @brief Sets the `maxLength` property. 
*/
void HTMLTextAreaElement_set_maxLength(HTMLTextAreaElement* self, long value);

/**
 * @brief Gets the `minLength` property. 
*/
long HTMLTextAreaElement_minLength(const HTMLTextAreaElement *self);

/**
 * @brief Sets the `minLength` property. 
*/
void HTMLTextAreaElement_set_minLength(HTMLTextAreaElement* self, long value);

/**
 * @brief Gets the `name` property. 
*/
jb_String HTMLTextAreaElement_name(const HTMLTextAreaElement *self);

/**
 * @brief Sets the `name` property. 
*/
void HTMLTextAreaElement_set_name(HTMLTextAreaElement* self, jb_String * value);

/**
 * @brief Gets the `placeholder` property. 
*/
jb_String HTMLTextAreaElement_placeholder(const HTMLTextAreaElement *self);

/**
 * @brief Sets the `placeholder` property. 
*/
void HTMLTextAreaElement_set_placeholder(HTMLTextAreaElement* self, jb_String * value);

/**
 * @brief Gets the `readOnly` property. 
*/
bool HTMLTextAreaElement_readOnly(const HTMLTextAreaElement *self);

/**
 * @brief Sets the `readOnly` property. 
*/
void HTMLTextAreaElement_set_readOnly(HTMLTextAreaElement* self, bool value);

/**
 * @brief Gets the `required` property. 
*/
bool HTMLTextAreaElement_required(const HTMLTextAreaElement *self);

/**
 * @brief Sets the `required` property. 
*/
void HTMLTextAreaElement_set_required(HTMLTextAreaElement* self, bool value);

/**
 * @brief Gets the `rows` property. 
*/
unsigned long HTMLTextAreaElement_rows(const HTMLTextAreaElement *self);

/**
 * @brief Sets the `rows` property. 
*/
void HTMLTextAreaElement_set_rows(HTMLTextAreaElement* self, unsigned long value);

/**
 * @brief Gets the `wrap` property. 
*/
jb_String HTMLTextAreaElement_wrap(const HTMLTextAreaElement *self);

/**
 * @brief Sets the `wrap` property. 
*/
void HTMLTextAreaElement_set_wrap(HTMLTextAreaElement* self, jb_String * value);

/**
 * @brief Gets the `type` property. 
*/
jb_String HTMLTextAreaElement_type(const HTMLTextAreaElement *self);

/**
 * @brief Gets the `defaultValue` property. 
*/
jb_String HTMLTextAreaElement_defaultValue(const HTMLTextAreaElement *self);

/**
 * @brief Sets the `defaultValue` property. 
*/
void HTMLTextAreaElement_set_defaultValue(HTMLTextAreaElement* self, jb_String * value);

/**
 * @brief Gets the `value` property. 
*/
jb_String HTMLTextAreaElement_value(const HTMLTextAreaElement *self);

/**
 * @brief Sets the `value` property. 
*/
void HTMLTextAreaElement_set_value(HTMLTextAreaElement* self, jb_String * value);

/**
 * @brief Gets the `textLength` property. 
*/
unsigned long HTMLTextAreaElement_textLength(const HTMLTextAreaElement *self);

/**
 * @brief Gets the `willValidate` property. 
*/
bool HTMLTextAreaElement_willValidate(const HTMLTextAreaElement *self);

/**
 * @brief Gets the `validity` property. 
*/
ValidityState HTMLTextAreaElement_validity(const HTMLTextAreaElement *self);

/**
 * @brief Gets the `validationMessage` property. 
*/
jb_String HTMLTextAreaElement_validationMessage(const HTMLTextAreaElement *self);

/**
 * @brief Calls the `checkValidity` method. 
*/
bool HTMLTextAreaElement_checkValidity(HTMLTextAreaElement* self );

/**
 * @brief Calls the `reportValidity` method. 
*/
bool HTMLTextAreaElement_reportValidity(HTMLTextAreaElement* self );

/**
 * @brief Calls the `setCustomValidity` method. 
*/
jb_Undefined HTMLTextAreaElement_setCustomValidity(HTMLTextAreaElement* self , jb_String * error);

/**
 * @brief Gets the `labels` property. 
*/
NodeList HTMLTextAreaElement_labels(const HTMLTextAreaElement *self);

/**
 * @brief Calls the `select` method. 
*/
jb_Undefined HTMLTextAreaElement_select(HTMLTextAreaElement* self );

/**
 * @brief Gets the `selectionStart` property. 
*/
unsigned long HTMLTextAreaElement_selectionStart(const HTMLTextAreaElement *self);

/**
 * @brief Sets the `selectionStart` property. 
*/
void HTMLTextAreaElement_set_selectionStart(HTMLTextAreaElement* self, unsigned long value);

/**
 * @brief Gets the `selectionEnd` property. 
*/
unsigned long HTMLTextAreaElement_selectionEnd(const HTMLTextAreaElement *self);

/**
 * @brief Sets the `selectionEnd` property. 
*/
void HTMLTextAreaElement_set_selectionEnd(HTMLTextAreaElement* self, unsigned long value);

/**
 * @brief Gets the `selectionDirection` property. 
*/
jb_String HTMLTextAreaElement_selectionDirection(const HTMLTextAreaElement *self);

/**
 * @brief Sets the `selectionDirection` property. 
*/
void HTMLTextAreaElement_set_selectionDirection(HTMLTextAreaElement* self, jb_String * value);

/**
 * @brief Calls the `setRangeText` method. 
*/
jb_Undefined HTMLTextAreaElement_setRangeText0(HTMLTextAreaElement* self , jb_String * replacement, unsigned long start, unsigned long end);

/**
 * @brief Calls the `setRangeText` method. 
*/
jb_Undefined HTMLTextAreaElement_setRangeText1(HTMLTextAreaElement* self , jb_String * replacement, unsigned long start, unsigned long end, SelectionMode * selectionMode);

/**
 * @brief Calls the `setSelectionRange` method. 
*/
jb_Undefined HTMLTextAreaElement_setSelectionRange0(HTMLTextAreaElement* self , unsigned long start, unsigned long end);

/**
 * @brief Calls the `setSelectionRange` method. 
*/
jb_Undefined HTMLTextAreaElement_setSelectionRange1(HTMLTextAreaElement* self , unsigned long start, unsigned long end, jb_String * direction);

#ifdef __cplusplus
}
#endif
