#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SensorErrorEventInit SensorErrorEventInit;
typedef struct DOMException DOMException;

DECLARE_EMLITE_TYPE(SensorErrorEvent, Event);

SensorErrorEvent SensorErrorEvent_new(jb_String * type, SensorErrorEventInit * errorEventInitDict);

DOMException SensorErrorEvent_error(const SensorErrorEvent *self);

#ifdef __cplusplus
}
#endif
