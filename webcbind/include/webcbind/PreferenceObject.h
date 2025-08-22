#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface PreferenceObject
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PreferenceObject)
 */
DECLARE_EMLITE_TYPE(PreferenceObject, EventTarget);

/**
 * @brief Gets the `override` property. 
*/
jb_String PreferenceObject_override(const PreferenceObject *self);

/**
 * @brief Gets the `value` property. 
*/
jb_String PreferenceObject_value(const PreferenceObject *self);

/**
 * @brief Gets the `validValues` property. 
*/
jb_Array PreferenceObject_validValues(const PreferenceObject *self);

/**
 * @brief Calls the `clearOverride` method. 
*/
jb_Undefined PreferenceObject_clearOverride(PreferenceObject* self );

/**
 * @brief Calls the `requestOverride` method. 
*/
jb_Promise PreferenceObject_requestOverride(PreferenceObject* self , jb_String * value);

/**
 * @brief Gets the `onchange` property. 
*/
jb_Any PreferenceObject_onchange(const PreferenceObject *self);

/**
 * @brief Sets the `onchange` property. 
*/
void PreferenceObject_set_onchange(PreferenceObject* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
