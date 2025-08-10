#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRReferenceSpace XRReferenceSpace;
typedef struct XRRigidTransform XRRigidTransform;

DECLARE_EMLITE_TYPE(XRReferenceSpaceEventInit, EventInit);

XRReferenceSpace XRReferenceSpaceEventInit_referenceSpace(const XRReferenceSpaceEventInit *self);

void XRReferenceSpaceEventInit_set_referenceSpace(XRReferenceSpaceEventInit* self, XRReferenceSpace * value);

XRRigidTransform XRReferenceSpaceEventInit_transform(const XRReferenceSpaceEventInit *self);

void XRReferenceSpaceEventInit_set_transform(XRReferenceSpaceEventInit* self, XRRigidTransform * value);

XRReferenceSpaceEventInit XRReferenceSpaceEventInit_new();

#ifdef __cplusplus
}
#endif
