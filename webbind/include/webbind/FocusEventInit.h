#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "UIEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct EventTarget EventTarget;

DECLARE_EMLITE_TYPE(FocusEventInit, UIEventInit);

EventTarget FocusEventInit_relatedTarget(const FocusEventInit *self);

void FocusEventInit_set_relatedTarget(FocusEventInit* self, EventTarget * value);

FocusEventInit FocusEventInit_new();

#ifdef __cplusplus
}
#endif
