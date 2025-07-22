#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(ValueEvent, Event);

ValueEvent ValueEvent_new0(jb_DOMString * type);

ValueEvent ValueEvent_new1(jb_DOMString * type, jb_Any * initDict);

jb_Any ValueEvent_value( const ValueEvent *self);
