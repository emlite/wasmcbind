#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


typedef struct {
  Event inner;
} CloseEvent;


DECLARE_EMLITE_TYPE(CloseEvent, Event);

CloseEvent CloseEvent_new(const jb_DOMString* type);

CloseEvent CloseEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

bool CloseEvent_wasClean( const CloseEvent *self);

unsigned short CloseEvent_code( const CloseEvent *self);

jb_USVString CloseEvent_reason( const CloseEvent *self);
