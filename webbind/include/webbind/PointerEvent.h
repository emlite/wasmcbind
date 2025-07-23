#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "MouseEvent.h"
#include "enums.h"

typedef struct PointerEvent PointerEvent;


DECLARE_EMLITE_TYPE(PointerEvent, MouseEvent);

PointerEvent PointerEvent_new0(jb_DOMString * type);

PointerEvent PointerEvent_new1(jb_DOMString * type, jb_Any * eventInitDict);

long PointerEvent_pointerId(const PointerEvent *self);

double PointerEvent_width(const PointerEvent *self);

double PointerEvent_height(const PointerEvent *self);

float PointerEvent_pressure(const PointerEvent *self);

float PointerEvent_tangentialPressure(const PointerEvent *self);

long PointerEvent_tiltX(const PointerEvent *self);

long PointerEvent_tiltY(const PointerEvent *self);

long PointerEvent_twist(const PointerEvent *self);

double PointerEvent_altitudeAngle(const PointerEvent *self);

double PointerEvent_azimuthAngle(const PointerEvent *self);

jb_DOMString PointerEvent_pointerType(const PointerEvent *self);

bool PointerEvent_isPrimary(const PointerEvent *self);

long PointerEvent_persistentDeviceId(const PointerEvent *self);

jb_Sequence PointerEvent_getCoalescedEvents(PointerEvent* self );

jb_Sequence PointerEvent_getPredictedEvents(PointerEvent* self );
