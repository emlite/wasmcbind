#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "RTCMediaSourceStats.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCAudioSourceStats */
DECLARE_EMLITE_TYPE(RTCAudioSourceStats, RTCMediaSourceStats);

/** @brief Getter of the audioLevel property */
double RTCAudioSourceStats_audioLevel(const RTCAudioSourceStats *self);

/** @brief Setter of the audioLevel property */
void RTCAudioSourceStats_set_audioLevel(RTCAudioSourceStats* self, double value);

/** @brief Getter of the totalAudioEnergy property */
double RTCAudioSourceStats_totalAudioEnergy(const RTCAudioSourceStats *self);

/** @brief Setter of the totalAudioEnergy property */
void RTCAudioSourceStats_set_totalAudioEnergy(RTCAudioSourceStats* self, double value);

/** @brief Getter of the totalSamplesDuration property */
double RTCAudioSourceStats_totalSamplesDuration(const RTCAudioSourceStats *self);

/** @brief Setter of the totalSamplesDuration property */
void RTCAudioSourceStats_set_totalSamplesDuration(RTCAudioSourceStats* self, double value);

/** @brief Getter of the echoReturnLoss property */
double RTCAudioSourceStats_echoReturnLoss(const RTCAudioSourceStats *self);

/** @brief Setter of the echoReturnLoss property */
void RTCAudioSourceStats_set_echoReturnLoss(RTCAudioSourceStats* self, double value);

/** @brief Getter of the echoReturnLossEnhancement property */
double RTCAudioSourceStats_echoReturnLossEnhancement(const RTCAudioSourceStats *self);

/** @brief Setter of the echoReturnLossEnhancement property */
void RTCAudioSourceStats_set_echoReturnLossEnhancement(RTCAudioSourceStats* self, double value);

/** @brief Constructor of the RTCAudioSourceStats dictionary type */
RTCAudioSourceStats RTCAudioSourceStats_new();

#ifdef __cplusplus
}
#endif
