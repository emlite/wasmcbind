#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "ExtendableEvent.h"
#include "enums.h"

typedef struct BackgroundFetchRegistration BackgroundFetchRegistration;


typedef struct {
  ExtendableEvent inner;
} BackgroundFetchEvent;


DECLARE_EMLITE_TYPE(BackgroundFetchEvent, ExtendableEvent);

BackgroundFetchEvent BackgroundFetchEvent_new(const jb_DOMString* type, const jb_Any* init);

BackgroundFetchRegistration BackgroundFetchEvent_registration( const BackgroundFetchEvent *self);
