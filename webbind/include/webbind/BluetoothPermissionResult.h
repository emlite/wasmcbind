#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PermissionStatus.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BluetoothDevice BluetoothDevice;


/**
 * @brief Interface BluetoothPermissionResult
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothPermissionResult)
 */
DECLARE_EMLITE_TYPE(BluetoothPermissionResult, PermissionStatus);

/**
 * @brief Gets the `devices` property. 
*/
jb_Array BluetoothPermissionResult_devices(const BluetoothPermissionResult *self);

/**
 * @brief Sets the `devices` property. 
*/
void BluetoothPermissionResult_set_devices(BluetoothPermissionResult* self, jb_Array * value);

#ifdef __cplusplus
}
#endif
