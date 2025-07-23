#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "XRReferenceSpace.h"
#include "enums.h"

typedef struct DOMPointReadOnly DOMPointReadOnly;


DECLARE_EMLITE_TYPE(XRBoundedReferenceSpace, XRReferenceSpace);

jb_FrozenArray XRBoundedReferenceSpace_boundsGeometry(const XRBoundedReferenceSpace *self);
