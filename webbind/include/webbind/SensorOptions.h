#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type SensorOptions */
DECLARE_EMLITE_TYPE(SensorOptions, em_Val);

/** @brief Getter of the frequency property */
double SensorOptions_frequency(const SensorOptions *self);

/** @brief Setter of the frequency property */
void SensorOptions_set_frequency(SensorOptions* self, double value);

/** @brief Constructor of the SensorOptions dictionary type */
SensorOptions SensorOptions_new();

#ifdef __cplusplus
}
#endif
