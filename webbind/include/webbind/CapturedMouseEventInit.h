#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CapturedMouseEventInit, EventInit);

long CapturedMouseEventInit_surfaceX(const CapturedMouseEventInit *self);

void CapturedMouseEventInit_set_surfaceX(CapturedMouseEventInit* self, long value);

long CapturedMouseEventInit_surfaceY(const CapturedMouseEventInit *self);

void CapturedMouseEventInit_set_surfaceY(CapturedMouseEventInit* self, long value);

CapturedMouseEventInit CapturedMouseEventInit_new();

#ifdef __cplusplus
}
#endif
