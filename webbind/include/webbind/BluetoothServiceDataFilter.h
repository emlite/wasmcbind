#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} BluetoothServiceDataFilter;


DECLARE_EMLITE_TYPE(BluetoothServiceDataFilter, em_Val);

BluetoothServiceDataFilter BluetoothServiceDataFilter_new();

BluetoothServiceDataFilter BluetoothServiceDataFilter_new(const jb_Object* init);
