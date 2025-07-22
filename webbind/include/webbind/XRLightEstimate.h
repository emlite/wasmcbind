#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct DOMPointReadOnly DOMPointReadOnly;


typedef struct {
  em_Val inner;
} XRLightEstimate;


DECLARE_EMLITE_TYPE(XRLightEstimate, em_Val);

jb_Float32Array XRLightEstimate_sphericalHarmonicsCoefficients( const XRLightEstimate *self);

DOMPointReadOnly XRLightEstimate_primaryLightDirection( const XRLightEstimate *self);

DOMPointReadOnly XRLightEstimate_primaryLightIntensity( const XRLightEstimate *self);
