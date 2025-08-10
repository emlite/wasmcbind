#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLScatterOptions, MLOperatorOptions);

unsigned long MLScatterOptions_axis(const MLScatterOptions *self);

void MLScatterOptions_set_axis(MLScatterOptions* self, unsigned long value);

MLScatterOptions MLScatterOptions_new();

#ifdef __cplusplus
}
#endif
