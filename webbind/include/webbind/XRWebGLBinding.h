#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRSession XRSession;
typedef struct XRProjectionLayer XRProjectionLayer;
typedef struct XRProjectionLayerInit XRProjectionLayerInit;
typedef struct XRQuadLayer XRQuadLayer;
typedef struct XRQuadLayerInit XRQuadLayerInit;
typedef struct XRCylinderLayer XRCylinderLayer;
typedef struct XRCylinderLayerInit XRCylinderLayerInit;
typedef struct XREquirectLayer XREquirectLayer;
typedef struct XREquirectLayerInit XREquirectLayerInit;
typedef struct XRCubeLayer XRCubeLayer;
typedef struct XRCubeLayerInit XRCubeLayerInit;
typedef struct XRWebGLSubImage XRWebGLSubImage;
typedef struct XRCompositionLayer XRCompositionLayer;
typedef struct XRFrame XRFrame;
typedef struct XRView XRView;
typedef struct WebGLTexture WebGLTexture;
typedef struct XRCamera XRCamera;
typedef struct XRWebGLDepthInformation XRWebGLDepthInformation;
typedef struct XRLightProbe XRLightProbe;


/**
 * @brief Interface XRWebGLBinding
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLBinding)
 */
DECLARE_EMLITE_TYPE(XRWebGLBinding, em_Val);

/**
 * @brief Creates a new `XRWebGLBinding` object. 
*/
XRWebGLBinding XRWebGLBinding_new(XRSession * session, jb_Any * context);

/**
 * @brief Gets the `nativeProjectionScaleFactor` property. 
*/
double XRWebGLBinding_nativeProjectionScaleFactor(const XRWebGLBinding *self);

/**
 * @brief Gets the `usesDepthValues` property. 
*/
bool XRWebGLBinding_usesDepthValues(const XRWebGLBinding *self);

/**
 * @brief Calls the `createProjectionLayer` method. 
*/
XRProjectionLayer XRWebGLBinding_createProjectionLayer0(XRWebGLBinding* self );

/**
 * @brief Calls the `createProjectionLayer` method. 
*/
XRProjectionLayer XRWebGLBinding_createProjectionLayer1(XRWebGLBinding* self , XRProjectionLayerInit * init);

/**
 * @brief Calls the `createQuadLayer` method. 
*/
XRQuadLayer XRWebGLBinding_createQuadLayer0(XRWebGLBinding* self );

/**
 * @brief Calls the `createQuadLayer` method. 
*/
XRQuadLayer XRWebGLBinding_createQuadLayer1(XRWebGLBinding* self , XRQuadLayerInit * init);

/**
 * @brief Calls the `createCylinderLayer` method. 
*/
XRCylinderLayer XRWebGLBinding_createCylinderLayer0(XRWebGLBinding* self );

/**
 * @brief Calls the `createCylinderLayer` method. 
*/
XRCylinderLayer XRWebGLBinding_createCylinderLayer1(XRWebGLBinding* self , XRCylinderLayerInit * init);

/**
 * @brief Calls the `createEquirectLayer` method. 
*/
XREquirectLayer XRWebGLBinding_createEquirectLayer0(XRWebGLBinding* self );

/**
 * @brief Calls the `createEquirectLayer` method. 
*/
XREquirectLayer XRWebGLBinding_createEquirectLayer1(XRWebGLBinding* self , XREquirectLayerInit * init);

/**
 * @brief Calls the `createCubeLayer` method. 
*/
XRCubeLayer XRWebGLBinding_createCubeLayer0(XRWebGLBinding* self );

/**
 * @brief Calls the `createCubeLayer` method. 
*/
XRCubeLayer XRWebGLBinding_createCubeLayer1(XRWebGLBinding* self , XRCubeLayerInit * init);

/**
 * @brief Calls the `getSubImage` method. 
*/
XRWebGLSubImage XRWebGLBinding_getSubImage0(XRWebGLBinding* self , XRCompositionLayer * layer, XRFrame * frame);

/**
 * @brief Calls the `getSubImage` method. 
*/
XRWebGLSubImage XRWebGLBinding_getSubImage1(XRWebGLBinding* self , XRCompositionLayer * layer, XRFrame * frame, XREye * eye);

/**
 * @brief Calls the `getViewSubImage` method. 
*/
XRWebGLSubImage XRWebGLBinding_getViewSubImage(XRWebGLBinding* self , XRProjectionLayer * layer, XRView * view);

/**
 * @brief Calls the `foveateBoundTexture` method. 
*/
jb_Undefined XRWebGLBinding_foveateBoundTexture(XRWebGLBinding* self , jb_Any * target, float fixed_foveation);

/**
 * @brief Calls the `getCameraImage` method. 
*/
WebGLTexture XRWebGLBinding_getCameraImage(XRWebGLBinding* self , XRCamera * camera);

/**
 * @brief Calls the `getDepthInformation` method. 
*/
XRWebGLDepthInformation XRWebGLBinding_getDepthInformation(XRWebGLBinding* self , XRView * view);

/**
 * @brief Calls the `getReflectionCubeMap` method. 
*/
WebGLTexture XRWebGLBinding_getReflectionCubeMap(XRWebGLBinding* self , XRLightProbe * lightProbe);

#ifdef __cplusplus
}
#endif
