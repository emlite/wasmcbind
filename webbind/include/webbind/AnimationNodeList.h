#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct AnimationEffect AnimationEffect;


typedef struct {
  em_Val inner;
} AnimationNodeList;


DECLARE_EMLITE_TYPE(AnimationNodeList, em_Val);

unsigned long AnimationNodeList_length( const AnimationNodeList *self);

AnimationEffect AnimationNodeList_item(AnimationNodeList* self , unsigned long index);
