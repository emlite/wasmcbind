#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GroupEffect.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AnimationEffect AnimationEffect;

DECLARE_EMLITE_TYPE(SequenceEffect, GroupEffect);

SequenceEffect SequenceEffect_new0(jb_Array * children);

SequenceEffect SequenceEffect_new1(jb_Array * children, jb_Any * timing);

SequenceEffect SequenceEffect_clone(SequenceEffect* self );

#ifdef __cplusplus
}
#endif
