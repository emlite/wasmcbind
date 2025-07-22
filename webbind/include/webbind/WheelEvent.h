#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "MouseEvent.h"
#include "enums.h"


typedef struct {
  MouseEvent inner;
} WheelEvent;


DECLARE_EMLITE_TYPE(WheelEvent, MouseEvent);

WheelEvent WheelEvent_new(const jb_DOMString* type);

WheelEvent WheelEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

double WheelEvent_deltaX( const WheelEvent *self);

double WheelEvent_deltaY( const WheelEvent *self);

double WheelEvent_deltaZ( const WheelEvent *self);

unsigned long WheelEvent_deltaMode( const WheelEvent *self);
