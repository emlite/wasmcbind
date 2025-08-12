#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type SerialOptions */
DECLARE_EMLITE_TYPE(SerialOptions, em_Val);

/** @brief Getter of the baudRate property */
unsigned long SerialOptions_baudRate(const SerialOptions *self);

/** @brief Setter of the baudRate property */
void SerialOptions_set_baudRate(SerialOptions* self, unsigned long value);

/** @brief Getter of the dataBits property */
unsigned char SerialOptions_dataBits(const SerialOptions *self);

/** @brief Setter of the dataBits property */
void SerialOptions_set_dataBits(SerialOptions* self, unsigned char value);

/** @brief Getter of the stopBits property */
unsigned char SerialOptions_stopBits(const SerialOptions *self);

/** @brief Setter of the stopBits property */
void SerialOptions_set_stopBits(SerialOptions* self, unsigned char value);

/** @brief Getter of the parity property */
ParityType SerialOptions_parity(const SerialOptions *self);

/** @brief Setter of the parity property */
void SerialOptions_set_parity(SerialOptions* self, ParityType * value);

/** @brief Getter of the bufferSize property */
unsigned long SerialOptions_bufferSize(const SerialOptions *self);

/** @brief Setter of the bufferSize property */
void SerialOptions_set_bufferSize(SerialOptions* self, unsigned long value);

/** @brief Getter of the flowControl property */
FlowControlType SerialOptions_flowControl(const SerialOptions *self);

/** @brief Setter of the flowControl property */
void SerialOptions_set_flowControl(SerialOptions* self, FlowControlType * value);

/** @brief Constructor of the SerialOptions dictionary type */
SerialOptions SerialOptions_new();

#ifdef __cplusplus
}
#endif
