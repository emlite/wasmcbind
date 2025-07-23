#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(CloseEvent, Event);

CloseEvent CloseEvent_new0(jb_DOMString * type);

CloseEvent CloseEvent_new1(jb_DOMString * type, jb_Any * eventInitDict);

bool CloseEvent_wasClean(const CloseEvent *self);

unsigned short CloseEvent_code(const CloseEvent *self);

jb_USVString CloseEvent_reason(const CloseEvent *self);
