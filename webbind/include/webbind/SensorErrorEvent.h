#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct DOMException DOMException;


typedef struct {
  Event inner;
} SensorErrorEvent;


DECLARE_EMLITE_TYPE(SensorErrorEvent, Event);

SensorErrorEvent SensorErrorEvent_new(const jb_DOMString* type, const jb_Any* errorEventInitDict);

DOMException SensorErrorEvent_error( const SensorErrorEvent *self);
