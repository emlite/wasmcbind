#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface DevicePosture
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/DevicePosture)
 */
DECLARE_EMLITE_TYPE(DevicePosture, EventTarget);

/**
 * @brief Gets the `type` property. 
*/
DevicePostureType DevicePosture_type(const DevicePosture *self);

/**
 * @brief Gets the `onchange` property. 
*/
jb_Any DevicePosture_onchange(const DevicePosture *self);

/**
 * @brief Sets the `onchange` property. 
*/
void DevicePosture_set_onchange(DevicePosture* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
