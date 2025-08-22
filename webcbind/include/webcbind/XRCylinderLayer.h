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
 * @brief Interface XRCylinderLayer
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRCylinderLayer)
 */
DECLARE_EMLITE_TYPE(XRCylinderLayer, XRCompositionLayer);

/**
 * @brief Gets the `space` property. 
*/
XRSpace XRCylinderLayer_space(const XRCylinderLayer *self);

/**
 * @brief Sets the `space` property. 
*/
void XRCylinderLayer_set_space(XRCylinderLayer* self, XRSpace * value);

/**
 * @brief Gets the `transform` property. 
*/
XRRigidTransform XRCylinderLayer_transform(const XRCylinderLayer *self);

/**
 * @brief Sets the `transform` property. 
*/
void XRCylinderLayer_set_transform(XRCylinderLayer* self, XRRigidTransform * value);

/**
 * @brief Gets the `radius` property. 
*/
float XRCylinderLayer_radius(const XRCylinderLayer *self);

/**
 * @brief Sets the `radius` property. 
*/
void XRCylinderLayer_set_radius(XRCylinderLayer* self, float value);

/**
 * @brief Gets the `centralAngle` property. 
*/
float XRCylinderLayer_centralAngle(const XRCylinderLayer *self);

/**
 * @brief Sets the `centralAngle` property. 
*/
void XRCylinderLayer_set_centralAngle(XRCylinderLayer* self, float value);

/**
 * @brief Gets the `aspectRatio` property. 
*/
float XRCylinderLayer_aspectRatio(const XRCylinderLayer *self);

/**
 * @brief Sets the `aspectRatio` property. 
*/
void XRCylinderLayer_set_aspectRatio(XRCylinderLayer* self, float value);

/**
 * @brief Gets the `onredraw` property. 
*/
jb_Any XRCylinderLayer_onredraw(const XRCylinderLayer *self);

/**
 * @brief Sets the `onredraw` property. 
*/
void XRCylinderLayer_set_onredraw(XRCylinderLayer* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
