#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HTMLFormElement HTMLFormElement;
typedef struct FileList FileList;
typedef struct HTMLDataListElement HTMLDataListElement;
typedef struct ValidityState ValidityState;
typedef struct NodeList NodeList;
typedef struct FileSystemEntry FileSystemEntry;
typedef struct Element Element;


/**
 * @brief Interface HTMLInputElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement)
 */
DECLARE_EMLITE_TYPE(HTMLInputElement, HTMLElement);

/**
 * @brief Creates a new `HTMLInputElement` object. 
*/
HTMLInputElement HTMLInputElement_new();

/**
 * @brief Gets the `accept` property. 
*/
jb_String HTMLInputElement_accept(const HTMLInputElement *self);

/**
 * @brief Sets the `accept` property. 
*/
void HTMLInputElement_set_accept(HTMLInputElement* self, jb_String * value);

/**
 * @brief Gets the `alpha` property. 
*/
bool HTMLInputElement_alpha(const HTMLInputElement *self);

/**
 * @brief Sets the `alpha` property. 
*/
void HTMLInputElement_set_alpha(HTMLInputElement* self, bool value);

/**
 * @brief Gets the `alt` property. 
*/
jb_String HTMLInputElement_alt(const HTMLInputElement *self);

/**
 * @brief Sets the `alt` property. 
*/
void HTMLInputElement_set_alt(HTMLInputElement* self, jb_String * value);

/**
 * @brief Gets the `autocomplete` property. 
*/
jb_String HTMLInputElement_autocomplete(const HTMLInputElement *self);

/**
 * @brief Sets the `autocomplete` property. 
*/
void HTMLInputElement_set_autocomplete(HTMLInputElement* self, jb_String * value);

/**
 * @brief Gets the `defaultChecked` property. 
*/
bool HTMLInputElement_defaultChecked(const HTMLInputElement *self);

/**
 * @brief Sets the `defaultChecked` property. 
*/
void HTMLInputElement_set_defaultChecked(HTMLInputElement* self, bool value);

/**
 * @brief Gets the `checked` property. 
*/
bool HTMLInputElement_checked(const HTMLInputElement *self);

/**
 * @brief Sets the `checked` property. 
*/
void HTMLInputElement_set_checked(HTMLInputElement* self, bool value);

/**
 * @brief Gets the `colorSpace` property. 
*/
jb_String HTMLInputElement_colorSpace(const HTMLInputElement *self);

/**
 * @brief Sets the `colorSpace` property. 
*/
void HTMLInputElement_set_colorSpace(HTMLInputElement* self, jb_String * value);

/**
 * @brief Gets the `dirName` property. 
*/
jb_String HTMLInputElement_dirName(const HTMLInputElement *self);

/**
 * @brief Sets the `dirName` property. 
*/
void HTMLInputElement_set_dirName(HTMLInputElement* self, jb_String * value);

/**
 * @brief Gets the `disabled` property. 
*/
bool HTMLInputElement_disabled(const HTMLInputElement *self);

/**
 * @brief Sets the `disabled` property. 
*/
void HTMLInputElement_set_disabled(HTMLInputElement* self, bool value);

/**
 * @brief Gets the `form` property. 
*/
HTMLFormElement HTMLInputElement_form(const HTMLInputElement *self);

/**
 * @brief Gets the `files` property. 
*/
FileList HTMLInputElement_files(const HTMLInputElement *self);

/**
 * @brief Sets the `files` property. 
*/
void HTMLInputElement_set_files(HTMLInputElement* self, FileList * value);

/**
 * @brief Gets the `formAction` property. 
*/
jb_String HTMLInputElement_formAction(const HTMLInputElement *self);

/**
 * @brief Sets the `formAction` property. 
*/
void HTMLInputElement_set_formAction(HTMLInputElement* self, jb_String * value);

/**
 * @brief Gets the `formEnctype` property. 
*/
jb_String HTMLInputElement_formEnctype(const HTMLInputElement *self);

/**
 * @brief Sets the `formEnctype` property. 
*/
void HTMLInputElement_set_formEnctype(HTMLInputElement* self, jb_String * value);

