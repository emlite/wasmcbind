#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLGatherOptions, MLOperatorOptions);

unsigned long MLGatherOptions_axis(const MLGatherOptions *self);

void MLGatherOptions_set_axis(MLGatherOptions* self, unsigned long value);

MLGatherOptions MLGatherOptions_new();

#ifdef __cplusplus
}
#endif
