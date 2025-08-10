#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Algorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RsaPssParams, Algorithm);

unsigned long RsaPssParams_saltLength(const RsaPssParams *self);

void RsaPssParams_set_saltLength(RsaPssParams* self, unsigned long value);

RsaPssParams RsaPssParams_new();

#ifdef __cplusplus
}
#endif
