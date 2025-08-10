#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Algorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(EcdsaParams, Algorithm);

jb_Any EcdsaParams_hash(const EcdsaParams *self);

void EcdsaParams_set_hash(EcdsaParams* self, jb_Any * value);

EcdsaParams EcdsaParams_new();

#ifdef __cplusplus
}
#endif
