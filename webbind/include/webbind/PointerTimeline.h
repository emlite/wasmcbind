#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AnimationTimeline.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PointerTimelineOptions PointerTimelineOptions;
typedef struct Element Element;

DECLARE_EMLITE_TYPE(PointerTimeline, AnimationTimeline);

PointerTimeline PointerTimeline_new0();

PointerTimeline PointerTimeline_new1(PointerTimelineOptions * options);

Element PointerTimeline_source(const PointerTimeline *self);

PointerAxis PointerTimeline_axis(const PointerTimeline *self);

#ifdef __cplusplus
}
#endif
