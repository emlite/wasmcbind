#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ULongRange.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ConstrainULongRange, ULongRange);

unsigned long ConstrainULongRange_exact(const ConstrainULongRange *self);

void ConstrainULongRange_set_exact(ConstrainULongRange* self, unsigned long value);

unsigned long ConstrainULongRange_ideal(const ConstrainULongRange *self);

void ConstrainULongRange_set_ideal(ConstrainULongRange* self, unsigned long value);

ConstrainULongRange ConstrainULongRange_new();

#ifdef __cplusplus
}
#endif
