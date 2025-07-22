#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AnimationTimeline.h"
#include "enums.h"

typedef struct Element Element;


typedef struct {
  AnimationTimeline inner;
} ScrollTimeline;


DECLARE_EMLITE_TYPE(ScrollTimeline, AnimationTimeline);

ScrollTimeline ScrollTimeline_new();

ScrollTimeline ScrollTimeline_new(const jb_Any* options);

Element ScrollTimeline_source( const ScrollTimeline *self);

ScrollAxis ScrollTimeline_axis( const ScrollTimeline *self);
