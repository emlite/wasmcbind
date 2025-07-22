#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct PresentationConnection PresentationConnection;


typedef struct {
  Event inner;
} PresentationConnectionAvailableEvent;


DECLARE_EMLITE_TYPE(PresentationConnectionAvailableEvent, Event);

PresentationConnectionAvailableEvent PresentationConnectionAvailableEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

PresentationConnection PresentationConnectionAvailableEvent_connection( const PresentationConnectionAvailableEvent *self);
