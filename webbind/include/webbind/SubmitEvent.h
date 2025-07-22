#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct HTMLElement HTMLElement;


DECLARE_EMLITE_TYPE(SubmitEvent, Event);

SubmitEvent SubmitEvent_new0(jb_DOMString * type);

SubmitEvent SubmitEvent_new1(jb_DOMString * type, jb_Any * eventInitDict);

HTMLElement SubmitEvent_submitter( const SubmitEvent *self);
