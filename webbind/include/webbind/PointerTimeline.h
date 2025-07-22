#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AnimationTimeline.h"
#include "enums.h"

typedef struct Element Element;


typedef struct {
  AnimationTimeline inner;
} PointerTimeline;


DECLARE_EMLITE_TYPE(PointerTimeline, AnimationTimeline);

PointerTimeline PointerTimeline_new();

PointerTimeline PointerTimeline_new(const jb_Any* options);

Element PointerTimeline_source( const PointerTimeline *self);

PointerAxis PointerTimeline_axis( const PointerTimeline *self);
