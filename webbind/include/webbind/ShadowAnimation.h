#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Animation.h"
#include "enums.h"


typedef struct {
  Animation inner;
} ShadowAnimation;


DECLARE_EMLITE_TYPE(ShadowAnimation, Animation);

ShadowAnimation ShadowAnimation_new(const Animation* source, const jb_Any* newTarget);

Animation ShadowAnimation_sourceAnimation( const ShadowAnimation *self);
