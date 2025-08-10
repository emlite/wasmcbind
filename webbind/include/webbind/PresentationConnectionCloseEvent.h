#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PresentationConnectionCloseEventInit PresentationConnectionCloseEventInit;

DECLARE_EMLITE_TYPE(PresentationConnectionCloseEvent, Event);

PresentationConnectionCloseEvent PresentationConnectionCloseEvent_new(jb_String * type, PresentationConnectionCloseEventInit * eventInitDict);

PresentationConnectionCloseReason PresentationConnectionCloseEvent_reason(const PresentationConnectionCloseEvent *self);

jb_String PresentationConnectionCloseEvent_message(const PresentationConnectionCloseEvent *self);

#ifdef __cplusplus
}
#endif
