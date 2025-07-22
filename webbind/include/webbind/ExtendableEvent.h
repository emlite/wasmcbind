#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


typedef struct {
  Event inner;
} ExtendableEvent;


DECLARE_EMLITE_TYPE(ExtendableEvent, Event);

ExtendableEvent ExtendableEvent_new(const jb_DOMString* type);

ExtendableEvent ExtendableEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

jb_Undefined ExtendableEvent_waitUntil(ExtendableEvent* self , const jb_Promise* f);
