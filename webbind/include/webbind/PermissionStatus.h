#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface PermissionStatus
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PermissionStatus)
 */
DECLARE_EMLITE_TYPE(PermissionStatus, EventTarget);

/**
 * @brief Gets the `state` property. 
*/
PermissionState PermissionStatus_state(const PermissionStatus *self);

/**
 * @brief Gets the `name` property. 
*/
jb_String PermissionStatus_name(const PermissionStatus *self);

/**
 * @brief Gets the `onchange` property. 
*/
jb_Any PermissionStatus_onchange(const PermissionStatus *self);

/**
 * @brief Sets the `onchange` property. 
*/
void PermissionStatus_set_onchange(PermissionStatus* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
