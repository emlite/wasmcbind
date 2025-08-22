#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "XRCompositionLayer.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRSpace XRSpace;
typedef struct XRRigidTransform XRRigidTransform;


/**
 * @brief Interface XRQuadLayer
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRQuadLayer)
 */
DECLARE_EMLITE_TYPE(XRQuadLayer, XRCompositionLayer);

/**
 * @brief Gets the `space` property. 
*/
XRSpace XRQuadLayer_space(const XRQuadLayer *self);

/**
 * @brief Sets the `space` property. 
*/
void XRQuadLayer_set_space(XRQuadLayer* self, XRSpace * value);

/**
 * @brief Gets the `transform` property. 
*/
XRRigidTransform XRQuadLayer_transform(const XRQuadLayer *self);

/**
 * @brief Sets the `transform` property. 
*/
void XRQuadLayer_set_transform(XRQuadLayer* self, XRRigidTransform * value);

/**
 * @brief Gets the `width` property. 
*/
float XRQuadLayer_width(const XRQuadLayer *self);

/**
 * @brief Sets the `width` property. 
*/
void XRQuadLayer_set_width(XRQuadLayer* self, float value);

/**
 * @brief Gets the `height` property. 
*/
float XRQuadLayer_height(const XRQuadLayer *self);

/**
 * @brief Sets the `height` property. 
*/
void XRQuadLayer_set_height(XRQuadLayer* self, float value);

/**
 * @brief Gets the `onredraw` property. 
*/
jb_Any XRQuadLayer_onredraw(const XRQuadLayer *self);

/**
 * @brief Sets the `onredraw` property. 
*/
void XRQuadLayer_set_onredraw(XRQuadLayer* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
