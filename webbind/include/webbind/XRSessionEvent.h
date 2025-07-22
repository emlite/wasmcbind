#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct XRSession XRSession;


DECLARE_EMLITE_TYPE(XRSessionEvent, Event);

XRSessionEvent XRSessionEvent_new(jb_DOMString * type, jb_Any * eventInitDict);

XRSession XRSessionEvent_session( const XRSessionEvent *self);
