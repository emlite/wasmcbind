#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CSSMatrixComponentOptions, em_Val);

bool CSSMatrixComponentOptions_is2D(const CSSMatrixComponentOptions *self);

void CSSMatrixComponentOptions_set_is2D(CSSMatrixComponentOptions* self, bool value);

CSSMatrixComponentOptions CSSMatrixComponentOptions_new();

#ifdef __cplusplus
}
#endif
