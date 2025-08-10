#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "KeyAlgorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(EcKeyAlgorithm, KeyAlgorithm);

jb_Any EcKeyAlgorithm_namedCurve(const EcKeyAlgorithm *self);

void EcKeyAlgorithm_set_namedCurve(EcKeyAlgorithm* self, jb_Any * value);

EcKeyAlgorithm EcKeyAlgorithm_new();

#ifdef __cplusplus
}
#endif