/**
 * @brief Gets the `formMethod` property. 
*/
jb_String HTMLInputElement_formMethod(const HTMLInputElement *self);

/**
 * @brief Sets the `formMethod` property. 
*/
void HTMLInputElement_set_formMethod(HTMLInputElement* self, jb_String * value);

/**
 * @brief Gets the `formNoValidate` property. 
*/
bool HTMLInputElement_formNoValidate(const HTMLInputElement *self);

/**
 * @brief Sets the `formNoValidate` property. 
*/
void HTMLInputElement_set_formNoValidate(HTMLInputElement* self, bool value);

/**
 * @brief Gets the `formTarget` property. 
*/
jb_String HTMLInputElement_formTarget(const HTMLInputElement *self);

/**
 * @brief Sets the `formTarget` property. 
*/
void HTMLInputElement_set_formTarget(HTMLInputElement* self, jb_String * value);

/**
 * @brief Gets the `height` property. 
*/
unsigned long HTMLInputElement_height(const HTMLInputElement *self);

/**
 * @brief Sets the `height` property. 
*/
void HTMLInputElement_set_height(HTMLInputElement* self, unsigned long value);

/**
 * @brief Gets the `indeterminate` property. 
*/
bool HTMLInputElement_indeterminate(const HTMLInputElement *self);

/**
 * @brief Sets the `indeterminate` property. 
*/
void HTMLInputElement_set_indeterminate(HTMLInputElement* self, bool value);

/**
 * @brief Gets the `list` property. 
*/
HTMLDataListElement HTMLInputElement_list(const HTMLInputElement *self);

/**
 * @brief Gets the `max` property. 
*/
jb_String HTMLInputElement_max(const HTMLInputElement *self);

/**
 * @brief Sets the `max` property. 
*/
void HTMLInputElement_set_max(HTMLInputElement* self, jb_String * value);

/**
 * @brief Gets the `maxLength` property. 
*/
long HTMLInputElement_maxLength(const HTMLInputElement *self);

/**
 * @brief Sets the `maxLength` property. 
*/
void HTMLInputElement_set_maxLength(HTMLInputElement* self, long value);

/**
 * @brief Gets the `min` property. 
*/
jb_String HTMLInputElement_min(const HTMLInputElement *self);

/**
 * @brief Sets the `min` property. 
*/
void HTMLInputElement_set_min(HTMLInputElement* self, jb_String * value);

/**
 * @brief Gets the `minLength` property. 
*/
long HTMLInputElement_minLength(const HTMLInputElement *self);

/**
 * @brief Sets the `minLength` property. 
*/
void HTMLInputElement_set_minLength(HTMLInputElement* self, long value);

/**
 * @brief Gets the `multiple` property. 
*/
bool HTMLInputElement_multiple(const HTMLInputElement *self);

/**
 * @brief Sets the `multiple` property. 
*/
void HTMLInputElement_set_multiple(HTMLInputElement* self, bool value);

/**
 * @brief Gets the `name` property. 
*/
jb_String HTMLInputElement_name(const HTMLInputElement *self);

/**
 * @brief Sets the `name` property. 
*/
void HTMLInputElement_set_name(HTMLInputElement* self, jb_String * value);

/**
 * @brief Gets the `pattern` property. 
*/
jb_String HTMLInputElement_pattern(const HTMLInputElement *self);

/**
 * @brief Sets the `pattern` property. 
*/
void HTMLInputElement_set_pattern(HTMLInputElement* self, jb_String * value);

/**
 * @brief Gets the `placeholder` property. 
*/
jb_String HTMLInputElement_placeholder(const HTMLInputElement *self);

/**
 * @brief Sets the `placeholder` property. 
*/
void HTMLInputElement_set_placeholder(HTMLInputElement* self, jb_String * value);

/**
 * @brief Gets the `readOnly` property. 
*/
bool HTMLInputElement_readOnly(const HTMLInputElement *self);

/**
 * @brief Sets the `readOnly` property. 
*/
void HTMLInputElement_set_readOnly(HTMLInputElement* self, bool value);

/**
 * @brief Gets the `required` property. 
*/
bool HTMLInputElement_required(const HTMLInputElement *self);

