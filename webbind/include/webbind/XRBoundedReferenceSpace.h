#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "XRReferenceSpace.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMPointReadOnly DOMPointReadOnly;

DECLARE_EMLITE_TYPE(XRBoundedReferenceSpace, XRReferenceSpace);

jb_Array XRBoundedReferenceSpace_boundsGeometry(const XRBoundedReferenceSpace *self);

#ifdef __cplusplus
}
#endif
