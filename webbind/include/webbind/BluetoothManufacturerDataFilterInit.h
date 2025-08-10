#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "BluetoothDataFilterInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(BluetoothManufacturerDataFilterInit, BluetoothDataFilterInit);

unsigned short BluetoothManufacturerDataFilterInit_companyIdentifier(const BluetoothManufacturerDataFilterInit *self);

void BluetoothManufacturerDataFilterInit_set_companyIdentifier(BluetoothManufacturerDataFilterInit* self, unsigned short value);

BluetoothManufacturerDataFilterInit BluetoothManufacturerDataFilterInit_new();

#ifdef __cplusplus
}
#endif
