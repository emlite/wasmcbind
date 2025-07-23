#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct DOMException DOMException;


DECLARE_EMLITE_TYPE(SensorErrorEvent, Event);

SensorErrorEvent SensorErrorEvent_new(jb_DOMString * type, jb_Any * errorEventInitDict);

DOMException SensorErrorEvent_error(const SensorErrorEvent *self);
