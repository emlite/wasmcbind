#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ExtendableEventInit ExtendableEventInit;

DECLARE_EMLITE_TYPE(ExtendableEvent, Event);

ExtendableEvent ExtendableEvent_new0(jb_String * type);

ExtendableEvent ExtendableEvent_new1(jb_String * type, ExtendableEventInit * eventInitDict);

jb_Undefined ExtendableEvent_waitUntil(ExtendableEvent* self , jb_Promise * f);

#ifdef __cplusplus
}
#endif
