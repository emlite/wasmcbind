#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface BluetoothUUID
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothUUID)
 */
DECLARE_EMLITE_TYPE(BluetoothUUID, em_Val);

/**
 * @brief Calls the `getService` method. 
*/
jb_Any BluetoothUUID_getService(BluetoothUUID* self , jb_Any * name);

/**
 * @brief Calls the `getCharacteristic` method. 
*/
jb_Any BluetoothUUID_getCharacteristic(BluetoothUUID* self , jb_Any * name);

/**
 * @brief Calls the `getDescriptor` method. 
*/
jb_Any BluetoothUUID_getDescriptor(BluetoothUUID* self , jb_Any * name);

/**
 * @brief Calls the `canonicalUUID` method. 
*/
jb_Any BluetoothUUID_canonicalUUID(BluetoothUUID* self , unsigned long alias);

#ifdef __cplusplus
}
#endif
