#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PresentationConnectionCloseEventInit, EventInit);

PresentationConnectionCloseReason PresentationConnectionCloseEventInit_reason(const PresentationConnectionCloseEventInit *self);

void PresentationConnectionCloseEventInit_set_reason(PresentationConnectionCloseEventInit* self, PresentationConnectionCloseReason * value);

jb_String PresentationConnectionCloseEventInit_message(const PresentationConnectionCloseEventInit *self);

void PresentationConnectionCloseEventInit_set_message(PresentationConnectionCloseEventInit* self, jb_String * value);

PresentationConnectionCloseEventInit PresentationConnectionCloseEventInit_new();

#ifdef __cplusplus
}
#endif
