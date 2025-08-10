#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventModifierInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct EventTarget EventTarget;

DECLARE_EMLITE_TYPE(MouseEventInit, EventModifierInit);

long MouseEventInit_screenX(const MouseEventInit *self);

void MouseEventInit_set_screenX(MouseEventInit* self, long value);

long MouseEventInit_screenY(const MouseEventInit *self);

void MouseEventInit_set_screenY(MouseEventInit* self, long value);

long MouseEventInit_clientX(const MouseEventInit *self);

void MouseEventInit_set_clientX(MouseEventInit* self, long value);

long MouseEventInit_clientY(const MouseEventInit *self);

void MouseEventInit_set_clientY(MouseEventInit* self, long value);

short MouseEventInit_button(const MouseEventInit *self);

void MouseEventInit_set_button(MouseEventInit* self, short value);

unsigned short MouseEventInit_buttons(const MouseEventInit *self);

void MouseEventInit_set_buttons(MouseEventInit* self, unsigned short value);

EventTarget MouseEventInit_relatedTarget(const MouseEventInit *self);

void MouseEventInit_set_relatedTarget(MouseEventInit* self, EventTarget * value);

MouseEventInit MouseEventInit_new();

#ifdef __cplusplus
}
#endif
