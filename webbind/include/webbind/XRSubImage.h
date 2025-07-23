#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct XRViewport XRViewport;


DECLARE_EMLITE_TYPE(XRSubImage, em_Val);

XRViewport XRSubImage_viewport(const XRSubImage *self);
