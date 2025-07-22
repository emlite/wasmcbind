#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct XRLayer XRLayer;


typedef struct {
  Event inner;
} XRLayerEvent;


DECLARE_EMLITE_TYPE(XRLayerEvent, Event);

XRLayerEvent XRLayerEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

XRLayer XRLayerEvent_layer( const XRLayerEvent *self);
