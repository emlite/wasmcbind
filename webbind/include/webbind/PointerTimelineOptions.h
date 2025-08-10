#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Element Element;

DECLARE_EMLITE_TYPE(PointerTimelineOptions, em_Val);

Element PointerTimelineOptions_source(const PointerTimelineOptions *self);

void PointerTimelineOptions_set_source(PointerTimelineOptions* self, Element * value);

PointerAxis PointerTimelineOptions_axis(const PointerTimelineOptions *self);

void PointerTimelineOptions_set_axis(PointerTimelineOptions* self, PointerAxis * value);

PointerTimelineOptions PointerTimelineOptions_new();

#ifdef __cplusplus
}
#endif
