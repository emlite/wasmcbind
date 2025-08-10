#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CapturedMouseEventInit CapturedMouseEventInit;

DECLARE_EMLITE_TYPE(CapturedMouseEvent, Event);

CapturedMouseEvent CapturedMouseEvent_new0(jb_String * type);

CapturedMouseEvent CapturedMouseEvent_new1(jb_String * type, CapturedMouseEventInit * eventInitDict);

long CapturedMouseEvent_surfaceX(const CapturedMouseEvent *self);

long CapturedMouseEvent_surfaceY(const CapturedMouseEvent *self);

#ifdef __cplusplus
}
#endif
