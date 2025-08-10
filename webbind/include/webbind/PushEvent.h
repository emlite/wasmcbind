#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ExtendableEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PushEventInit PushEventInit;
typedef struct PushMessageData PushMessageData;

DECLARE_EMLITE_TYPE(PushEvent, ExtendableEvent);

PushEvent PushEvent_new0(jb_String * type);

PushEvent PushEvent_new1(jb_String * type, PushEventInit * eventInitDict);

PushMessageData PushEvent_data(const PushEvent *self);

#ifdef __cplusplus
}
#endif
