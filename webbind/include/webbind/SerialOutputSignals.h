#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(SerialOutputSignals, em_Val);

bool SerialOutputSignals_dataTerminalReady(const SerialOutputSignals *self);

void SerialOutputSignals_set_dataTerminalReady(SerialOutputSignals* self, bool value);

bool SerialOutputSignals_requestToSend(const SerialOutputSignals *self);

void SerialOutputSignals_set_requestToSend(SerialOutputSignals* self, bool value);

bool SerialOutputSignals_break_(const SerialOutputSignals *self);

void SerialOutputSignals_set_break_(SerialOutputSignals* self, bool value);

SerialOutputSignals SerialOutputSignals_new();

#ifdef __cplusplus
}
#endif
