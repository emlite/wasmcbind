#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct XRSpace XRSpace;


typedef struct {
  EventTarget inner;
} XRLightProbe;


DECLARE_EMLITE_TYPE(XRLightProbe, EventTarget);

XRSpace XRLightProbe_probeSpace( const XRLightProbe *self);

jb_Any XRLightProbe_onreflectionchange( const XRLightProbe *self);

void XRLightProbe_set_onreflectionchange(XRLightProbe* self, const jb_Any* value);
