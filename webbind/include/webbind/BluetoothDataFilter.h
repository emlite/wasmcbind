#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BluetoothDataFilterInit BluetoothDataFilterInit;

DECLARE_EMLITE_TYPE(BluetoothDataFilter, em_Val);

BluetoothDataFilter BluetoothDataFilter_new0();

BluetoothDataFilter BluetoothDataFilter_new1(BluetoothDataFilterInit * init);

jb_ArrayBuffer BluetoothDataFilter_dataPrefix(const BluetoothDataFilter *self);

jb_ArrayBuffer BluetoothDataFilter_mask(const BluetoothDataFilter *self);

#ifdef __cplusplus
}
#endif
