#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct WorkletAnimationEffect WorkletAnimationEffect;


typedef struct {
  em_Val inner;
} WorkletGroupEffect;


DECLARE_EMLITE_TYPE(WorkletGroupEffect, em_Val);

jb_Sequence WorkletGroupEffect_getChildren(WorkletGroupEffect* self );
