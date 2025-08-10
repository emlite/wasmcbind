#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BaseAudioContext BaseAudioContext;
typedef struct PeriodicWaveOptions PeriodicWaveOptions;

DECLARE_EMLITE_TYPE(PeriodicWave, em_Val);

PeriodicWave PeriodicWave_new0(BaseAudioContext * context);

PeriodicWave PeriodicWave_new1(BaseAudioContext * context, PeriodicWaveOptions * options);

#ifdef __cplusplus
}
#endif
