#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


typedef struct {
  Event inner;
} PresentationConnectionCloseEvent;


DECLARE_EMLITE_TYPE(PresentationConnectionCloseEvent, Event);

PresentationConnectionCloseEvent PresentationConnectionCloseEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

PresentationConnectionCloseReason PresentationConnectionCloseEvent_reason( const PresentationConnectionCloseEvent *self);

jb_DOMString PresentationConnectionCloseEvent_message( const PresentationConnectionCloseEvent *self);
