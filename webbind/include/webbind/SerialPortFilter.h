#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(SerialPortFilter, em_Val);

unsigned short SerialPortFilter_usbVendorId(const SerialPortFilter *self);

void SerialPortFilter_set_usbVendorId(SerialPortFilter* self, unsigned short value);

unsigned short SerialPortFilter_usbProductId(const SerialPortFilter *self);

void SerialPortFilter_set_usbProductId(SerialPortFilter* self, unsigned short value);

jb_Any SerialPortFilter_bluetoothServiceClassId(const SerialPortFilter *self);

void SerialPortFilter_set_bluetoothServiceClassId(SerialPortFilter* self, jb_Any * value);

SerialPortFilter SerialPortFilter_new();

#ifdef __cplusplus
}
#endif
