#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "GroupEffect.h"
#include "enums.h"

typedef struct SequenceEffect SequenceEffect;


typedef struct {
  GroupEffect inner;
} SequenceEffect;


DECLARE_EMLITE_TYPE(SequenceEffect, GroupEffect);

SequenceEffect SequenceEffect_new(const jb_Sequence* children);

SequenceEffect SequenceEffect_new(const jb_Sequence* children, const jb_Any* timing);

SequenceEffect SequenceEffect_clone(SequenceEffect* self );
