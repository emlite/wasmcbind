#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMPointReadOnly DOMPointReadOnly;


/**
 * @brief Interface XRLightEstimate
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRLightEstimate)
 */
DECLARE_EMLITE_TYPE(XRLightEstimate, em_Val);

/**
 * @brief Gets the `sphericalHarmonicsCoefficients` property. 
*/
jb_Float32Array XRLightEstimate_sphericalHarmonicsCoefficients(const XRLightEstimate *self);

/**
 * @brief Gets the `primaryLightDirection` property. 
*/
DOMPointReadOnly XRLightEstimate_primaryLightDirection(const XRLightEstimate *self);

/**
 * @brief Gets the `primaryLightIntensity` property. 
*/
DOMPointReadOnly XRLightEstimate_primaryLightIntensity(const XRLightEstimate *self);

#ifdef __cplusplus
}
#endif
