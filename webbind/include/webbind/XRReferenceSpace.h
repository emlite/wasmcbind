#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "XRSpace.h"
#include "enums.h"

typedef struct XRReferenceSpace XRReferenceSpace;
typedef struct XRRigidTransform XRRigidTransform;


typedef struct {
  XRSpace inner;
} XRReferenceSpace;


DECLARE_EMLITE_TYPE(XRReferenceSpace, XRSpace);

XRReferenceSpace XRReferenceSpace_getOffsetReferenceSpace(XRReferenceSpace* self , const XRRigidTransform* originOffset);

jb_Any XRReferenceSpace_onreset( const XRReferenceSpace *self);

void XRReferenceSpace_set_onreset(XRReferenceSpace* self, const jb_Any* value);
