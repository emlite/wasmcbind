#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(SerialPortInfo, em_Val);

unsigned short SerialPortInfo_usbVendorId(const SerialPortInfo *self);

void SerialPortInfo_set_usbVendorId(SerialPortInfo* self, unsigned short value);

unsigned short SerialPortInfo_usbProductId(const SerialPortInfo *self);

void SerialPortInfo_set_usbProductId(SerialPortInfo* self, unsigned short value);

jb_Any SerialPortInfo_bluetoothServiceClassId(const SerialPortInfo *self);

void SerialPortInfo_set_bluetoothServiceClassId(SerialPortInfo* self, jb_Any * value);

SerialPortInfo SerialPortInfo_new();

#ifdef __cplusplus
}
#endif
