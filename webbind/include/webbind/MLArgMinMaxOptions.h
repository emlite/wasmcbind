#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLArgMinMaxOptions, MLOperatorOptions);

bool MLArgMinMaxOptions_keepDimensions(const MLArgMinMaxOptions *self);

void MLArgMinMaxOptions_set_keepDimensions(MLArgMinMaxOptions* self, bool value);

MLOperandDataType MLArgMinMaxOptions_outputDataType(const MLArgMinMaxOptions *self);

void MLArgMinMaxOptions_set_outputDataType(MLArgMinMaxOptions* self, MLOperandDataType * value);

MLArgMinMaxOptions MLArgMinMaxOptions_new();

#ifdef __cplusplus
}
#endif
