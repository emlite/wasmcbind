#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRSession XRSession;
typedef struct XRInputSource XRInputSource;

DECLARE_EMLITE_TYPE(XRInputSourcesChangeEventInit, EventInit);

XRSession XRInputSourcesChangeEventInit_session(const XRInputSourcesChangeEventInit *self);

void XRInputSourcesChangeEventInit_set_session(XRInputSourcesChangeEventInit* self, XRSession * value);

jb_Array XRInputSourcesChangeEventInit_added(const XRInputSourcesChangeEventInit *self);

void XRInputSourcesChangeEventInit_set_added(XRInputSourcesChangeEventInit* self, jb_Array * value);

jb_Array XRInputSourcesChangeEventInit_removed(const XRInputSourcesChangeEventInit *self);

void XRInputSourcesChangeEventInit_set_removed(XRInputSourcesChangeEventInit* self, jb_Array * value);

XRInputSourcesChangeEventInit XRInputSourcesChangeEventInit_new();

#ifdef __cplusplus
}
#endif
