#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


typedef struct {
  Event inner;
} ErrorEvent;


DECLARE_EMLITE_TYPE(ErrorEvent, Event);

ErrorEvent ErrorEvent_new(const jb_DOMString* type);

ErrorEvent ErrorEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

jb_DOMString ErrorEvent_message( const ErrorEvent *self);

jb_USVString ErrorEvent_filename( const ErrorEvent *self);

unsigned long ErrorEvent_lineno( const ErrorEvent *self);

unsigned long ErrorEvent_colno( const ErrorEvent *self);

jb_Any ErrorEvent_error( const ErrorEvent *self);
