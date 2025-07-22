#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct PresentationConnection PresentationConnection;
typedef struct PresentationAvailability PresentationAvailability;


typedef struct {
  EventTarget inner;
} PresentationRequest;


DECLARE_EMLITE_TYPE(PresentationRequest, EventTarget);

PresentationRequest PresentationRequest_new(const jb_Sequence* urls);

jb_Promise PresentationRequest_start(PresentationRequest* self );

jb_Promise PresentationRequest_reconnect(PresentationRequest* self , const jb_USVString* presentationId);

jb_Promise PresentationRequest_getAvailability(PresentationRequest* self );

jb_Any PresentationRequest_onconnectionavailable( const PresentationRequest *self);

void PresentationRequest_set_onconnectionavailable(PresentationRequest* self, const jb_Any* value);
