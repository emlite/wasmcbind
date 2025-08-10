#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ExtendableEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PushEventInit, ExtendableEventInit);

jb_Any PushEventInit_data(const PushEventInit *self);

void PushEventInit_set_data(PushEventInit* self, jb_Any * value);

PushEventInit PushEventInit_new();

#ifdef __cplusplus
}
#endif
