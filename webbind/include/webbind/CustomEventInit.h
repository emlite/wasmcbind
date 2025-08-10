#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CustomEventInit, EventInit);

jb_Any CustomEventInit_detail(const CustomEventInit *self);

void CustomEventInit_set_detail(CustomEventInit* self, jb_Any * value);

CustomEventInit CustomEventInit_new();

#ifdef __cplusplus
}
#endif
