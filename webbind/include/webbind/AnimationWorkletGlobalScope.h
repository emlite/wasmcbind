#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "WorkletGlobalScope.h"
#include "enums.h"


typedef struct {
  WorkletGlobalScope inner;
} AnimationWorkletGlobalScope;


DECLARE_EMLITE_TYPE(AnimationWorkletGlobalScope, WorkletGlobalScope);

jb_Undefined AnimationWorkletGlobalScope_registerAnimator(AnimationWorkletGlobalScope* self , const jb_DOMString* name, const jb_Function* animatorCtor);
