#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BluetoothDevice BluetoothDevice;
typedef struct RequestDeviceOptions RequestDeviceOptions;
typedef struct BluetoothLEScan BluetoothLEScan;
typedef struct BluetoothLEScanOptions BluetoothLEScanOptions;


/**
 * @brief Interface Bluetooth
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Bluetooth)
 */
DECLARE_EMLITE_TYPE(Bluetooth, EventTarget);

/**
 * @brief Calls the `getAvailability` method. 
*/
jb_Promise Bluetooth_getAvailability(Bluetooth* self );

/**
 * @brief Gets the `onavailabilitychanged` property. 
*/
jb_Any Bluetooth_onavailabilitychanged(const Bluetooth *self);

/**
 * @brief Sets the `onavailabilitychanged` property. 
*/
void Bluetooth_set_onavailabilitychanged(Bluetooth* self, jb_Any * value);

/**
 * @brief Gets the `referringDevice` property. 
*/
BluetoothDevice Bluetooth_referringDevice(const Bluetooth *self);

/**
 * @brief Calls the `getDevices` method. 
*/
jb_Promise Bluetooth_getDevices(Bluetooth* self );

/**
 * @brief Calls the `requestDevice` method. 
*/
jb_Promise Bluetooth_requestDevice0(Bluetooth* self );

/**
 * @brief Calls the `requestDevice` method. 
*/
jb_Promise Bluetooth_requestDevice1(Bluetooth* self , RequestDeviceOptions * options);

/**
 * @brief Calls the `requestLEScan` method. 
*/
jb_Promise Bluetooth_requestLEScan0(Bluetooth* self );

/**
 * @brief Calls the `requestLEScan` method. 
*/
jb_Promise Bluetooth_requestLEScan1(Bluetooth* self , BluetoothLEScanOptions * options);

/**
 * @brief Gets the `onadvertisementreceived` property. 
*/
jb_Any Bluetooth_onadvertisementreceived(const Bluetooth *self);

/**
 * @brief Sets the `onadvertisementreceived` property. 
*/
void Bluetooth_set_onadvertisementreceived(Bluetooth* self, jb_Any * value);

/**
 * @brief Gets the `ongattserverdisconnected` property. 
*/
jb_Any Bluetooth_ongattserverdisconnected(const Bluetooth *self);

/**
 * @brief Sets the `ongattserverdisconnected` property. 
*/
void Bluetooth_set_ongattserverdisconnected(Bluetooth* self, jb_Any * value);

/**
 * @brief Gets the `oncharacteristicvaluechanged` property. 
*/
jb_Any Bluetooth_oncharacteristicvaluechanged(const Bluetooth *self);

/**
 * @brief Sets the `oncharacteristicvaluechanged` property. 
*/
void Bluetooth_set_oncharacteristicvaluechanged(Bluetooth* self, jb_Any * value);

/**
 * @brief Gets the `onserviceadded` property. 
*/
jb_Any Bluetooth_onserviceadded(const Bluetooth *self);

/**
 * @brief Sets the `onserviceadded` property. 
*/
void Bluetooth_set_onserviceadded(Bluetooth* self, jb_Any * value);

/**
 * @brief Gets the `onservicechanged` property. 
*/
jb_Any Bluetooth_onservicechanged(const Bluetooth *self);

/**
 * @brief Sets the `onservicechanged` property. 
*/
void Bluetooth_set_onservicechanged(Bluetooth* self, jb_Any * value);

/**
 * @brief Gets the `onserviceremoved` property. 
*/
jb_Any Bluetooth_onserviceremoved(const Bluetooth *self);

/**
 * @brief Sets the `onserviceremoved` property. 
*/
void Bluetooth_set_onserviceremoved(Bluetooth* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
