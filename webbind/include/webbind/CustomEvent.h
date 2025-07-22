#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


typedef struct {
  Event inner;
} CustomEvent;


DECLARE_EMLITE_TYPE(CustomEvent, Event);

CustomEvent CustomEvent_new(const jb_DOMString* type);

CustomEvent CustomEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

jb_Any CustomEvent_detail( const CustomEvent *self);

jb_Undefined CustomEvent_initCustomEvent(CustomEvent* self , const jb_DOMString* type);

jb_Undefined CustomEvent_initCustomEvent(CustomEvent* self , const jb_DOMString* type, bool bubbles);

jb_Undefined CustomEvent_initCustomEvent(CustomEvent* self , const jb_DOMString* type, bool bubbles, bool cancelable);

jb_Undefined CustomEvent_initCustomEvent(CustomEvent* self , const jb_DOMString* type, bool bubbles, bool cancelable, const jb_Any* detail);
