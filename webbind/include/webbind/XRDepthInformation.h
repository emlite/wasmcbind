#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRRigidTransform XRRigidTransform;


/**
 * @brief Interface XRDepthInformation
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRDepthInformation)
 */
DECLARE_EMLITE_TYPE(XRDepthInformation, em_Val);

/**
 * @brief Gets the `width` property. 
*/
unsigned long XRDepthInformation_width(const XRDepthInformation *self);

/**
 * @brief Gets the `height` property. 
*/
unsigned long XRDepthInformation_height(const XRDepthInformation *self);

/**
 * @brief Gets the `normDepthBufferFromNormView` property. 
*/
XRRigidTransform XRDepthInformation_normDepthBufferFromNormView(const XRDepthInformation *self);

/**
 * @brief Gets the `rawValueToMeters` property. 
*/
float XRDepthInformation_rawValueToMeters(const XRDepthInformation *self);

/**
 * @brief Gets the `projectionMatrix` property. 
*/
jb_Float32Array XRDepthInformation_projectionMatrix(const XRDepthInformation *self);

/**
 * @brief Gets the `transform` property. 
*/
XRRigidTransform XRDepthInformation_transform(const XRDepthInformation *self);

#ifdef __cplusplus
}
#endif
