#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "XRCompositionLayer.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRSpace XRSpace;
typedef struct XRRigidTransform XRRigidTransform;


/**
 * @brief Interface XREquirectLayer
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XREquirectLayer)
 */
DECLARE_EMLITE_TYPE(XREquirectLayer, XRCompositionLayer);

/**
 * @brief Gets the `space` property. 
*/
XRSpace XREquirectLayer_space(const XREquirectLayer *self);

/**
 * @brief Sets the `space` property. 
*/
void XREquirectLayer_set_space(XREquirectLayer* self, XRSpace * value);

/**
 * @brief Gets the `transform` property. 
*/
XRRigidTransform XREquirectLayer_transform(const XREquirectLayer *self);

/**
 * @brief Sets the `transform` property. 
*/
void XREquirectLayer_set_transform(XREquirectLayer* self, XRRigidTransform * value);

/**
 * @brief Gets the `radius` property. 
*/
float XREquirectLayer_radius(const XREquirectLayer *self);

/**
 * @brief Sets the `radius` property. 
*/
void XREquirectLayer_set_radius(XREquirectLayer* self, float value);

/**
 * @brief Gets the `centralHorizontalAngle` property. 
*/
float XREquirectLayer_centralHorizontalAngle(const XREquirectLayer *self);

/**
 * @brief Sets the `centralHorizontalAngle` property. 
*/
void XREquirectLayer_set_centralHorizontalAngle(XREquirectLayer* self, float value);

/**
 * @brief Gets the `upperVerticalAngle` property. 
*/
float XREquirectLayer_upperVerticalAngle(const XREquirectLayer *self);

/**
 * @brief Sets the `upperVerticalAngle` property. 
*/
void XREquirectLayer_set_upperVerticalAngle(XREquirectLayer* self, float value);

/**
 * @brief Gets the `lowerVerticalAngle` property. 
*/
float XREquirectLayer_lowerVerticalAngle(const XREquirectLayer *self);

/**
 * @brief Sets the `lowerVerticalAngle` property. 
*/
void XREquirectLayer_set_lowerVerticalAngle(XREquirectLayer* self, float value);

/**
 * @brief Gets the `onredraw` property. 
*/
jb_Any XREquirectLayer_onredraw(const XREquirectLayer *self);

/**
 * @brief Sets the `onredraw` property. 
*/
void XREquirectLayer_set_onredraw(XREquirectLayer* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
