#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(SerialOptions, em_Val);

unsigned long SerialOptions_baudRate(const SerialOptions *self);

void SerialOptions_set_baudRate(SerialOptions* self, unsigned long value);

unsigned char SerialOptions_dataBits(const SerialOptions *self);

void SerialOptions_set_dataBits(SerialOptions* self, unsigned char value);

unsigned char SerialOptions_stopBits(const SerialOptions *self);

void SerialOptions_set_stopBits(SerialOptions* self, unsigned char value);

ParityType SerialOptions_parity(const SerialOptions *self);

void SerialOptions_set_parity(SerialOptions* self, ParityType * value);

unsigned long SerialOptions_bufferSize(const SerialOptions *self);

void SerialOptions_set_bufferSize(SerialOptions* self, unsigned long value);

FlowControlType SerialOptions_flowControl(const SerialOptions *self);

void SerialOptions_set_flowControl(SerialOptions* self, FlowControlType * value);

SerialOptions SerialOptions_new();

#ifdef __cplusplus
}
#endif
