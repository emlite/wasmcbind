#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BluetoothRemoteGATTService BluetoothRemoteGATTService;
typedef struct BluetoothCharacteristicProperties BluetoothCharacteristicProperties;
typedef struct BluetoothRemoteGATTDescriptor BluetoothRemoteGATTDescriptor;


/**
 * @brief Interface BluetoothRemoteGATTCharacteristic
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTCharacteristic)
 */
DECLARE_EMLITE_TYPE(BluetoothRemoteGATTCharacteristic, EventTarget);

/**
 * @brief Gets the `service` property. 
*/
BluetoothRemoteGATTService BluetoothRemoteGATTCharacteristic_service(const BluetoothRemoteGATTCharacteristic *self);

/**
 * @brief Gets the `uuid` property. 
*/
jb_Any BluetoothRemoteGATTCharacteristic_uuid(const BluetoothRemoteGATTCharacteristic *self);

/**
 * @brief Gets the `properties` property. 
*/
BluetoothCharacteristicProperties BluetoothRemoteGATTCharacteristic_properties(const BluetoothRemoteGATTCharacteristic *self);

/**
 * @brief Gets the `value` property. 
*/
jb_DataView BluetoothRemoteGATTCharacteristic_value(const BluetoothRemoteGATTCharacteristic *self);

/**
 * @brief Calls the `getDescriptor` method. 
*/
jb_Promise BluetoothRemoteGATTCharacteristic_getDescriptor(BluetoothRemoteGATTCharacteristic* self , jb_Any * descriptor);

/**
 * @brief Calls the `getDescriptors` method. 
*/
jb_Promise BluetoothRemoteGATTCharacteristic_getDescriptors0(BluetoothRemoteGATTCharacteristic* self );

/**
 * @brief Calls the `getDescriptors` method. 
*/
jb_Promise BluetoothRemoteGATTCharacteristic_getDescriptors1(BluetoothRemoteGATTCharacteristic* self , jb_Any * descriptor);

/**
 * @brief Calls the `readValue` method. 
*/
jb_Promise BluetoothRemoteGATTCharacteristic_readValue(BluetoothRemoteGATTCharacteristic* self );

/**
 * @brief Calls the `writeValue` method. 
*/
jb_Promise BluetoothRemoteGATTCharacteristic_writeValue(BluetoothRemoteGATTCharacteristic* self , jb_Any * value);

/**
 * @brief Calls the `writeValueWithResponse` method. 
*/
jb_Promise BluetoothRemoteGATTCharacteristic_writeValueWithResponse(BluetoothRemoteGATTCharacteristic* self , jb_Any * value);

/**
 * @brief Calls the `writeValueWithoutResponse` method. 
*/
jb_Promise BluetoothRemoteGATTCharacteristic_writeValueWithoutResponse(BluetoothRemoteGATTCharacteristic* self , jb_Any * value);

/**
 * @brief Calls the `startNotifications` method. 
*/
jb_Promise BluetoothRemoteGATTCharacteristic_startNotifications(BluetoothRemoteGATTCharacteristic* self );

/**
 * @brief Calls the `stopNotifications` method. 
*/
jb_Promise BluetoothRemoteGATTCharacteristic_stopNotifications(BluetoothRemoteGATTCharacteristic* self );

/**
 * @brief Gets the `oncharacteristicvaluechanged` property. 
*/
jb_Any BluetoothRemoteGATTCharacteristic_oncharacteristicvaluechanged(const BluetoothRemoteGATTCharacteristic *self);

/**
 * @brief Sets the `oncharacteristicvaluechanged` property. 
*/
void BluetoothRemoteGATTCharacteristic_set_oncharacteristicvaluechanged(BluetoothRemoteGATTCharacteristic* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
