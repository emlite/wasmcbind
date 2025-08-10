#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRLayerEventInit XRLayerEventInit;
typedef struct XRLayer XRLayer;

DECLARE_EMLITE_TYPE(XRLayerEvent, Event);

XRLayerEvent XRLayerEvent_new(jb_String * type, XRLayerEventInit * eventInitDict);

XRLayer XRLayerEvent_layer(const XRLayerEvent *self);

#ifdef __cplusplus
}
#endif
