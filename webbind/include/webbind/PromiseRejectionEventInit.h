#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PromiseRejectionEventInit, EventInit);

jb_Object PromiseRejectionEventInit_promise(const PromiseRejectionEventInit *self);

void PromiseRejectionEventInit_set_promise(PromiseRejectionEventInit* self, jb_Object * value);

jb_Any PromiseRejectionEventInit_reason(const PromiseRejectionEventInit *self);

void PromiseRejectionEventInit_set_reason(PromiseRejectionEventInit* self, jb_Any * value);

PromiseRejectionEventInit PromiseRejectionEventInit_new();

#ifdef __cplusplus
}
#endif
