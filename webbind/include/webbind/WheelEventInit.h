#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MouseEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(WheelEventInit, MouseEventInit);

double WheelEventInit_deltaX(const WheelEventInit *self);

void WheelEventInit_set_deltaX(WheelEventInit* self, double value);

double WheelEventInit_deltaY(const WheelEventInit *self);

void WheelEventInit_set_deltaY(WheelEventInit* self, double value);

double WheelEventInit_deltaZ(const WheelEventInit *self);

void WheelEventInit_set_deltaZ(WheelEventInit* self, double value);

unsigned long WheelEventInit_deltaMode(const WheelEventInit *self);

void WheelEventInit_set_deltaMode(WheelEventInit* self, unsigned long value);

WheelEventInit WheelEventInit_new();

#ifdef __cplusplus
}
#endif
