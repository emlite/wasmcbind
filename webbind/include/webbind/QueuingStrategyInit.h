#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(QueuingStrategyInit, em_Val);

double QueuingStrategyInit_highWaterMark(const QueuingStrategyInit *self);

void QueuingStrategyInit_set_highWaterMark(QueuingStrategyInit* self, double value);

QueuingStrategyInit QueuingStrategyInit_new();

#ifdef __cplusplus
}
#endif
