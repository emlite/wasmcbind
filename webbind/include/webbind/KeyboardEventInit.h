#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(KeyboardEventInit, em_Val);

unsigned long KeyboardEventInit_charCode(const KeyboardEventInit *self);

void KeyboardEventInit_set_charCode(KeyboardEventInit* self, unsigned long value);

unsigned long KeyboardEventInit_keyCode(const KeyboardEventInit *self);

void KeyboardEventInit_set_keyCode(KeyboardEventInit* self, unsigned long value);

KeyboardEventInit KeyboardEventInit_new();

#ifdef __cplusplus
}
#endif
