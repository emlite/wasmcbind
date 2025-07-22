#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


typedef struct {
  Event inner;
} CapturedMouseEvent;


DECLARE_EMLITE_TYPE(CapturedMouseEvent, Event);

CapturedMouseEvent CapturedMouseEvent_new(const jb_DOMString* type);

CapturedMouseEvent CapturedMouseEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

long CapturedMouseEvent_surfaceX( const CapturedMouseEvent *self);

long CapturedMouseEvent_surfaceY( const CapturedMouseEvent *self);
