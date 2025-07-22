#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct BaseAudioContext BaseAudioContext;


typedef struct {
  em_Val inner;
} PeriodicWave;


DECLARE_EMLITE_TYPE(PeriodicWave, em_Val);

PeriodicWave PeriodicWave_new(const BaseAudioContext* context);

PeriodicWave PeriodicWave_new(const BaseAudioContext* context, const jb_Any* options);
