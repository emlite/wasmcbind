#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ToggleEventInit, EventInit);

jb_String ToggleEventInit_oldState(const ToggleEventInit *self);

void ToggleEventInit_set_oldState(ToggleEventInit* self, jb_String * value);

jb_String ToggleEventInit_newState(const ToggleEventInit *self);

void ToggleEventInit_set_newState(ToggleEventInit* self, jb_String * value);

ToggleEventInit ToggleEventInit_new();

#ifdef __cplusplus
}
#endif