/**
 * @brief Sets the `required` property. 
*/
void HTMLInputElement_set_required(HTMLInputElement* self, bool value);

/**
 * @brief Gets the `size` property. 
*/
unsigned long HTMLInputElement_size(const HTMLInputElement *self);

/**
 * @brief Sets the `size` property. 
*/
void HTMLInputElement_set_size(HTMLInputElement* self, unsigned long value);

/**
 * @brief Gets the `src` property. 
*/
jb_String HTMLInputElement_src(const HTMLInputElement *self);

/**
 * @brief Sets the `src` property. 
*/
void HTMLInputElement_set_src(HTMLInputElement* self, jb_String * value);

/**
 * @brief Gets the `step` property. 
*/
jb_String HTMLInputElement_step(const HTMLInputElement *self);

/**
 * @brief Sets the `step` property. 
*/
void HTMLInputElement_set_step(HTMLInputElement* self, jb_String * value);

/**
 * @brief Gets the `type` property. 
*/
jb_String HTMLInputElement_type(const HTMLInputElement *self);

/**
 * @brief Sets the `type` property. 
*/
void HTMLInputElement_set_type(HTMLInputElement* self, jb_String * value);

/**
 * @brief Gets the `defaultValue` property. 
*/
jb_String HTMLInputElement_defaultValue(const HTMLInputElement *self);

/**
 * @brief Sets the `defaultValue` property. 
*/
void HTMLInputElement_set_defaultValue(HTMLInputElement* self, jb_String * value);

/**
 * @brief Gets the `value` property. 
*/
jb_String HTMLInputElement_value(const HTMLInputElement *self);

/**
 * @brief Sets the `value` property. 
*/
void HTMLInputElement_set_value(HTMLInputElement* self, jb_String * value);

/**
 * @brief Gets the `valueAsDate` property. 
*/
jb_Object HTMLInputElement_valueAsDate(const HTMLInputElement *self);

/**
 * @brief Sets the `valueAsDate` property. 
*/
void HTMLInputElement_set_valueAsDate(HTMLInputElement* self, jb_Object * value);

/**
 * @brief Gets the `valueAsNumber` property. 
*/
double HTMLInputElement_valueAsNumber(const HTMLInputElement *self);

/**
 * @brief Sets the `valueAsNumber` property. 
*/
void HTMLInputElement_set_valueAsNumber(HTMLInputElement* self, double value);

/**
 * @brief Gets the `width` property. 
*/
unsigned long HTMLInputElement_width(const HTMLInputElement *self);

/**
 * @brief Sets the `width` property. 
*/
void HTMLInputElement_set_width(HTMLInputElement* self, unsigned long value);

/**
 * @brief Calls the `stepUp` method. 
*/
jb_Undefined HTMLInputElement_stepUp0(HTMLInputElement* self );

/**
 * @brief Calls the `stepUp` method. 
*/
jb_Undefined HTMLInputElement_stepUp1(HTMLInputElement* self , long n);

/**
 * @brief Calls the `stepDown` method. 
*/
jb_Undefined HTMLInputElement_stepDown0(HTMLInputElement* self );

/**
 * @brief Calls the `stepDown` method. 
*/
jb_Undefined HTMLInputElement_stepDown1(HTMLInputElement* self , long n);

/**
 * @brief Gets the `willValidate` property. 
*/
bool HTMLInputElement_willValidate(const HTMLInputElement *self);

/**
 * @brief Gets the `validity` property. 
*/
ValidityState HTMLInputElement_validity(const HTMLInputElement *self);

/**
 * @brief Gets the `validationMessage` property. 
*/
jb_String HTMLInputElement_validationMessage(const HTMLInputElement *self);

/**
 * @brief Calls the `checkValidity` method. 
*/
bool HTMLInputElement_checkValidity(HTMLInputElement* self );

/**
 * @brief Calls the `reportValidity` method. 
*/
bool HTMLInputElement_reportValidity(HTMLInputElement* self );

/**
 * @brief Calls the `setCustomValidity` method. 
*/
jb_Undefined HTMLInputElement_setCustomValidity(HTMLInputElement* self , jb_String * error);

