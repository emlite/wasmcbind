#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRSession XRSession;

DECLARE_EMLITE_TYPE(XRSessionEventInit, EventInit);

XRSession XRSessionEventInit_session(const XRSessionEventInit *self);

void XRSessionEventInit_set_session(XRSessionEventInit* self, XRSession * value);

XRSessionEventInit XRSessionEventInit_new();

#ifdef __cplusplus
}
#endif
