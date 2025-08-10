#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PeriodicWaveConstraints.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PeriodicWaveOptions, PeriodicWaveConstraints);

jb_Array PeriodicWaveOptions_real(const PeriodicWaveOptions *self);

void PeriodicWaveOptions_set_real(PeriodicWaveOptions* self, jb_Array * value);

jb_Array PeriodicWaveOptions_imag(const PeriodicWaveOptions *self);

void PeriodicWaveOptions_set_imag(PeriodicWaveOptions* self, jb_Array * value);

PeriodicWaveOptions PeriodicWaveOptions_new();

#ifdef __cplusplus
}
#endif
