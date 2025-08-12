#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type BluetoothDataFilterInit */
DECLARE_EMLITE_TYPE(BluetoothDataFilterInit, em_Val);

/** @brief Getter of the dataPrefix property */
jb_Any BluetoothDataFilterInit_dataPrefix(const BluetoothDataFilterInit *self);

/** @brief Setter of the dataPrefix property */
void BluetoothDataFilterInit_set_dataPrefix(BluetoothDataFilterInit* self, jb_Any * value);

/** @brief Getter of the mask property */
jb_Any BluetoothDataFilterInit_mask(const BluetoothDataFilterInit *self);

/** @brief Setter of the mask property */
void BluetoothDataFilterInit_set_mask(BluetoothDataFilterInit* self, jb_Any * value);

/** @brief Constructor of the BluetoothDataFilterInit dictionary type */
BluetoothDataFilterInit BluetoothDataFilterInit_new();

#ifdef __cplusplus
}
#endif
