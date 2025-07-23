#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(BluetoothDataFilter, em_Val);

BluetoothDataFilter BluetoothDataFilter_new0();

BluetoothDataFilter BluetoothDataFilter_new1(jb_Any * init);

jb_ArrayBuffer BluetoothDataFilter_dataPrefix(const BluetoothDataFilter *self);

jb_ArrayBuffer BluetoothDataFilter_mask(const BluetoothDataFilter *self);
