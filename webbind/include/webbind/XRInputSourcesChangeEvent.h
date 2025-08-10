#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRInputSourcesChangeEventInit XRInputSourcesChangeEventInit;
typedef struct XRSession XRSession;
typedef struct XRInputSource XRInputSource;

DECLARE_EMLITE_TYPE(XRInputSourcesChangeEvent, Event);

XRInputSourcesChangeEvent XRInputSourcesChangeEvent_new(jb_String * type, XRInputSourcesChangeEventInit * eventInitDict);

XRSession XRInputSourcesChangeEvent_session(const XRInputSourcesChangeEvent *self);

jb_Array XRInputSourcesChangeEvent_added(const XRInputSourcesChangeEvent *self);

jb_Array XRInputSourcesChangeEvent_removed(const XRInputSourcesChangeEvent *self);

#ifdef __cplusplus
}
#endif
