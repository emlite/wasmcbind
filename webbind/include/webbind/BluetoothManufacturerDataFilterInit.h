#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "BluetoothDataFilterInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type BluetoothManufacturerDataFilterInit */
DECLARE_EMLITE_TYPE(BluetoothManufacturerDataFilterInit, BluetoothDataFilterInit);

/** @brief Getter of the companyIdentifier property */
unsigned short BluetoothManufacturerDataFilterInit_companyIdentifier(const BluetoothManufacturerDataFilterInit *self);

/** @brief Setter of the companyIdentifier property */
void BluetoothManufacturerDataFilterInit_set_companyIdentifier(BluetoothManufacturerDataFilterInit* self, unsigned short value);

/** @brief Constructor of the BluetoothManufacturerDataFilterInit dictionary type */
BluetoothManufacturerDataFilterInit BluetoothManufacturerDataFilterInit_new();

#ifdef __cplusplus
}
#endif
