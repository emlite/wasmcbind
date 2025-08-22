#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type SerialOutputSignals */
DECLARE_EMLITE_TYPE(SerialOutputSignals, em_Val);

/** @brief Getter of the dataTerminalReady property */
bool SerialOutputSignals_dataTerminalReady(const SerialOutputSignals *self);

/** @brief Setter of the dataTerminalReady property */
void SerialOutputSignals_set_dataTerminalReady(SerialOutputSignals* self, bool value);

/** @brief Getter of the requestToSend property */
bool SerialOutputSignals_requestToSend(const SerialOutputSignals *self);

/** @brief Setter of the requestToSend property */
void SerialOutputSignals_set_requestToSend(SerialOutputSignals* self, bool value);

/** @brief Getter of the break property */
bool SerialOutputSignals_break_(const SerialOutputSignals *self);

/** @brief Setter of the break property */
void SerialOutputSignals_set_break_(SerialOutputSignals* self, bool value);

/** @brief Constructor of the SerialOutputSignals dictionary type */
SerialOutputSignals SerialOutputSignals_new();

#ifdef __cplusplus
}
#endif
