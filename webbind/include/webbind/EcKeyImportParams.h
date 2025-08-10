#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Algorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(EcKeyImportParams, Algorithm);

jb_Any EcKeyImportParams_namedCurve(const EcKeyImportParams *self);

void EcKeyImportParams_set_namedCurve(EcKeyImportParams* self, jb_Any * value);

EcKeyImportParams EcKeyImportParams_new();

#ifdef __cplusplus
}
#endif
