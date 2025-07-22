#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct HTMLElement HTMLElement;


typedef struct {
  Event inner;
} SubmitEvent;


DECLARE_EMLITE_TYPE(SubmitEvent, Event);

SubmitEvent SubmitEvent_new(const jb_DOMString* type);

SubmitEvent SubmitEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

HTMLElement SubmitEvent_submitter( const SubmitEvent *self);
