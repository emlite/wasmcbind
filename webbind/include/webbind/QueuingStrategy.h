#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(QueuingStrategy, em_Val);

double QueuingStrategy_highWaterMark(const QueuingStrategy *self);

void QueuingStrategy_set_highWaterMark(QueuingStrategy* self, double value);

jb_Function QueuingStrategy_size(const QueuingStrategy *self);

void QueuingStrategy_set_size(QueuingStrategy* self, jb_Function * value);

QueuingStrategy QueuingStrategy_new();

#ifdef __cplusplus
}
#endif
