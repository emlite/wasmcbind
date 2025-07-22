#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct PresentationConnection PresentationConnection;


DECLARE_EMLITE_TYPE(PresentationConnectionAvailableEvent, Event);

PresentationConnectionAvailableEvent PresentationConnectionAvailableEvent_new(jb_DOMString * type, jb_Any * eventInitDict);

PresentationConnection PresentationConnectionAvailableEvent_connection( const PresentationConnectionAvailableEvent *self);
