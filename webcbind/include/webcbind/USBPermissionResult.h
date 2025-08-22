#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "PermissionStatus.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct USBDevice USBDevice;


/**
 * @brief Interface USBPermissionResult
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/USBPermissionResult)
 */
DECLARE_EMLITE_TYPE(USBPermissionResult, PermissionStatus);

/**
 * @brief Gets the `devices` property. 
*/
jb_Array USBPermissionResult_devices(const USBPermissionResult *self);

/**
 * @brief Sets the `devices` property. 
*/
void USBPermissionResult_set_devices(USBPermissionResult* self, jb_Array * value);

#ifdef __cplusplus
}
#endif
