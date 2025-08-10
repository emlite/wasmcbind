#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MouseEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PointerEvent PointerEvent;

DECLARE_EMLITE_TYPE(PointerEventInit, MouseEventInit);

long PointerEventInit_pointerId(const PointerEventInit *self);

void PointerEventInit_set_pointerId(PointerEventInit* self, long value);

double PointerEventInit_width(const PointerEventInit *self);

void PointerEventInit_set_width(PointerEventInit* self, double value);

double PointerEventInit_height(const PointerEventInit *self);

void PointerEventInit_set_height(PointerEventInit* self, double value);

float PointerEventInit_pressure(const PointerEventInit *self);

void PointerEventInit_set_pressure(PointerEventInit* self, float value);

float PointerEventInit_tangentialPressure(const PointerEventInit *self);

void PointerEventInit_set_tangentialPressure(PointerEventInit* self, float value);

long PointerEventInit_tiltX(const PointerEventInit *self);

void PointerEventInit_set_tiltX(PointerEventInit* self, long value);

long PointerEventInit_tiltY(const PointerEventInit *self);

void PointerEventInit_set_tiltY(PointerEventInit* self, long value);

long PointerEventInit_twist(const PointerEventInit *self);

void PointerEventInit_set_twist(PointerEventInit* self, long value);

double PointerEventInit_altitudeAngle(const PointerEventInit *self);

void PointerEventInit_set_altitudeAngle(PointerEventInit* self, double value);

double PointerEventInit_azimuthAngle(const PointerEventInit *self);

void PointerEventInit_set_azimuthAngle(PointerEventInit* self, double value);

jb_String PointerEventInit_pointerType(const PointerEventInit *self);

void PointerEventInit_set_pointerType(PointerEventInit* self, jb_String * value);

bool PointerEventInit_isPrimary(const PointerEventInit *self);

void PointerEventInit_set_isPrimary(PointerEventInit* self, bool value);

long PointerEventInit_persistentDeviceId(const PointerEventInit *self);

void PointerEventInit_set_persistentDeviceId(PointerEventInit* self, long value);

jb_Array PointerEventInit_coalescedEvents(const PointerEventInit *self);

void PointerEventInit_set_coalescedEvents(PointerEventInit* self, jb_Array * value);

jb_Array PointerEventInit_predictedEvents(const PointerEventInit *self);

void PointerEventInit_set_predictedEvents(PointerEventInit* self, jb_Array * value);

PointerEventInit PointerEventInit_new();

#ifdef __cplusplus
}
#endif
