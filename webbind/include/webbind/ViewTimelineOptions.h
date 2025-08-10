#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Element Element;

DECLARE_EMLITE_TYPE(ViewTimelineOptions, em_Val);

Element ViewTimelineOptions_subject(const ViewTimelineOptions *self);

void ViewTimelineOptions_set_subject(ViewTimelineOptions* self, Element * value);

ScrollAxis ViewTimelineOptions_axis(const ViewTimelineOptions *self);

void ViewTimelineOptions_set_axis(ViewTimelineOptions* self, ScrollAxis * value);

jb_Any ViewTimelineOptions_inset(const ViewTimelineOptions *self);

void ViewTimelineOptions_set_inset(ViewTimelineOptions* self, jb_Any * value);

ViewTimelineOptions ViewTimelineOptions_new();

#ifdef __cplusplus
}
#endif
