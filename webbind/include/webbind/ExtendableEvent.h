#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(ExtendableEvent, Event);

ExtendableEvent ExtendableEvent_new0(jb_DOMString * type);

ExtendableEvent ExtendableEvent_new1(jb_DOMString * type, jb_Any * eventInitDict);

jb_Undefined ExtendableEvent_waitUntil(ExtendableEvent* self , jb_Promise * f);
