#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Animation.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AnimationTimeline AnimationTimeline;

DECLARE_EMLITE_TYPE(WorkletAnimation, Animation);

WorkletAnimation WorkletAnimation_new0(jb_String * animatorName);

WorkletAnimation WorkletAnimation_new1(jb_String * animatorName, jb_Any * effects);

WorkletAnimation WorkletAnimation_new2(jb_String * animatorName, jb_Any * effects, AnimationTimeline * timeline);

WorkletAnimation WorkletAnimation_new3(jb_String * animatorName, jb_Any * effects, AnimationTimeline * timeline, jb_Any * options);

jb_String WorkletAnimation_animatorName(const WorkletAnimation *self);

#ifdef __cplusplus
}
#endif
