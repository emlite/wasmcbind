#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Algorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AesDerivedKeyParams, Algorithm);

unsigned short AesDerivedKeyParams_length(const AesDerivedKeyParams *self);

void AesDerivedKeyParams_set_length(AesDerivedKeyParams* self, unsigned short value);

AesDerivedKeyParams AesDerivedKeyParams_new();

#ifdef __cplusplus
}
#endif
