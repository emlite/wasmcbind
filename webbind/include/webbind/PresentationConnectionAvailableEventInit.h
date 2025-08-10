#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PresentationConnection PresentationConnection;

DECLARE_EMLITE_TYPE(PresentationConnectionAvailableEventInit, EventInit);

PresentationConnection PresentationConnectionAvailableEventInit_connection(const PresentationConnectionAvailableEventInit *self);

void PresentationConnectionAvailableEventInit_set_connection(PresentationConnectionAvailableEventInit* self, PresentationConnection * value);

PresentationConnectionAvailableEventInit PresentationConnectionAvailableEventInit_new();

#ifdef __cplusplus
}
#endif
