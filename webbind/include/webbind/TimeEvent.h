#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct Window Window;


typedef struct {
  Event inner;
} TimeEvent;


DECLARE_EMLITE_TYPE(TimeEvent, Event);

jb_Any TimeEvent_view( const TimeEvent *self);

long TimeEvent_detail( const TimeEvent *self);

jb_Undefined TimeEvent_initTimeEvent(TimeEvent* self , const jb_DOMString* typeArg, const Window* viewArg, long detailArg);
