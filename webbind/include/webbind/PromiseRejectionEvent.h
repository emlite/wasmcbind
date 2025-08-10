#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PromiseRejectionEventInit PromiseRejectionEventInit;

DECLARE_EMLITE_TYPE(PromiseRejectionEvent, Event);

PromiseRejectionEvent PromiseRejectionEvent_new(jb_String * type, PromiseRejectionEventInit * eventInitDict);

jb_Object PromiseRejectionEvent_promise(const PromiseRejectionEvent *self);

jb_Any PromiseRejectionEvent_reason(const PromiseRejectionEvent *self);

#ifdef __cplusplus
}
#endif
