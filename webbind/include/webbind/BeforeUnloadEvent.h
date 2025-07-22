#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


typedef struct {
  Event inner;
} BeforeUnloadEvent;


DECLARE_EMLITE_TYPE(BeforeUnloadEvent, Event);

jb_DOMString BeforeUnloadEvent_returnValue( const BeforeUnloadEvent *self);

void BeforeUnloadEvent_set_returnValue(BeforeUnloadEvent* self, const jb_DOMString* value);
