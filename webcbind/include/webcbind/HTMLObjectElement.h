#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HTMLFormElement HTMLFormElement;
typedef struct Document Document;
typedef struct ValidityState ValidityState;


/**
 * @brief Interface HTMLObjectElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLObjectElement)
 */
DECLARE_EMLITE_TYPE(HTMLObjectElement, HTMLElement);

/**
 * @brief Creates a new `HTMLObjectElement` object. 
*/
HTMLObjectElement HTMLObjectElement_new();

/**
 * @brief Gets the `data` property. 
*/
jb_String HTMLObjectElement_data(const HTMLObjectElement *self);

/**
 * @brief Sets the `data` property. 
*/
void HTMLObjectElement_set_data(HTMLObjectElement* self, jb_String * value);

/**
 * @brief Gets the `type` property. 
*/
jb_String HTMLObjectElement_type(const HTMLObjectElement *self);

/**
 * @brief Sets the `type` property. 
*/
void HTMLObjectElement_set_type(HTMLObjectElement* self, jb_String * value);

/**
 * @brief Gets the `name` property. 
*/
jb_String HTMLObjectElement_name(const HTMLObjectElement *self);

/**
 * @brief Sets the `name` property. 
*/
void HTMLObjectElement_set_name(HTMLObjectElement* self, jb_String * value);

/**
 * @brief Gets the `form` property. 
*/
HTMLFormElement HTMLObjectElement_form(const HTMLObjectElement *self);

/**
 * @brief Gets the `width` property. 
*/
jb_String HTMLObjectElement_width(const HTMLObjectElement *self);

/**
 * @brief Sets the `width` property. 
*/
void HTMLObjectElement_set_width(HTMLObjectElement* self, jb_String * value);

/**
 * @brief Gets the `height` property. 
*/
jb_String HTMLObjectElement_height(const HTMLObjectElement *self);

/**
 * @brief Sets the `height` property. 
*/
void HTMLObjectElement_set_height(HTMLObjectElement* self, jb_String * value);

/**
 * @brief Gets the `contentDocument` property. 
*/
Document HTMLObjectElement_contentDocument(const HTMLObjectElement *self);

/**
 * @brief Gets the `contentWindow` property. 
*/
jb_Any HTMLObjectElement_contentWindow(const HTMLObjectElement *self);

/**
 * @brief Calls the `getSVGDocument` method. 
*/
Document HTMLObjectElement_getSVGDocument(HTMLObjectElement* self );

/**
 * @brief Gets the `willValidate` property. 
*/
bool HTMLObjectElement_willValidate(const HTMLObjectElement *self);

/**
 * @brief Gets the `validity` property. 
*/
ValidityState HTMLObjectElement_validity(const HTMLObjectElement *self);

/**
 * @brief Gets the `validationMessage` property. 
*/
jb_String HTMLObjectElement_validationMessage(const HTMLObjectElement *self);

/**
 * @brief Calls the `checkValidity` method. 
*/
bool HTMLObjectElement_checkValidity(HTMLObjectElement* self );

/**
 * @brief Calls the `reportValidity` method. 
*/
bool HTMLObjectElement_reportValidity(HTMLObjectElement* self );

/**
 * @brief Calls the `setCustomValidity` method. 
*/
jb_Undefined HTMLObjectElement_setCustomValidity(HTMLObjectElement* self , jb_String * error);

/**
 * @brief Gets the `align` property. 
*/
jb_String HTMLObjectElement_align(const HTMLObjectElement *self);

/**
 * @brief Sets the `align` property. 
*/
void HTMLObjectElement_set_align(HTMLObjectElement* self, jb_String * value);

/**
 * @brief Gets the `archive` property. 
*/
jb_String HTMLObjectElement_archive(const HTMLObjectElement *self);

/**
 * @brief Sets the `archive` property. 
*/
void HTMLObjectElement_set_archive(HTMLObjectElement* self, jb_String * value);

/**
 * @brief Gets the `code` property. 
*/
jb_String HTMLObjectElement_code(const HTMLObjectElement *self);

/**
 * @brief Sets the `code` property. 
*/
void HTMLObjectElement_set_code(HTMLObjectElement* self, jb_String * value);

/**
 * @brief Gets the `declare` property. 
*/
bool HTMLObjectElement_declare(const HTMLObjectElement *self);

/**
 * @brief Sets the `declare` property. 
*/
void HTMLObjectElement_set_declare(HTMLObjectElement* self, bool value);

/**
 * @brief Gets the `hspace` property. 
*/
unsigned long HTMLObjectElement_hspace(const HTMLObjectElement *self);

/**
 * @brief Sets the `hspace` property. 
*/
void HTMLObjectElement_set_hspace(HTMLObjectElement* self, unsigned long value);

/**
 * @brief Gets the `standby` property. 
*/
jb_String HTMLObjectElement_standby(const HTMLObjectElement *self);

/**
 * @brief Sets the `standby` property. 
*/
void HTMLObjectElement_set_standby(HTMLObjectElement* self, jb_String * value);

/**
 * @brief Gets the `vspace` property. 
*/
unsigned long HTMLObjectElement_vspace(const HTMLObjectElement *self);

/**
 * @brief Sets the `vspace` property. 
*/
void HTMLObjectElement_set_vspace(HTMLObjectElement* self, unsigned long value);

/**
 * @brief Gets the `codeBase` property. 
*/
jb_String HTMLObjectElement_codeBase(const HTMLObjectElement *self);

/**
 * @brief Sets the `codeBase` property. 
*/
void HTMLObjectElement_set_codeBase(HTMLObjectElement* self, jb_String * value);

/**
 * @brief Gets the `codeType` property. 
*/
jb_String HTMLObjectElement_codeType(const HTMLObjectElement *self);

/**
 * @brief Sets the `codeType` property. 
*/
void HTMLObjectElement_set_codeType(HTMLObjectElement* self, jb_String * value);

/**
 * @brief Gets the `useMap` property. 
*/
jb_String HTMLObjectElement_useMap(const HTMLObjectElement *self);

/**
 * @brief Sets the `useMap` property. 
*/
void HTMLObjectElement_set_useMap(HTMLObjectElement* self, jb_String * value);

/**
 * @brief Gets the `border` property. 
*/
jb_String HTMLObjectElement_border(const HTMLObjectElement *self);

/**
 * @brief Sets the `border` property. 
*/
void HTMLObjectElement_set_border(HTMLObjectElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
