#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Animation.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(WorkletAnimation, Animation);

WorkletAnimation WorkletAnimation_new0(jb_DOMString * animatorName);

WorkletAnimation WorkletAnimation_new1(jb_DOMString * animatorName, jb_Any * effects);

WorkletAnimation WorkletAnimation_new2(jb_DOMString * animatorName, jb_Any * effects, AnimationTimeline * timeline);

WorkletAnimation WorkletAnimation_new3(jb_DOMString * animatorName, jb_Any * effects, AnimationTimeline * timeline, jb_Any * options);

jb_DOMString WorkletAnimation_animatorName( const WorkletAnimation *self);
