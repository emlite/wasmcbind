#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PopStateEventInit, EventInit);

jb_Any PopStateEventInit_state(const PopStateEventInit *self);

void PopStateEventInit_set_state(PopStateEventInit* self, jb_Any * value);

bool PopStateEventInit_hasUAVisualTransition(const PopStateEventInit *self);

void PopStateEventInit_set_hasUAVisualTransition(PopStateEventInit* self, bool value);

PopStateEventInit PopStateEventInit_new();

#ifdef __cplusplus
}
#endif
