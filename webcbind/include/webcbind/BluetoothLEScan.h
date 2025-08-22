#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BluetoothLEScanFilter BluetoothLEScanFilter;


/**
 * @brief Interface BluetoothLEScan
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothLEScan)
 */
DECLARE_EMLITE_TYPE(BluetoothLEScan, em_Val);

/**
 * @brief Gets the `filters` property. 
*/
jb_Array BluetoothLEScan_filters(const BluetoothLEScan *self);

/**
 * @brief Gets the `keepRepeatedDevices` property. 
*/
bool BluetoothLEScan_keepRepeatedDevices(const BluetoothLEScan *self);

/**
 * @brief Gets the `acceptAllAdvertisements` property. 
*/
bool BluetoothLEScan_acceptAllAdvertisements(const BluetoothLEScan *self);

/**
 * @brief Gets the `active` property. 
*/
bool BluetoothLEScan_active(const BluetoothLEScan *self);

/**
 * @brief Calls the `stop` method. 
*/
jb_Undefined BluetoothLEScan_stop(BluetoothLEScan* self );

#ifdef __cplusplus
}
#endif
