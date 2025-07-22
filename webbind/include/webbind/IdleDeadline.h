#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} IdleDeadline;


DECLARE_EMLITE_TYPE(IdleDeadline, em_Val);

jb_Any IdleDeadline_timeRemaining(IdleDeadline* self );

bool IdleDeadline_didTimeout( const IdleDeadline *self);
