#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Element Element;

DECLARE_EMLITE_TYPE(ScrollTimelineOptions, em_Val);

Element ScrollTimelineOptions_source(const ScrollTimelineOptions *self);

void ScrollTimelineOptions_set_source(ScrollTimelineOptions* self, Element * value);

ScrollAxis ScrollTimelineOptions_axis(const ScrollTimelineOptions *self);

void ScrollTimelineOptions_set_axis(ScrollTimelineOptions* self, ScrollAxis * value);

ScrollTimelineOptions ScrollTimelineOptions_new();

#ifdef __cplusplus
}
#endif
