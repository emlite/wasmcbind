#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(BeforeUnloadEvent, Event);

jb_DOMString BeforeUnloadEvent_returnValue( const BeforeUnloadEvent *self);

void BeforeUnloadEvent_set_returnValue(BeforeUnloadEvent* self, jb_DOMString * value);
