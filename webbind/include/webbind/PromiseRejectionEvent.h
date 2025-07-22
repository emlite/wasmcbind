#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


typedef struct {
  Event inner;
} PromiseRejectionEvent;


DECLARE_EMLITE_TYPE(PromiseRejectionEvent, Event);

PromiseRejectionEvent PromiseRejectionEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

jb_Object PromiseRejectionEvent_promise( const PromiseRejectionEvent *self);

jb_Any PromiseRejectionEvent_reason( const PromiseRejectionEvent *self);
