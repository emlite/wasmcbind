#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} BluetoothDataFilter;


DECLARE_EMLITE_TYPE(BluetoothDataFilter, em_Val);

BluetoothDataFilter BluetoothDataFilter_new();

BluetoothDataFilter BluetoothDataFilter_new(const jb_Any* init);

jb_ArrayBuffer BluetoothDataFilter_dataPrefix( const BluetoothDataFilter *self);

jb_ArrayBuffer BluetoothDataFilter_mask( const BluetoothDataFilter *self);
