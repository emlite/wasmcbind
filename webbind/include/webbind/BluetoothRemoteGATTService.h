#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BluetoothDevice BluetoothDevice;
typedef struct BluetoothRemoteGATTCharacteristic BluetoothRemoteGATTCharacteristic;


/**
 * @brief Interface BluetoothRemoteGATTService
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTService)
 */
DECLARE_EMLITE_TYPE(BluetoothRemoteGATTService, EventTarget);

/**
 * @brief Gets the `device` property. 
*/
BluetoothDevice BluetoothRemoteGATTService_device(const BluetoothRemoteGATTService *self);

/**
 * @brief Gets the `uuid` property. 
*/
jb_Any BluetoothRemoteGATTService_uuid(const BluetoothRemoteGATTService *self);

/**
 * @brief Gets the `isPrimary` property. 
*/
bool BluetoothRemoteGATTService_isPrimary(const BluetoothRemoteGATTService *self);

/**
 * @brief Calls the `getCharacteristic` method. 
*/
jb_Promise BluetoothRemoteGATTService_getCharacteristic(BluetoothRemoteGATTService* self , jb_Any * characteristic);

/**
 * @brief Calls the `getCharacteristics` method. 
*/
jb_Promise BluetoothRemoteGATTService_getCharacteristics0(BluetoothRemoteGATTService* self );

/**
 * @brief Calls the `getCharacteristics` method. 
*/
jb_Promise BluetoothRemoteGATTService_getCharacteristics1(BluetoothRemoteGATTService* self , jb_Any * characteristic);

/**
 * @brief Calls the `getIncludedService` method. 
*/
jb_Promise BluetoothRemoteGATTService_getIncludedService(BluetoothRemoteGATTService* self , jb_Any * service);

/**
 * @brief Calls the `getIncludedServices` method. 
*/
jb_Promise BluetoothRemoteGATTService_getIncludedServices0(BluetoothRemoteGATTService* self );

/**
 * @brief Calls the `getIncludedServices` method. 
*/
jb_Promise BluetoothRemoteGATTService_getIncludedServices1(BluetoothRemoteGATTService* self , jb_Any * service);

/**
 * @brief Gets the `oncharacteristicvaluechanged` property. 
*/
jb_Any BluetoothRemoteGATTService_oncharacteristicvaluechanged(const BluetoothRemoteGATTService *self);

/**
 * @brief Sets the `oncharacteristicvaluechanged` property. 
*/
void BluetoothRemoteGATTService_set_oncharacteristicvaluechanged(BluetoothRemoteGATTService* self, jb_Any * value);

/**
 * @brief Gets the `onserviceadded` property. 
*/
jb_Any BluetoothRemoteGATTService_onserviceadded(const BluetoothRemoteGATTService *self);

/**
 * @brief Sets the `onserviceadded` property. 
*/
void BluetoothRemoteGATTService_set_onserviceadded(BluetoothRemoteGATTService* self, jb_Any * value);

/**
 * @brief Gets the `onservicechanged` property. 
*/
jb_Any BluetoothRemoteGATTService_onservicechanged(const BluetoothRemoteGATTService *self);

/**
 * @brief Sets the `onservicechanged` property. 
*/
void BluetoothRemoteGATTService_set_onservicechanged(BluetoothRemoteGATTService* self, jb_Any * value);

/**
 * @brief Gets the `onserviceremoved` property. 
*/
jb_Any BluetoothRemoteGATTService_onserviceremoved(const BluetoothRemoteGATTService *self);

/**
 * @brief Sets the `onserviceremoved` property. 
*/
void BluetoothRemoteGATTService_set_onserviceremoved(BluetoothRemoteGATTService* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
