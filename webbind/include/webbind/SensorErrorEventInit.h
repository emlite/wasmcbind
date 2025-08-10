#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMException DOMException;

DECLARE_EMLITE_TYPE(SensorErrorEventInit, EventInit);

DOMException SensorErrorEventInit_error(const SensorErrorEventInit *self);

void SensorErrorEventInit_set_error(SensorErrorEventInit* self, DOMException * value);

SensorErrorEventInit SensorErrorEventInit_new();

#ifdef __cplusplus
}
#endif
