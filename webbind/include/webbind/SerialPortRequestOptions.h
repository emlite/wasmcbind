#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SerialPortFilter.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type SerialPortRequestOptions */
DECLARE_EMLITE_TYPE(SerialPortRequestOptions, em_Val);

/** @brief Getter of the filters property */
jb_Array SerialPortRequestOptions_filters(const SerialPortRequestOptions *self);

/** @brief Setter of the filters property */
void SerialPortRequestOptions_set_filters(SerialPortRequestOptions* self, jb_Array * value);

/** @brief Getter of the allowedBluetoothServiceClassIds property */
jb_Array SerialPortRequestOptions_allowedBluetoothServiceClassIds(const SerialPortRequestOptions *self);

/** @brief Setter of the allowedBluetoothServiceClassIds property */
void SerialPortRequestOptions_set_allowedBluetoothServiceClassIds(SerialPortRequestOptions* self, jb_Array * value);

/** @brief Constructor of the SerialPortRequestOptions dictionary type */
SerialPortRequestOptions SerialPortRequestOptions_new();

#ifdef __cplusplus
}
#endif
