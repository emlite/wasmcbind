#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMTokenList DOMTokenList;
typedef struct HTMLFormControlsCollection HTMLFormControlsCollection;


/**
 * @brief Interface HTMLFormElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFormElement)
 */
DECLARE_EMLITE_TYPE(HTMLFormElement, HTMLElement);

/**
 * @brief Creates a new `HTMLFormElement` object. 
*/
HTMLFormElement HTMLFormElement_new();

/**
 * @brief Gets the `acceptCharset` property. 
*/
jb_String HTMLFormElement_acceptCharset(const HTMLFormElement *self);

/**
 * @brief Sets the `acceptCharset` property. 
*/
void HTMLFormElement_set_acceptCharset(HTMLFormElement* self, jb_String * value);

/**
 * @brief Gets the `action` property. 
*/
jb_String HTMLFormElement_action(const HTMLFormElement *self);

/**
 * @brief Sets the `action` property. 
*/
void HTMLFormElement_set_action(HTMLFormElement* self, jb_String * value);

/**
 * @brief Gets the `autocomplete` property. 
*/
jb_String HTMLFormElement_autocomplete(const HTMLFormElement *self);

/**
 * @brief Sets the `autocomplete` property. 
*/
void HTMLFormElement_set_autocomplete(HTMLFormElement* self, jb_String * value);

/**
 * @brief Gets the `enctype` property. 
*/
jb_String HTMLFormElement_enctype(const HTMLFormElement *self);

/**
 * @brief Sets the `enctype` property. 
*/
void HTMLFormElement_set_enctype(HTMLFormElement* self, jb_String * value);

/**
 * @brief Gets the `encoding` property. 
*/
jb_String HTMLFormElement_encoding(const HTMLFormElement *self);

/**
 * @brief Sets the `encoding` property. 
*/
void HTMLFormElement_set_encoding(HTMLFormElement* self, jb_String * value);

/**
 * @brief Gets the `method` property. 
*/
jb_String HTMLFormElement_method(const HTMLFormElement *self);

/**
 * @brief Sets the `method` property. 
*/
void HTMLFormElement_set_method(HTMLFormElement* self, jb_String * value);

/**
 * @brief Gets the `name` property. 
*/
jb_String HTMLFormElement_name(const HTMLFormElement *self);

/**
 * @brief Sets the `name` property. 
*/
void HTMLFormElement_set_name(HTMLFormElement* self, jb_String * value);

/**
 * @brief Gets the `noValidate` property. 
*/
bool HTMLFormElement_noValidate(const HTMLFormElement *self);

/**
 * @brief Sets the `noValidate` property. 
*/
void HTMLFormElement_set_noValidate(HTMLFormElement* self, bool value);

/**
 * @brief Gets the `target` property. 
*/
jb_String HTMLFormElement_target(const HTMLFormElement *self);

/**
 * @brief Sets the `target` property. 
*/
void HTMLFormElement_set_target(HTMLFormElement* self, jb_String * value);

/**
 * @brief Gets the `rel` property. 
*/
jb_String HTMLFormElement_rel(const HTMLFormElement *self);

/**
 * @brief Sets the `rel` property. 
*/
void HTMLFormElement_set_rel(HTMLFormElement* self, jb_String * value);

/**
 * @brief Gets the `relList` property. 
*/
DOMTokenList HTMLFormElement_relList(const HTMLFormElement *self);

/**
 * @brief Gets the `elements` property. 
*/
HTMLFormControlsCollection HTMLFormElement_elements(const HTMLFormElement *self);

/**
 * @brief Gets the `length` property. 
*/
unsigned long HTMLFormElement_length(const HTMLFormElement *self);

/**
 * @brief Calls the `submit` method. 
*/
jb_Undefined HTMLFormElement_submit(HTMLFormElement* self );

/**
 * @brief Calls the `requestSubmit` method. 
*/
jb_Undefined HTMLFormElement_requestSubmit0(HTMLFormElement* self );

/**
 * @brief Calls the `requestSubmit` method. 
*/
jb_Undefined HTMLFormElement_requestSubmit1(HTMLFormElement* self , HTMLElement * submitter);

/**
 * @brief Calls the `reset` method. 
*/
jb_Undefined HTMLFormElement_reset(HTMLFormElement* self );

/**
 * @brief Calls the `checkValidity` method. 
*/
bool HTMLFormElement_checkValidity(HTMLFormElement* self );

/**
 * @brief Calls the `reportValidity` method. 
*/
bool HTMLFormElement_reportValidity(HTMLFormElement* self );

#ifdef __cplusplus
}
#endif
