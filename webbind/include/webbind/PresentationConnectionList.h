#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct PresentationConnection PresentationConnection;


typedef struct {
  EventTarget inner;
} PresentationConnectionList;


DECLARE_EMLITE_TYPE(PresentationConnectionList, EventTarget);

jb_FrozenArray PresentationConnectionList_connections( const PresentationConnectionList *self);

jb_Any PresentationConnectionList_onconnectionavailable( const PresentationConnectionList *self);

void PresentationConnectionList_set_onconnectionavailable(PresentationConnectionList* self, const jb_Any* value);
