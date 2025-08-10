#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(SerialInputSignals, em_Val);

bool SerialInputSignals_dataCarrierDetect(const SerialInputSignals *self);

void SerialInputSignals_set_dataCarrierDetect(SerialInputSignals* self, bool value);

bool SerialInputSignals_clearToSend(const SerialInputSignals *self);

void SerialInputSignals_set_clearToSend(SerialInputSignals* self, bool value);

bool SerialInputSignals_ringIndicator(const SerialInputSignals *self);

void SerialInputSignals_set_ringIndicator(SerialInputSignals* self, bool value);

bool SerialInputSignals_dataSetReady(const SerialInputSignals *self);

void SerialInputSignals_set_dataSetReady(SerialInputSignals* self, bool value);

SerialInputSignals SerialInputSignals_new();

#ifdef __cplusplus
}
#endif
