#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct XRViewport XRViewport;


typedef struct {
  em_Val inner;
} XRSubImage;


DECLARE_EMLITE_TYPE(XRSubImage, em_Val);

XRViewport XRSubImage_viewport( const XRSubImage *self);
