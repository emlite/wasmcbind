#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "BluetoothDataFilterInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type BluetoothServiceDataFilterInit */
DECLARE_EMLITE_TYPE(BluetoothServiceDataFilterInit, BluetoothDataFilterInit);

/** @brief Getter of the service property */
jb_Any BluetoothServiceDataFilterInit_service(const BluetoothServiceDataFilterInit *self);

/** @brief Setter of the service property */
void BluetoothServiceDataFilterInit_set_service(BluetoothServiceDataFilterInit* self, jb_Any * value);

/** @brief Constructor of the BluetoothServiceDataFilterInit dictionary type */
BluetoothServiceDataFilterInit BluetoothServiceDataFilterInit_new();

#ifdef __cplusplus
}
#endif
