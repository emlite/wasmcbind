#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct XRReferenceSpace XRReferenceSpace;
typedef struct XRRigidTransform XRRigidTransform;


DECLARE_EMLITE_TYPE(XRReferenceSpaceEvent, Event);

XRReferenceSpaceEvent XRReferenceSpaceEvent_new(jb_String * type, jb_Any * eventInitDict);

XRReferenceSpace XRReferenceSpaceEvent_referenceSpace(const XRReferenceSpaceEvent *self);

XRRigidTransform XRReferenceSpaceEvent_transform(const XRReferenceSpaceEvent *self);
