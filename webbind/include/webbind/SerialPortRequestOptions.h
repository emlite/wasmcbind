#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SerialPortFilter.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(SerialPortRequestOptions, em_Val);

jb_Array SerialPortRequestOptions_filters(const SerialPortRequestOptions *self);

void SerialPortRequestOptions_set_filters(SerialPortRequestOptions* self, jb_Array * value);

jb_Array SerialPortRequestOptions_allowedBluetoothServiceClassIds(const SerialPortRequestOptions *self);

void SerialPortRequestOptions_set_allowedBluetoothServiceClassIds(SerialPortRequestOptions* self, jb_Array * value);

SerialPortRequestOptions SerialPortRequestOptions_new();

#ifdef __cplusplus
}
#endif
