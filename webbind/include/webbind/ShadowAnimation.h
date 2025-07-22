#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Animation.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(ShadowAnimation, Animation);

ShadowAnimation ShadowAnimation_new(Animation * source, jb_Any * newTarget);

Animation ShadowAnimation_sourceAnimation( const ShadowAnimation *self);
