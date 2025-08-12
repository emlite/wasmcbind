#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "XRCompositionLayer.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRRigidTransform XRRigidTransform;


/**
 * @brief Interface XRProjectionLayer
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRProjectionLayer)
 */
DECLARE_EMLITE_TYPE(XRProjectionLayer, XRCompositionLayer);

/**
 * @brief Gets the `textureWidth` property. 
*/
unsigned long XRProjectionLayer_textureWidth(const XRProjectionLayer *self);

/**
 * @brief Gets the `textureHeight` property. 
*/
unsigned long XRProjectionLayer_textureHeight(const XRProjectionLayer *self);

/**
 * @brief Gets the `textureArrayLength` property. 
*/
unsigned long XRProjectionLayer_textureArrayLength(const XRProjectionLayer *self);

/**
 * @brief Gets the `ignoreDepthValues` property. 
*/
bool XRProjectionLayer_ignoreDepthValues(const XRProjectionLayer *self);

/**
 * @brief Gets the `fixedFoveation` property. 
*/
float XRProjectionLayer_fixedFoveation(const XRProjectionLayer *self);

/**
 * @brief Sets the `fixedFoveation` property. 
*/
void XRProjectionLayer_set_fixedFoveation(XRProjectionLayer* self, float value);

/**
 * @brief Gets the `deltaPose` property. 
*/
XRRigidTransform XRProjectionLayer_deltaPose(const XRProjectionLayer *self);

/**
 * @brief Sets the `deltaPose` property. 
*/
void XRProjectionLayer_set_deltaPose(XRProjectionLayer* self, XRRigidTransform * value);

#ifdef __cplusplus
}
#endif
