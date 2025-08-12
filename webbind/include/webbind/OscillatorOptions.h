#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNodeOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PeriodicWave PeriodicWave;

/** @brief Dictionary type OscillatorOptions */
DECLARE_EMLITE_TYPE(OscillatorOptions, AudioNodeOptions);

/** @brief Getter of the type property */
OscillatorType OscillatorOptions_type(const OscillatorOptions *self);

/** @brief Setter of the type property */
void OscillatorOptions_set_type(OscillatorOptions* self, OscillatorType * value);

/** @brief Getter of the frequency property */
float OscillatorOptions_frequency(const OscillatorOptions *self);

/** @brief Setter of the frequency property */
void OscillatorOptions_set_frequency(OscillatorOptions* self, float value);

/** @brief Getter of the detune property */
float OscillatorOptions_detune(const OscillatorOptions *self);

/** @brief Setter of the detune property */
void OscillatorOptions_set_detune(OscillatorOptions* self, float value);

/** @brief Getter of the periodicWave property */
PeriodicWave OscillatorOptions_periodicWave(const OscillatorOptions *self);

/** @brief Setter of the periodicWave property */
void OscillatorOptions_set_periodicWave(OscillatorOptions* self, PeriodicWave * value);

/** @brief Constructor of the OscillatorOptions dictionary type */
OscillatorOptions OscillatorOptions_new();

#ifdef __cplusplus
}
#endif
