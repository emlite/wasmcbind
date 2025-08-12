#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLDialogElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDialogElement)
 */
DECLARE_EMLITE_TYPE(HTMLDialogElement, HTMLElement);

/**
 * @brief Creates a new `HTMLDialogElement` object. 
*/
HTMLDialogElement HTMLDialogElement_new();

/**
 * @brief Gets the `open` property. 
*/
bool HTMLDialogElement_open(const HTMLDialogElement *self);

/**
 * @brief Sets the `open` property. 
*/
void HTMLDialogElement_set_open(HTMLDialogElement* self, bool value);

/**
 * @brief Gets the `returnValue` property. 
*/
jb_String HTMLDialogElement_returnValue(const HTMLDialogElement *self);

/**
 * @brief Sets the `returnValue` property. 
*/
void HTMLDialogElement_set_returnValue(HTMLDialogElement* self, jb_String * value);

/**
 * @brief Gets the `closedBy` property. 
*/
jb_String HTMLDialogElement_closedBy(const HTMLDialogElement *self);

/**
 * @brief Sets the `closedBy` property. 
*/
void HTMLDialogElement_set_closedBy(HTMLDialogElement* self, jb_String * value);

/**
 * @brief Calls the `show` method. 
*/
jb_Undefined HTMLDialogElement_show(HTMLDialogElement* self );

/**
 * @brief Calls the `showModal` method. 
*/
jb_Undefined HTMLDialogElement_showModal(HTMLDialogElement* self );

/**
 * @brief Calls the `close` method. 
*/
jb_Undefined HTMLDialogElement_close0(HTMLDialogElement* self );

/**
 * @brief Calls the `close` method. 
*/
jb_Undefined HTMLDialogElement_close1(HTMLDialogElement* self , jb_String * returnValue);

/**
 * @brief Calls the `requestClose` method. 
*/
jb_Undefined HTMLDialogElement_requestClose0(HTMLDialogElement* self );

/**
 * @brief Calls the `requestClose` method. 
*/
jb_Undefined HTMLDialogElement_requestClose1(HTMLDialogElement* self , jb_String * returnValue);

#ifdef __cplusplus
}
#endif
