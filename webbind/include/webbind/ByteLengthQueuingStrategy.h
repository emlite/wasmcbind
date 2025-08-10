#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct QueuingStrategyInit QueuingStrategyInit;

DECLARE_EMLITE_TYPE(ByteLengthQueuingStrategy, em_Val);

ByteLengthQueuingStrategy ByteLengthQueuingStrategy_new(QueuingStrategyInit * init);

double ByteLengthQueuingStrategy_highWaterMark(const ByteLengthQueuingStrategy *self);

jb_Function ByteLengthQueuingStrategy_size(const ByteLengthQueuingStrategy *self);

#ifdef __cplusplus
}
#endif
