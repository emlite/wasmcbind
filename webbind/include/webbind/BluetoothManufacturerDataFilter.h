#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} BluetoothManufacturerDataFilter;


DECLARE_EMLITE_TYPE(BluetoothManufacturerDataFilter, em_Val);

BluetoothManufacturerDataFilter BluetoothManufacturerDataFilter_new();

BluetoothManufacturerDataFilter BluetoothManufacturerDataFilter_new(const jb_Object* init);
