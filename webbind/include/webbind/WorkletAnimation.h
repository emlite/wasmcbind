#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Animation.h"
#include "enums.h"


typedef struct {
  Animation inner;
} WorkletAnimation;


DECLARE_EMLITE_TYPE(WorkletAnimation, Animation);

WorkletAnimation WorkletAnimation_new(const jb_DOMString* animatorName);

WorkletAnimation WorkletAnimation_new(const jb_DOMString* animatorName, const jb_Any* effects);

WorkletAnimation WorkletAnimation_new(const jb_DOMString* animatorName, const jb_Any* effects, const AnimationTimeline* timeline);

WorkletAnimation WorkletAnimation_new(const jb_DOMString* animatorName, const jb_Any* effects, const AnimationTimeline* timeline, const jb_Any* options);

jb_DOMString WorkletAnimation_animatorName( const WorkletAnimation *self);