/**
 * @brief Gets the `labels` property. 
*/
NodeList HTMLInputElement_labels(const HTMLInputElement *self);

/**
 * @brief Calls the `select` method. 
*/
jb_Undefined HTMLInputElement_select(HTMLInputElement* self );

/**
 * @brief Gets the `selectionStart` property. 
*/
unsigned long HTMLInputElement_selectionStart(const HTMLInputElement *self);

/**
 * @brief Sets the `selectionStart` property. 
*/
void HTMLInputElement_set_selectionStart(HTMLInputElement* self, unsigned long value);

/**
 * @brief Gets the `selectionEnd` property. 
*/
unsigned long HTMLInputElement_selectionEnd(const HTMLInputElement *self);

/**
 * @brief Sets the `selectionEnd` property. 
*/
void HTMLInputElement_set_selectionEnd(HTMLInputElement* self, unsigned long value);

/**
 * @brief Gets the `selectionDirection` property. 
*/
jb_String HTMLInputElement_selectionDirection(const HTMLInputElement *self);

/**
 * @brief Sets the `selectionDirection` property. 
*/
void HTMLInputElement_set_selectionDirection(HTMLInputElement* self, jb_String * value);

/**
 * @brief Calls the `setRangeText` method. 
*/
jb_Undefined HTMLInputElement_setRangeText0(HTMLInputElement* self , jb_String * replacement, unsigned long start, unsigned long end);

/**
 * @brief Calls the `setRangeText` method. 
*/
jb_Undefined HTMLInputElement_setRangeText1(HTMLInputElement* self , jb_String * replacement, unsigned long start, unsigned long end, SelectionMode * selectionMode);

/**
 * @brief Calls the `setSelectionRange` method. 
*/
jb_Undefined HTMLInputElement_setSelectionRange0(HTMLInputElement* self , unsigned long start, unsigned long end);

/**
 * @brief Calls the `setSelectionRange` method. 
*/
jb_Undefined HTMLInputElement_setSelectionRange1(HTMLInputElement* self , unsigned long start, unsigned long end, jb_String * direction);

/**
 * @brief Calls the `showPicker` method. 
*/
jb_Undefined HTMLInputElement_showPicker(HTMLInputElement* self );

/**
 * @brief Gets the `webkitdirectory` property. 
*/
bool HTMLInputElement_webkitdirectory(const HTMLInputElement *self);

/**
 * @brief Sets the `webkitdirectory` property. 
*/
void HTMLInputElement_set_webkitdirectory(HTMLInputElement* self, bool value);

/**
 * @brief Gets the `webkitEntries` property. 
*/
jb_Array HTMLInputElement_webkitEntries(const HTMLInputElement *self);

/**
 * @brief Gets the `capture` property. 
*/
jb_String HTMLInputElement_capture(const HTMLInputElement *self);

/**
 * @brief Sets the `capture` property. 
*/
void HTMLInputElement_set_capture(HTMLInputElement* self, jb_String * value);

/**
 * @brief Gets the `align` property. 
*/
jb_String HTMLInputElement_align(const HTMLInputElement *self);

/**
 * @brief Sets the `align` property. 
*/
void HTMLInputElement_set_align(HTMLInputElement* self, jb_String * value);

/**
 * @brief Gets the `useMap` property. 
*/
jb_String HTMLInputElement_useMap(const HTMLInputElement *self);

/**
 * @brief Sets the `useMap` property. 
*/
void HTMLInputElement_set_useMap(HTMLInputElement* self, jb_String * value);

/**
 * @brief Gets the `popoverTargetElement` property. 
*/
Element HTMLInputElement_popoverTargetElement(const HTMLInputElement *self);

/**
 * @brief Sets the `popoverTargetElement` property. 
*/
void HTMLInputElement_set_popoverTargetElement(HTMLInputElement* self, Element * value);

/**
 * @brief Gets the `popoverTargetAction` property. 
*/
jb_String HTMLInputElement_popoverTargetAction(const HTMLInputElement *self);

/**
 * @brief Sets the `popoverTargetAction` property. 
*/
void HTMLInputElement_set_popoverTargetAction(HTMLInputElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
