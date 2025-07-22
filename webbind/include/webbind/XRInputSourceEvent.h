#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct XRFrame XRFrame;
typedef struct XRInputSource XRInputSource;


typedef struct {
  Event inner;
} XRInputSourceEvent;


DECLARE_EMLITE_TYPE(XRInputSourceEvent, Event);

XRInputSourceEvent XRInputSourceEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

XRFrame XRInputSourceEvent_frame( const XRInputSourceEvent *self);

XRInputSource XRInputSourceEvent_inputSource( const XRInputSourceEvent *self);
