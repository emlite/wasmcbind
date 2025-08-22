#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "RTCStats.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCAudioPlayoutStats */
DECLARE_EMLITE_TYPE(RTCAudioPlayoutStats, RTCStats);

/** @brief Getter of the kind property */
jb_String RTCAudioPlayoutStats_kind(const RTCAudioPlayoutStats *self);

/** @brief Setter of the kind property */
void RTCAudioPlayoutStats_set_kind(RTCAudioPlayoutStats* self, jb_String * value);

/** @brief Getter of the synthesizedSamplesDuration property */
double RTCAudioPlayoutStats_synthesizedSamplesDuration(const RTCAudioPlayoutStats *self);

/** @brief Setter of the synthesizedSamplesDuration property */
void RTCAudioPlayoutStats_set_synthesizedSamplesDuration(RTCAudioPlayoutStats* self, double value);

/** @brief Getter of the synthesizedSamplesEvents property */
unsigned long RTCAudioPlayoutStats_synthesizedSamplesEvents(const RTCAudioPlayoutStats *self);

/** @brief Setter of the synthesizedSamplesEvents property */
void RTCAudioPlayoutStats_set_synthesizedSamplesEvents(RTCAudioPlayoutStats* self, unsigned long value);

/** @brief Getter of the totalSamplesDuration property */
double RTCAudioPlayoutStats_totalSamplesDuration(const RTCAudioPlayoutStats *self);

/** @brief Setter of the totalSamplesDuration property */
void RTCAudioPlayoutStats_set_totalSamplesDuration(RTCAudioPlayoutStats* self, double value);

/** @brief Getter of the totalPlayoutDelay property */
double RTCAudioPlayoutStats_totalPlayoutDelay(const RTCAudioPlayoutStats *self);

/** @brief Setter of the totalPlayoutDelay property */
void RTCAudioPlayoutStats_set_totalPlayoutDelay(RTCAudioPlayoutStats* self, double value);

/** @brief Getter of the totalSamplesCount property */
long long RTCAudioPlayoutStats_totalSamplesCount(const RTCAudioPlayoutStats *self);

/** @brief Setter of the totalSamplesCount property */
void RTCAudioPlayoutStats_set_totalSamplesCount(RTCAudioPlayoutStats* self, long long value);

/** @brief Constructor of the RTCAudioPlayoutStats dictionary type */
RTCAudioPlayoutStats RTCAudioPlayoutStats_new();

#ifdef __cplusplus
}
#endif
