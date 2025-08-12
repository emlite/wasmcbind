#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRCamera XRCamera;
typedef struct XRRigidTransform XRRigidTransform;


/**
 * @brief Interface XRView
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRView)
 */
DECLARE_EMLITE_TYPE(XRView, em_Val);

/**
 * @brief Gets the `eye` property. 
*/
XREye XRView_eye(const XRView *self);

/**
 * @brief Gets the `recommendedViewportScale` property. 
*/
double XRView_recommendedViewportScale(const XRView *self);

/**
 * @brief Calls the `requestViewportScale` method. 
*/
jb_Undefined XRView_requestViewportScale(XRView* self , double scale);

/**
 * @brief Gets the `camera` property. 
*/
XRCamera XRView_camera(const XRView *self);

/**
 * @brief Gets the `isFirstPersonObserver` property. 
*/
bool XRView_isFirstPersonObserver(const XRView *self);

/**
 * @brief Gets the `projectionMatrix` property. 
*/
jb_Float32Array XRView_projectionMatrix(const XRView *self);

/**
 * @brief Gets the `transform` property. 
*/
XRRigidTransform XRView_transform(const XRView *self);

#ifdef __cplusplus
}
#endif
