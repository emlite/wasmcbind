#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type SerialPortFilter */
DECLARE_EMLITE_TYPE(SerialPortFilter, em_Val);

/** @brief Getter of the usbVendorId property */
unsigned short SerialPortFilter_usbVendorId(const SerialPortFilter *self);

/** @brief Setter of the usbVendorId property */
void SerialPortFilter_set_usbVendorId(SerialPortFilter* self, unsigned short value);

/** @brief Getter of the usbProductId property */
unsigned short SerialPortFilter_usbProductId(const SerialPortFilter *self);

/** @brief Setter of the usbProductId property */
void SerialPortFilter_set_usbProductId(SerialPortFilter* self, unsigned short value);

/** @brief Getter of the bluetoothServiceClassId property */
jb_Any SerialPortFilter_bluetoothServiceClassId(const SerialPortFilter *self);

/** @brief Setter of the bluetoothServiceClassId property */
void SerialPortFilter_set_bluetoothServiceClassId(SerialPortFilter* self, jb_Any * value);

/** @brief Constructor of the SerialPortFilter dictionary type */
SerialPortFilter SerialPortFilter_new();

#ifdef __cplusplus
}
#endif
