#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

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
typedef struct XRRigidTransform XRRigidTransform;
typedef struct DOMPointReadOnly DOMPointReadOnly;
typedef struct XRSession XRSession;


typedef struct {
  em_Val inner;
} XRProjectionLayerInit;


DECLARE_EMLITE_TYPE(XRProjectionLayerInit, em_Val);

XRTextureType XRProjectionLayerInit_textureType( const XRProjectionLayerInit *self);

void XRProjectionLayerInit_set_textureType(XRProjectionLayerInit* self, const XRTextureType* value);

jb_Any XRProjectionLayerInit_colorFormat( const XRProjectionLayerInit *self);

void XRProjectionLayerInit_set_colorFormat(XRProjectionLayerInit* self, const jb_Any* value);

jb_Any XRProjectionLayerInit_depthFormat( const XRProjectionLayerInit *self);

void XRProjectionLayerInit_set_depthFormat(XRProjectionLayerInit* self, const jb_Any* value);

double XRProjectionLayerInit_scaleFactor( const XRProjectionLayerInit *self);

void XRProjectionLayerInit_set_scaleFactor(XRProjectionLayerInit* self, double value);

bool XRProjectionLayerInit_clearOnAccess( const XRProjectionLayerInit *self);

void XRProjectionLayerInit_set_clearOnAccess(XRProjectionLayerInit* self, bool value);
typedef struct {
  em_Val inner;
} XRQuadLayerInit;


DECLARE_EMLITE_TYPE(XRQuadLayerInit, em_Val);

XRTextureType XRQuadLayerInit_textureType( const XRQuadLayerInit *self);

void XRQuadLayerInit_set_textureType(XRQuadLayerInit* self, const XRTextureType* value);

XRRigidTransform XRQuadLayerInit_transform( const XRQuadLayerInit *self);

void XRQuadLayerInit_set_transform(XRQuadLayerInit* self, const XRRigidTransform* value);

float XRQuadLayerInit_width( const XRQuadLayerInit *self);

void XRQuadLayerInit_set_width(XRQuadLayerInit* self, float value);

float XRQuadLayerInit_height( const XRQuadLayerInit *self);

void XRQuadLayerInit_set_height(XRQuadLayerInit* self, float value);
typedef struct {
  em_Val inner;
} XRCylinderLayerInit;


DECLARE_EMLITE_TYPE(XRCylinderLayerInit, em_Val);

XRTextureType XRCylinderLayerInit_textureType( const XRCylinderLayerInit *self);

void XRCylinderLayerInit_set_textureType(XRCylinderLayerInit* self, const XRTextureType* value);

XRRigidTransform XRCylinderLayerInit_transform( const XRCylinderLayerInit *self);

void XRCylinderLayerInit_set_transform(XRCylinderLayerInit* self, const XRRigidTransform* value);

float XRCylinderLayerInit_radius( const XRCylinderLayerInit *self);

void XRCylinderLayerInit_set_radius(XRCylinderLayerInit* self, float value);

float XRCylinderLayerInit_centralAngle( const XRCylinderLayerInit *self);

void XRCylinderLayerInit_set_centralAngle(XRCylinderLayerInit* self, float value);

float XRCylinderLayerInit_aspectRatio( const XRCylinderLayerInit *self);

void XRCylinderLayerInit_set_aspectRatio(XRCylinderLayerInit* self, float value);
typedef struct {
  em_Val inner;
} XREquirectLayerInit;


DECLARE_EMLITE_TYPE(XREquirectLayerInit, em_Val);

XRTextureType XREquirectLayerInit_textureType( const XREquirectLayerInit *self);

void XREquirectLayerInit_set_textureType(XREquirectLayerInit* self, const XRTextureType* value);

XRRigidTransform XREquirectLayerInit_transform( const XREquirectLayerInit *self);

void XREquirectLayerInit_set_transform(XREquirectLayerInit* self, const XRRigidTransform* value);

float XREquirectLayerInit_radius( const XREquirectLayerInit *self);

void XREquirectLayerInit_set_radius(XREquirectLayerInit* self, float value);

float XREquirectLayerInit_centralHorizontalAngle( const XREquirectLayerInit *self);

void XREquirectLayerInit_set_centralHorizontalAngle(XREquirectLayerInit* self, float value);

float XREquirectLayerInit_upperVerticalAngle( const XREquirectLayerInit *self);

void XREquirectLayerInit_set_upperVerticalAngle(XREquirectLayerInit* self, float value);

float XREquirectLayerInit_lowerVerticalAngle( const XREquirectLayerInit *self);

void XREquirectLayerInit_set_lowerVerticalAngle(XREquirectLayerInit* self, float value);
typedef struct {
  em_Val inner;
} XRCubeLayerInit;


DECLARE_EMLITE_TYPE(XRCubeLayerInit, em_Val);

DOMPointReadOnly XRCubeLayerInit_orientation( const XRCubeLayerInit *self);

void XRCubeLayerInit_set_orientation(XRCubeLayerInit* self, const DOMPointReadOnly* value);
typedef struct {
  em_Val inner;
} XRWebGLBinding;


DECLARE_EMLITE_TYPE(XRWebGLBinding, em_Val);

XRWebGLBinding XRWebGLBinding_new(const XRSession* session, const jb_Any* context);

double XRWebGLBinding_nativeProjectionScaleFactor( const XRWebGLBinding *self);

bool XRWebGLBinding_usesDepthValues( const XRWebGLBinding *self);

XRProjectionLayer XRWebGLBinding_createProjectionLayer(XRWebGLBinding* self );

XRProjectionLayer XRWebGLBinding_createProjectionLayer(XRWebGLBinding* self , const XRProjectionLayerInit* init);

XRQuadLayer XRWebGLBinding_createQuadLayer(XRWebGLBinding* self );

XRQuadLayer XRWebGLBinding_createQuadLayer(XRWebGLBinding* self , const XRQuadLayerInit* init);

XRCylinderLayer XRWebGLBinding_createCylinderLayer(XRWebGLBinding* self );

XRCylinderLayer XRWebGLBinding_createCylinderLayer(XRWebGLBinding* self , const XRCylinderLayerInit* init);

XREquirectLayer XRWebGLBinding_createEquirectLayer(XRWebGLBinding* self );

XREquirectLayer XRWebGLBinding_createEquirectLayer(XRWebGLBinding* self , const XREquirectLayerInit* init);

XRCubeLayer XRWebGLBinding_createCubeLayer(XRWebGLBinding* self );

XRCubeLayer XRWebGLBinding_createCubeLayer(XRWebGLBinding* self , const XRCubeLayerInit* init);

XRWebGLSubImage XRWebGLBinding_getSubImage(XRWebGLBinding* self , const XRCompositionLayer* layer, const XRFrame* frame);

XRWebGLSubImage XRWebGLBinding_getSubImage(XRWebGLBinding* self , const XRCompositionLayer* layer, const XRFrame* frame, const XREye* eye);

XRWebGLSubImage XRWebGLBinding_getViewSubImage(XRWebGLBinding* self , const XRProjectionLayer* layer, const XRView* view);

jb_Undefined XRWebGLBinding_foveateBoundTexture(XRWebGLBinding* self , const jb_Any* target, float fixed_foveation);

WebGLTexture XRWebGLBinding_getCameraImage(XRWebGLBinding* self , const XRCamera* camera);

XRWebGLDepthInformation XRWebGLBinding_getDepthInformation(XRWebGLBinding* self , const XRView* view);

WebGLTexture XRWebGLBinding_getReflectionCubeMap(XRWebGLBinding* self , const XRLightProbe* lightProbe);
