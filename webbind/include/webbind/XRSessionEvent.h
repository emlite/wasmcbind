#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRSessionEventInit XRSessionEventInit;
typedef struct XRSession XRSession;

DECLARE_EMLITE_TYPE(XRSessionEvent, Event);

XRSessionEvent XRSessionEvent_new(jb_String * type, XRSessionEventInit * eventInitDict);

XRSession XRSessionEvent_session(const XRSessionEvent *self);

#ifdef __cplusplus
}
#endif
