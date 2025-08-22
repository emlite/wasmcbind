#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "PermissionStatus.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BluetoothLEScan BluetoothLEScan;


/**
 * @brief Interface BluetoothLEScanPermissionResult
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothLEScanPermissionResult)
 */
DECLARE_EMLITE_TYPE(BluetoothLEScanPermissionResult, PermissionStatus);

/**
 * @brief Gets the `scans` property. 
*/
jb_Array BluetoothLEScanPermissionResult_scans(const BluetoothLEScanPermissionResult *self);

/**
 * @brief Sets the `scans` property. 
*/
void BluetoothLEScanPermissionResult_set_scans(BluetoothLEScanPermissionResult* self, jb_Array * value);

#ifdef __cplusplus
}
#endif
