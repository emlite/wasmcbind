#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface BluetoothCharacteristicProperties
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothCharacteristicProperties)
 */
DECLARE_EMLITE_TYPE(BluetoothCharacteristicProperties, em_Val);

/**
 * @brief Gets the `broadcast` property. 
*/
bool BluetoothCharacteristicProperties_broadcast(const BluetoothCharacteristicProperties *self);

/**
 * @brief Gets the `read` property. 
*/
bool BluetoothCharacteristicProperties_read(const BluetoothCharacteristicProperties *self);

/**
 * @brief Gets the `writeWithoutResponse` property. 
*/
bool BluetoothCharacteristicProperties_writeWithoutResponse(const BluetoothCharacteristicProperties *self);

/**
 * @brief Gets the `write` property. 
*/
bool BluetoothCharacteristicProperties_write(const BluetoothCharacteristicProperties *self);

/**
 * @brief Gets the `notify` property. 
*/
bool BluetoothCharacteristicProperties_notify(const BluetoothCharacteristicProperties *self);

/**
 * @brief Gets the `indicate` property. 
*/
bool BluetoothCharacteristicProperties_indicate(const BluetoothCharacteristicProperties *self);

/**
 * @brief Gets the `authenticatedSignedWrites` property. 
*/
bool BluetoothCharacteristicProperties_authenticatedSignedWrites(const BluetoothCharacteristicProperties *self);

/**
 * @brief Gets the `reliableWrite` property. 
*/
bool BluetoothCharacteristicProperties_reliableWrite(const BluetoothCharacteristicProperties *self);

/**
 * @brief Gets the `writableAuxiliaries` property. 
*/
bool BluetoothCharacteristicProperties_writableAuxiliaries(const BluetoothCharacteristicProperties *self);

#ifdef __cplusplus
}
#endif
