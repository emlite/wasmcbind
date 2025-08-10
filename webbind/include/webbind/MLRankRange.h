#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLRankRange, em_Val);

unsigned long MLRankRange_min(const MLRankRange *self);

void MLRankRange_set_min(MLRankRange* self, unsigned long value);

unsigned long MLRankRange_max(const MLRankRange *self);

void MLRankRange_set_max(MLRankRange* self, unsigned long value);

MLRankRange MLRankRange_new();

#ifdef __cplusplus
}
#endif
