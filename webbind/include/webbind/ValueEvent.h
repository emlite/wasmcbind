#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


typedef struct {
  Event inner;
} ValueEvent;


DECLARE_EMLITE_TYPE(ValueEvent, Event);

ValueEvent ValueEvent_new(const jb_DOMString* type);

ValueEvent ValueEvent_new(const jb_DOMString* type, const jb_Any* initDict);

jb_Any ValueEvent_value( const ValueEvent *self);
