#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct XRSession XRSession;
typedef struct XRInputSource XRInputSource;


typedef struct {
  Event inner;
} XRInputSourcesChangeEvent;


DECLARE_EMLITE_TYPE(XRInputSourcesChangeEvent, Event);

XRInputSourcesChangeEvent XRInputSourcesChangeEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

XRSession XRInputSourcesChangeEvent_session( const XRInputSourcesChangeEvent *self);

jb_FrozenArray XRInputSourcesChangeEvent_added( const XRInputSourcesChangeEvent *self);

jb_FrozenArray XRInputSourcesChangeEvent_removed( const XRInputSourcesChangeEvent *self);
