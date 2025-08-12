#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BluetoothLEScanFilterInit BluetoothLEScanFilterInit;
typedef struct BluetoothManufacturerDataFilter BluetoothManufacturerDataFilter;
typedef struct BluetoothServiceDataFilter BluetoothServiceDataFilter;


/**
 * @brief Interface BluetoothLEScanFilter
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothLEScanFilter)
 */
DECLARE_EMLITE_TYPE(BluetoothLEScanFilter, em_Val);

/**
 * @brief Creates a new `BluetoothLEScanFilter` object. 
*/
BluetoothLEScanFilter BluetoothLEScanFilter_new0();

/**
 * @brief Creates a new `BluetoothLEScanFilter` object. 
*/
BluetoothLEScanFilter BluetoothLEScanFilter_new1(BluetoothLEScanFilterInit * init);

/**
 * @brief Gets the `name` property. 
*/
jb_String BluetoothLEScanFilter_name(const BluetoothLEScanFilter *self);

/**
 * @brief Gets the `namePrefix` property. 
*/
jb_String BluetoothLEScanFilter_namePrefix(const BluetoothLEScanFilter *self);

/**
 * @brief Gets the `services` property. 
*/
jb_Array BluetoothLEScanFilter_services(const BluetoothLEScanFilter *self);

/**
 * @brief Gets the `manufacturerData` property. 
*/
BluetoothManufacturerDataFilter BluetoothLEScanFilter_manufacturerData(const BluetoothLEScanFilter *self);

/**
 * @brief Gets the `serviceData` property. 
*/
BluetoothServiceDataFilter BluetoothLEScanFilter_serviceData(const BluetoothLEScanFilter *self);

#ifdef __cplusplus
}
#endif
