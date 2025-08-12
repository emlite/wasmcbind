#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type SerialInputSignals */
DECLARE_EMLITE_TYPE(SerialInputSignals, em_Val);

/** @brief Getter of the dataCarrierDetect property */
bool SerialInputSignals_dataCarrierDetect(const SerialInputSignals *self);

/** @brief Setter of the dataCarrierDetect property */
void SerialInputSignals_set_dataCarrierDetect(SerialInputSignals* self, bool value);

/** @brief Getter of the clearToSend property */
bool SerialInputSignals_clearToSend(const SerialInputSignals *self);

/** @brief Setter of the clearToSend property */
void SerialInputSignals_set_clearToSend(SerialInputSignals* self, bool value);

/** @brief Getter of the ringIndicator property */
bool SerialInputSignals_ringIndicator(const SerialInputSignals *self);

/** @brief Setter of the ringIndicator property */
void SerialInputSignals_set_ringIndicator(SerialInputSignals* self, bool value);

/** @brief Getter of the dataSetReady property */
bool SerialInputSignals_dataSetReady(const SerialInputSignals *self);

/** @brief Setter of the dataSetReady property */
void SerialInputSignals_set_dataSetReady(SerialInputSignals* self, bool value);

/** @brief Constructor of the SerialInputSignals dictionary type */
SerialInputSignals SerialInputSignals_new();

#ifdef __cplusplus
}
#endif
