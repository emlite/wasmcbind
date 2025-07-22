#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct XRSession XRSession;


typedef struct {
  Event inner;
} XRSessionEvent;


DECLARE_EMLITE_TYPE(XRSessionEvent, Event);

XRSessionEvent XRSessionEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

XRSession XRSessionEvent_session( const XRSessionEvent *self);
