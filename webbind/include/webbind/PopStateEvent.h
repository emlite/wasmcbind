#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


typedef struct {
  Event inner;
} PopStateEvent;


DECLARE_EMLITE_TYPE(PopStateEvent, Event);

PopStateEvent PopStateEvent_new(const jb_DOMString* type);

PopStateEvent PopStateEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

jb_Any PopStateEvent_state( const PopStateEvent *self);

bool PopStateEvent_hasUAVisualTransition( const PopStateEvent *self);
