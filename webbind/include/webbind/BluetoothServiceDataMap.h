#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} BluetoothServiceDataMap;


DECLARE_EMLITE_TYPE(BluetoothServiceDataMap, em_Val);
