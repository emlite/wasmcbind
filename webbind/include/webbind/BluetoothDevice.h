#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BluetoothRemoteGATTServer BluetoothRemoteGATTServer;
typedef struct WatchAdvertisementsOptions WatchAdvertisementsOptions;


/**
 * @brief Interface BluetoothDevice
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothDevice)
 */
DECLARE_EMLITE_TYPE(BluetoothDevice, EventTarget);

/**
 * @brief Gets the `id` property. 
*/
jb_String BluetoothDevice_id(const BluetoothDevice *self);

/**
 * @brief Gets the `name` property. 
*/
jb_String BluetoothDevice_name(const BluetoothDevice *self);

/**
 * @brief Gets the `gatt` property. 
*/
BluetoothRemoteGATTServer BluetoothDevice_gatt(const BluetoothDevice *self);

/**
 * @brief Calls the `forget` method. 
*/
jb_Promise BluetoothDevice_forget(BluetoothDevice* self );

/**
 * @brief Calls the `watchAdvertisements` method. 
*/
jb_Promise BluetoothDevice_watchAdvertisements0(BluetoothDevice* self );

/**
 * @brief Calls the `watchAdvertisements` method. 
*/
jb_Promise BluetoothDevice_watchAdvertisements1(BluetoothDevice* self , WatchAdvertisementsOptions * options);

/**
 * @brief Gets the `watchingAdvertisements` property. 
*/
bool BluetoothDevice_watchingAdvertisements(const BluetoothDevice *self);

/**
 * @brief Gets the `onadvertisementreceived` property. 
*/
jb_Any BluetoothDevice_onadvertisementreceived(const BluetoothDevice *self);

/**
 * @brief Sets the `onadvertisementreceived` property. 
*/
void BluetoothDevice_set_onadvertisementreceived(BluetoothDevice* self, jb_Any * value);

/**
 * @brief Gets the `ongattserverdisconnected` property. 
*/
jb_Any BluetoothDevice_ongattserverdisconnected(const BluetoothDevice *self);

/**
 * @brief Sets the `ongattserverdisconnected` property. 
*/
void BluetoothDevice_set_ongattserverdisconnected(BluetoothDevice* self, jb_Any * value);

/**
 * @brief Gets the `oncharacteristicvaluechanged` property. 
*/
jb_Any BluetoothDevice_oncharacteristicvaluechanged(const BluetoothDevice *self);

/**
 * @brief Sets the `oncharacteristicvaluechanged` property. 
*/
void BluetoothDevice_set_oncharacteristicvaluechanged(BluetoothDevice* self, jb_Any * value);

/**
 * @brief Gets the `onserviceadded` property. 
*/
jb_Any BluetoothDevice_onserviceadded(const BluetoothDevice *self);

/**
 * @brief Sets the `onserviceadded` property. 
*/
void BluetoothDevice_set_onserviceadded(BluetoothDevice* self, jb_Any * value);

/**
 * @brief Gets the `onservicechanged` property. 
*/
jb_Any BluetoothDevice_onservicechanged(const BluetoothDevice *self);

/**
 * @brief Sets the `onservicechanged` property. 
*/
void BluetoothDevice_set_onservicechanged(BluetoothDevice* self, jb_Any * value);

/**
 * @brief Gets the `onserviceremoved` property. 
*/
jb_Any BluetoothDevice_onserviceremoved(const BluetoothDevice *self);

/**
 * @brief Sets the `onserviceremoved` property. 
*/
void BluetoothDevice_set_onserviceremoved(BluetoothDevice* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
