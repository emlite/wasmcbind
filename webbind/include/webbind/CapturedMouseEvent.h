#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(CapturedMouseEvent, Event);

CapturedMouseEvent CapturedMouseEvent_new0(jb_DOMString * type);

CapturedMouseEvent CapturedMouseEvent_new1(jb_DOMString * type, jb_Any * eventInitDict);

long CapturedMouseEvent_surfaceX(const CapturedMouseEvent *self);

long CapturedMouseEvent_surfaceY(const CapturedMouseEvent *self);
