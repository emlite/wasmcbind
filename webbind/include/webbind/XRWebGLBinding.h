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

DECLARE_EMLITE_TYPE(XRWebGLBinding, em_Val);

XRWebGLBinding XRWebGLBinding_new(XRSession * session, jb_Any * context);

double XRWebGLBinding_nativeProjectionScaleFactor(const XRWebGLBinding *self);

bool XRWebGLBinding_usesDepthValues(const XRWebGLBinding *self);

XRProjectionLayer XRWebGLBinding_createProjectionLayer0(XRWebGLBinding* self );

XRProjectionLayer XRWebGLBinding_createProjectionLayer1(XRWebGLBinding* self , XRProjectionLayerInit * init);

XRQuadLayer XRWebGLBinding_createQuadLayer0(XRWebGLBinding* self );

XRQuadLayer XRWebGLBinding_createQuadLayer1(XRWebGLBinding* self , XRQuadLayerInit * init);

XRCylinderLayer XRWebGLBinding_createCylinderLayer0(XRWebGLBinding* self );

XRCylinderLayer XRWebGLBinding_createCylinderLayer1(XRWebGLBinding* self , XRCylinderLayerInit * init);

XREquirectLayer XRWebGLBinding_createEquirectLayer0(XRWebGLBinding* self );

XREquirectLayer XRWebGLBinding_createEquirectLayer1(XRWebGLBinding* self , XREquirectLayerInit * init);

XRCubeLayer XRWebGLBinding_createCubeLayer0(XRWebGLBinding* self );

XRCubeLayer XRWebGLBinding_createCubeLayer1(XRWebGLBinding* self , XRCubeLayerInit * init);

XRWebGLSubImage XRWebGLBinding_getSubImage0(XRWebGLBinding* self , XRCompositionLayer * layer, XRFrame * frame);

XRWebGLSubImage XRWebGLBinding_getSubImage1(XRWebGLBinding* self , XRCompositionLayer * layer, XRFrame * frame, XREye * eye);

XRWebGLSubImage XRWebGLBinding_getViewSubImage(XRWebGLBinding* self , XRProjectionLayer * layer, XRView * view);

jb_Undefined XRWebGLBinding_foveateBoundTexture(XRWebGLBinding* self , jb_Any * target, float fixed_foveation);

WebGLTexture XRWebGLBinding_getCameraImage(XRWebGLBinding* self , XRCamera * camera);

XRWebGLDepthInformation XRWebGLBinding_getDepthInformation(XRWebGLBinding* self , XRView * view);

WebGLTexture XRWebGLBinding_getReflectionCubeMap(XRWebGLBinding* self , XRLightProbe * lightProbe);

#ifdef __cplusplus
}
#endif
