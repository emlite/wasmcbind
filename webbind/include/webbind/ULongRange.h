#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ULongRange, em_Val);

unsigned long ULongRange_max(const ULongRange *self);

void ULongRange_set_max(ULongRange* self, unsigned long value);

unsigned long ULongRange_min(const ULongRange *self);

void ULongRange_set_min(ULongRange* self, unsigned long value);

ULongRange ULongRange_new();

#ifdef __cplusplus
}
#endif
