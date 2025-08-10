#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BluetoothLEScanFilterInit BluetoothLEScanFilterInit;
typedef struct BluetoothManufacturerDataFilter BluetoothManufacturerDataFilter;
typedef struct BluetoothServiceDataFilter BluetoothServiceDataFilter;

DECLARE_EMLITE_TYPE(BluetoothLEScanFilter, em_Val);

BluetoothLEScanFilter BluetoothLEScanFilter_new0();

BluetoothLEScanFilter BluetoothLEScanFilter_new1(BluetoothLEScanFilterInit * init);

jb_String BluetoothLEScanFilter_name(const BluetoothLEScanFilter *self);

jb_String BluetoothLEScanFilter_namePrefix(const BluetoothLEScanFilter *self);

jb_Array BluetoothLEScanFilter_services(const BluetoothLEScanFilter *self);

BluetoothManufacturerDataFilter BluetoothLEScanFilter_manufacturerData(const BluetoothLEScanFilter *self);

BluetoothServiceDataFilter BluetoothLEScanFilter_serviceData(const BluetoothLEScanFilter *self);

#ifdef __cplusplus
}
#endif
