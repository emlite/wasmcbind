#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "DoubleRange.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ConstrainDoubleRange, DoubleRange);

double ConstrainDoubleRange_exact(const ConstrainDoubleRange *self);

void ConstrainDoubleRange_set_exact(ConstrainDoubleRange* self, double value);

double ConstrainDoubleRange_ideal(const ConstrainDoubleRange *self);

void ConstrainDoubleRange_set_ideal(ConstrainDoubleRange* self, double value);

ConstrainDoubleRange ConstrainDoubleRange_new();

#ifdef __cplusplus
}
#endif
