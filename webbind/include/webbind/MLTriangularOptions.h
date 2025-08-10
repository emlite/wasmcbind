#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLTriangularOptions, MLOperatorOptions);

bool MLTriangularOptions_upper(const MLTriangularOptions *self);

void MLTriangularOptions_set_upper(MLTriangularOptions* self, bool value);

long MLTriangularOptions_diagonal(const MLTriangularOptions *self);

void MLTriangularOptions_set_diagonal(MLTriangularOptions* self, long value);

MLTriangularOptions MLTriangularOptions_new();

#ifdef __cplusplus
}
#endif
