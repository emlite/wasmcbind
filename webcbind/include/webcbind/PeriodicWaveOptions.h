#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "PeriodicWaveConstraints.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PeriodicWaveOptions */
DECLARE_EMLITE_TYPE(PeriodicWaveOptions, PeriodicWaveConstraints);

/** @brief Getter of the real property */
jb_Array PeriodicWaveOptions_real(const PeriodicWaveOptions *self);

/** @brief Setter of the real property */
void PeriodicWaveOptions_set_real(PeriodicWaveOptions* self, jb_Array * value);

/** @brief Getter of the imag property */
jb_Array PeriodicWaveOptions_imag(const PeriodicWaveOptions *self);

/** @brief Setter of the imag property */
void PeriodicWaveOptions_set_imag(PeriodicWaveOptions* self, jb_Array * value);

/** @brief Constructor of the PeriodicWaveOptions dictionary type */
PeriodicWaveOptions PeriodicWaveOptions_new();

#ifdef __cplusplus
}
#endif
