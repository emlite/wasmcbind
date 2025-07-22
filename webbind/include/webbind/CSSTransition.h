#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Animation.h"
#include "enums.h"


typedef struct {
  Animation inner;
} CSSTransition;


DECLARE_EMLITE_TYPE(CSSTransition, Animation);

jb_CSSOMString CSSTransition_transitionProperty( const CSSTransition *self);
