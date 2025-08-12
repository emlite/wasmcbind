#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type SerialPortInfo */
DECLARE_EMLITE_TYPE(SerialPortInfo, em_Val);

/** @brief Getter of the usbVendorId property */
unsigned short SerialPortInfo_usbVendorId(const SerialPortInfo *self);

/** @brief Setter of the usbVendorId property */
void SerialPortInfo_set_usbVendorId(SerialPortInfo* self, unsigned short value);

/** @brief Getter of the usbProductId property */
unsigned short SerialPortInfo_usbProductId(const SerialPortInfo *self);

/** @brief Setter of the usbProductId property */
void SerialPortInfo_set_usbProductId(SerialPortInfo* self, unsigned short value);

/** @brief Getter of the bluetoothServiceClassId property */
jb_Any SerialPortInfo_bluetoothServiceClassId(const SerialPortInfo *self);

/** @brief Setter of the bluetoothServiceClassId property */
void SerialPortInfo_set_bluetoothServiceClassId(SerialPortInfo* self, jb_Any * value);

/** @brief Constructor of the SerialPortInfo dictionary type */
SerialPortInfo SerialPortInfo_new();

#ifdef __cplusplus
}
#endif
