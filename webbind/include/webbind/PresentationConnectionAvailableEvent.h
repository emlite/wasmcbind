#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PresentationConnectionAvailableEventInit PresentationConnectionAvailableEventInit;
typedef struct PresentationConnection PresentationConnection;

DECLARE_EMLITE_TYPE(PresentationConnectionAvailableEvent, Event);

PresentationConnectionAvailableEvent PresentationConnectionAvailableEvent_new(jb_String * type, PresentationConnectionAvailableEventInit * eventInitDict);

PresentationConnection PresentationConnectionAvailableEvent_connection(const PresentationConnectionAvailableEvent *self);

#ifdef __cplusplus
}
#endif
