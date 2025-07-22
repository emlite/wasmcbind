#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AnimationTimeline.h"
#include "enums.h"


typedef struct {
  AnimationTimeline inner;
} DocumentTimeline;


DECLARE_EMLITE_TYPE(DocumentTimeline, AnimationTimeline);

DocumentTimeline DocumentTimeline_new();

DocumentTimeline DocumentTimeline_new(const jb_Any* options);
