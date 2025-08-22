#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BluetoothRemoteGATTCharacteristic BluetoothRemoteGATTCharacteristic;


/**
 * @brief Interface BluetoothRemoteGATTDescriptor
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTDescriptor)
 */
DECLARE_EMLITE_TYPE(BluetoothRemoteGATTDescriptor, em_Val);

/**
 * @brief Gets the `characteristic` property. 
*/
BluetoothRemoteGATTCharacteristic BluetoothRemoteGATTDescriptor_characteristic(const BluetoothRemoteGATTDescriptor *self);

/**
 * @brief Gets the `uuid` property. 
*/
jb_Any BluetoothRemoteGATTDescriptor_uuid(const BluetoothRemoteGATTDescriptor *self);

/**
 * @brief Gets the `value` property. 
*/
jb_DataView BluetoothRemoteGATTDescriptor_value(const BluetoothRemoteGATTDescriptor *self);

/**
 * @brief Calls the `readValue` method. 
*/
jb_Promise BluetoothRemoteGATTDescriptor_readValue(BluetoothRemoteGATTDescriptor* self );

/**
 * @brief Calls the `writeValue` method. 
*/
jb_Promise BluetoothRemoteGATTDescriptor_writeValue(BluetoothRemoteGATTDescriptor* self , jb_Any * value);

#ifdef __cplusplus
}
#endif
