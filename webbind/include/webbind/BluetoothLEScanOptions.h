#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "BluetoothLEScanFilterInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type BluetoothLEScanOptions */
DECLARE_EMLITE_TYPE(BluetoothLEScanOptions, em_Val);

/** @brief Getter of the filters property */
jb_Array BluetoothLEScanOptions_filters(const BluetoothLEScanOptions *self);

/** @brief Setter of the filters property */
void BluetoothLEScanOptions_set_filters(BluetoothLEScanOptions* self, jb_Array * value);

/** @brief Getter of the keepRepeatedDevices property */
bool BluetoothLEScanOptions_keepRepeatedDevices(const BluetoothLEScanOptions *self);

/** @brief Setter of the keepRepeatedDevices property */
void BluetoothLEScanOptions_set_keepRepeatedDevices(BluetoothLEScanOptions* self, bool value);

/** @brief Getter of the acceptAllAdvertisements property */
bool BluetoothLEScanOptions_acceptAllAdvertisements(const BluetoothLEScanOptions *self);

/** @brief Setter of the acceptAllAdvertisements property */
void BluetoothLEScanOptions_set_acceptAllAdvertisements(BluetoothLEScanOptions* self, bool value);

/** @brief Constructor of the BluetoothLEScanOptions dictionary type */
BluetoothLEScanOptions BluetoothLEScanOptions_new();

#ifdef __cplusplus
}
#endif
