#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Algorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AesCbcParams, Algorithm);

jb_Any AesCbcParams_iv(const AesCbcParams *self);

void AesCbcParams_set_iv(AesCbcParams* self, jb_Any * value);

AesCbcParams AesCbcParams_new();

#ifdef __cplusplus
}
#endif
