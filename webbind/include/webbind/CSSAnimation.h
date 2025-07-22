#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Animation.h"
#include "enums.h"


typedef struct {
  Animation inner;
} CSSAnimation;


DECLARE_EMLITE_TYPE(CSSAnimation, Animation);

jb_CSSOMString CSSAnimation_animationName( const CSSAnimation *self);
