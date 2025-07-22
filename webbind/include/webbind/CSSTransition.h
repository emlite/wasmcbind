#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Animation.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(CSSTransition, Animation);

jb_CSSOMString CSSTransition_transitionProperty( const CSSTransition *self);
