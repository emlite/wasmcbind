#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ExtendableEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ExtendableMessageEventInit ExtendableMessageEventInit;
typedef struct MessagePort MessagePort;

DECLARE_EMLITE_TYPE(ExtendableMessageEvent, ExtendableEvent);

ExtendableMessageEvent ExtendableMessageEvent_new0(jb_String * type);

ExtendableMessageEvent ExtendableMessageEvent_new1(jb_String * type, ExtendableMessageEventInit * eventInitDict);

jb_Any ExtendableMessageEvent_data(const ExtendableMessageEvent *self);

jb_String ExtendableMessageEvent_origin(const ExtendableMessageEvent *self);

jb_String ExtendableMessageEvent_lastEventId(const ExtendableMessageEvent *self);

jb_Any ExtendableMessageEvent_source(const ExtendableMessageEvent *self);

jb_Array ExtendableMessageEvent_ports(const ExtendableMessageEvent *self);

#ifdef __cplusplus
}
#endif
