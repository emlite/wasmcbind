#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(IntrinsicSizesResultOptions, em_Val);

double IntrinsicSizesResultOptions_maxContentSize(const IntrinsicSizesResultOptions *self);

void IntrinsicSizesResultOptions_set_maxContentSize(IntrinsicSizesResultOptions* self, double value);

double IntrinsicSizesResultOptions_minContentSize(const IntrinsicSizesResultOptions *self);

void IntrinsicSizesResultOptions_set_minContentSize(IntrinsicSizesResultOptions* self, double value);

IntrinsicSizesResultOptions IntrinsicSizesResultOptions_new();

#ifdef __cplusplus
}
#endif
