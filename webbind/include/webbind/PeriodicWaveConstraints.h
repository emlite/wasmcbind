#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PeriodicWaveConstraints, em_Val);

bool PeriodicWaveConstraints_disableNormalization(const PeriodicWaveConstraints *self);

void PeriodicWaveConstraints_set_disableNormalization(PeriodicWaveConstraints* self, bool value);

PeriodicWaveConstraints PeriodicWaveConstraints_new();

#ifdef __cplusplus
}
#endif
