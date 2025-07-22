#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct XRReferenceSpace XRReferenceSpace;
typedef struct XRRigidTransform XRRigidTransform;


typedef struct {
  Event inner;
} XRReferenceSpaceEvent;


DECLARE_EMLITE_TYPE(XRReferenceSpaceEvent, Event);

XRReferenceSpaceEvent XRReferenceSpaceEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

XRReferenceSpace XRReferenceSpaceEvent_referenceSpace( const XRReferenceSpaceEvent *self);

XRRigidTransform XRReferenceSpaceEvent_transform( const XRReferenceSpaceEvent *self);
