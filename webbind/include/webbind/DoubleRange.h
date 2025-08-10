#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(DoubleRange, em_Val);

double DoubleRange_max(const DoubleRange *self);

void DoubleRange_set_max(DoubleRange* self, double value);

double DoubleRange_min(const DoubleRange *self);

void DoubleRange_set_min(DoubleRange* self, double value);

DoubleRange DoubleRange_new();

#ifdef __cplusplus
}
#endif
