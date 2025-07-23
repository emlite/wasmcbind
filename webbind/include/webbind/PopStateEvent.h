#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(PopStateEvent, Event);

PopStateEvent PopStateEvent_new0(jb_DOMString * type);

PopStateEvent PopStateEvent_new1(jb_DOMString * type, jb_Any * eventInitDict);

jb_Any PopStateEvent_state(const PopStateEvent *self);

bool PopStateEvent_hasUAVisualTransition(const PopStateEvent *self);
