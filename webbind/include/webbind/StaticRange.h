#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AbstractRange.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct StaticRangeInit StaticRangeInit;

DECLARE_EMLITE_TYPE(StaticRange, AbstractRange);

StaticRange StaticRange_new(StaticRangeInit * init);

#ifdef __cplusplus
}
#endif
