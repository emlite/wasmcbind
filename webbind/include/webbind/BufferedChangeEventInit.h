#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TimeRanges TimeRanges;

DECLARE_EMLITE_TYPE(BufferedChangeEventInit, EventInit);

TimeRanges BufferedChangeEventInit_addedRanges(const BufferedChangeEventInit *self);

void BufferedChangeEventInit_set_addedRanges(BufferedChangeEventInit* self, TimeRanges * value);

TimeRanges BufferedChangeEventInit_removedRanges(const BufferedChangeEventInit *self);

void BufferedChangeEventInit_set_removedRanges(BufferedChangeEventInit* self, TimeRanges * value);

BufferedChangeEventInit BufferedChangeEventInit_new();

#ifdef __cplusplus
}
#endif
