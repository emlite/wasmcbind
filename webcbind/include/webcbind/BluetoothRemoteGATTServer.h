#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BluetoothDevice BluetoothDevice;
typedef struct BluetoothRemoteGATTService BluetoothRemoteGATTService;


/**
 * @brief Interface BluetoothRemoteGATTServer
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTServer)
 */
DECLARE_EMLITE_TYPE(BluetoothRemoteGATTServer, em_Val);

/**
 * @brief Gets the `device` property. 
*/
BluetoothDevice BluetoothRemoteGATTServer_device(const BluetoothRemoteGATTServer *self);

/**
 * @brief Gets the `connected` property. 
*/
bool BluetoothRemoteGATTServer_connected(const BluetoothRemoteGATTServer *self);

/**
 * @brief Calls the `connect` method. 
*/
jb_Promise BluetoothRemoteGATTServer_connect(BluetoothRemoteGATTServer* self );

/**
 * @brief Calls the `disconnect` method. 
*/
jb_Undefined BluetoothRemoteGATTServer_disconnect(BluetoothRemoteGATTServer* self );

/**
 * @brief Calls the `getPrimaryService` method. 
*/
jb_Promise BluetoothRemoteGATTServer_getPrimaryService(BluetoothRemoteGATTServer* self , jb_Any * service);

/**
 * @brief Calls the `getPrimaryServices` method. 
*/
jb_Promise BluetoothRemoteGATTServer_getPrimaryServices0(BluetoothRemoteGATTServer* self );

/**
 * @brief Calls the `getPrimaryServices` method. 
*/
jb_Promise BluetoothRemoteGATTServer_getPrimaryServices1(BluetoothRemoteGATTServer* self , jb_Any * service);

#ifdef __cplusplus
}
#endif
