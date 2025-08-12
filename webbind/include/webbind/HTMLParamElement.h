#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLParamElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLParamElement)
 */
DECLARE_EMLITE_TYPE(HTMLParamElement, HTMLElement);

/**
 * @brief Creates a new `HTMLParamElement` object. 
*/
HTMLParamElement HTMLParamElement_new();

/**
 * @brief Gets the `name` property. 
*/
jb_String HTMLParamElement_name(const HTMLParamElement *self);

/**
 * @brief Sets the `name` property. 
*/
void HTMLParamElement_set_name(HTMLParamElement* self, jb_String * value);

/**
 * @brief Gets the `value` property. 
*/
jb_String HTMLParamElement_value(const HTMLParamElement *self);

/**
 * @brief Sets the `value` property. 
*/
void HTMLParamElement_set_value(HTMLParamElement* self, jb_String * value);

/**
 * @brief Gets the `type` property. 
*/
jb_String HTMLParamElement_type(const HTMLParamElement *self);

/**
 * @brief Sets the `type` property. 
*/
void HTMLParamElement_set_type(HTMLParamElement* self, jb_String * value);

/**
 * @brief Gets the `valueType` property. 
*/
jb_String HTMLParamElement_valueType(const HTMLParamElement *self);

/**
 * @brief Sets the `valueType` property. 
*/
void HTMLParamElement_set_valueType(HTMLParamElement* self, jb_String * value);

#ifdef __cplusplus
}
#endif
