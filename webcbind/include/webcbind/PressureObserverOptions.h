#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PressureObserverOptions */
DECLARE_EMLITE_TYPE(PressureObserverOptions, em_Val);

/** @brief Getter of the sampleInterval property */
unsigned long PressureObserverOptions_sampleInterval(const PressureObserverOptions *self);

/** @brief Setter of the sampleInterval property */
void PressureObserverOptions_set_sampleInterval(PressureObserverOptions* self, unsigned long value);

/** @brief Constructor of the PressureObserverOptions dictionary type */
PressureObserverOptions PressureObserverOptions_new();

#ifdef __cplusplus
}
#endif
