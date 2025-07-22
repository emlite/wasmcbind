#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct BaseAudioContext BaseAudioContext;


DECLARE_EMLITE_TYPE(PeriodicWave, em_Val);

PeriodicWave PeriodicWave_new0(BaseAudioContext * context);

PeriodicWave PeriodicWave_new1(BaseAudioContext * context, jb_Any * options);
