#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MouseEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WheelEventInit WheelEventInit;

DECLARE_EMLITE_TYPE(WheelEvent, MouseEvent);

WheelEvent WheelEvent_new0(jb_String * type);

WheelEvent WheelEvent_new1(jb_String * type, WheelEventInit * eventInitDict);

double WheelEvent_deltaX(const WheelEvent *self);

double WheelEvent_deltaY(const WheelEvent *self);

double WheelEvent_deltaZ(const WheelEvent *self);

unsigned long WheelEvent_deltaMode(const WheelEvent *self);

#ifdef __cplusplus
}
#endif
