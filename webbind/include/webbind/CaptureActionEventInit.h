#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CaptureActionEventInit, EventInit);

jb_String CaptureActionEventInit_action(const CaptureActionEventInit *self);

void CaptureActionEventInit_set_action(CaptureActionEventInit* self, jb_String * value);

CaptureActionEventInit CaptureActionEventInit_new();

#ifdef __cplusplus
}
#endif
