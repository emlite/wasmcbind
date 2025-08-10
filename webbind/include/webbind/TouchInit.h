#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct EventTarget EventTarget;

DECLARE_EMLITE_TYPE(TouchInit, em_Val);

long TouchInit_identifier(const TouchInit *self);

void TouchInit_set_identifier(TouchInit* self, long value);

EventTarget TouchInit_target(const TouchInit *self);

void TouchInit_set_target(TouchInit* self, EventTarget * value);

double TouchInit_clientX(const TouchInit *self);

void TouchInit_set_clientX(TouchInit* self, double value);

double TouchInit_clientY(const TouchInit *self);

void TouchInit_set_clientY(TouchInit* self, double value);

double TouchInit_screenX(const TouchInit *self);

void TouchInit_set_screenX(TouchInit* self, double value);

double TouchInit_screenY(const TouchInit *self);

void TouchInit_set_screenY(TouchInit* self, double value);

double TouchInit_pageX(const TouchInit *self);

void TouchInit_set_pageX(TouchInit* self, double value);

double TouchInit_pageY(const TouchInit *self);

void TouchInit_set_pageY(TouchInit* self, double value);

float TouchInit_radiusX(const TouchInit *self);

void TouchInit_set_radiusX(TouchInit* self, float value);

float TouchInit_radiusY(const TouchInit *self);

void TouchInit_set_radiusY(TouchInit* self, float value);

float TouchInit_rotationAngle(const TouchInit *self);

void TouchInit_set_rotationAngle(TouchInit* self, float value);

float TouchInit_force(const TouchInit *self);

void TouchInit_set_force(TouchInit* self, float value);

double TouchInit_altitudeAngle(const TouchInit *self);

void TouchInit_set_altitudeAngle(TouchInit* self, double value);

double TouchInit_azimuthAngle(const TouchInit *self);

void TouchInit_set_azimuthAngle(TouchInit* self, double value);

TouchType TouchInit_touchType(const TouchInit *self);

void TouchInit_set_touchType(TouchInit* self, TouchType * value);

TouchInit TouchInit_new();

#ifdef __cplusplus
}
#endif
