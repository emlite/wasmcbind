#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Algorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(EcKeyGenParams, Algorithm);

jb_Any EcKeyGenParams_namedCurve(const EcKeyGenParams *self);

void EcKeyGenParams_set_namedCurve(EcKeyGenParams* self, jb_Any * value);

EcKeyGenParams EcKeyGenParams_new();

#ifdef __cplusplus
}
#endif
