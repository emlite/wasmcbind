#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct XRQuadLayer XRQuadLayer;
typedef struct HTMLVideoElement HTMLVideoElement;
typedef struct XRMediaQuadLayerInit XRMediaQuadLayerInit;
typedef struct XRCylinderLayer XRCylinderLayer;
typedef struct XRMediaCylinderLayerInit XRMediaCylinderLayerInit;
typedef struct XREquirectLayer XREquirectLayer;
typedef struct XRMediaEquirectLayerInit XRMediaEquirectLayerInit;
typedef struct XRRigidTransform XRRigidTransform;
typedef struct XRSession XRSession;


typedef struct {
  em_Val inner;
} XRMediaQuadLayerInit;


DECLARE_EMLITE_TYPE(XRMediaQuadLayerInit, em_Val);

XRRigidTransform XRMediaQuadLayerInit_transform( const XRMediaQuadLayerInit *self);

void XRMediaQuadLayerInit_set_transform(XRMediaQuadLayerInit* self, const XRRigidTransform* value);

float XRMediaQuadLayerInit_width( const XRMediaQuadLayerInit *self);

void XRMediaQuadLayerInit_set_width(XRMediaQuadLayerInit* self, float value);

float XRMediaQuadLayerInit_height( const XRMediaQuadLayerInit *self);

void XRMediaQuadLayerInit_set_height(XRMediaQuadLayerInit* self, float value);
typedef struct {
  em_Val inner;
} XRMediaCylinderLayerInit;


DECLARE_EMLITE_TYPE(XRMediaCylinderLayerInit, em_Val);

XRRigidTransform XRMediaCylinderLayerInit_transform( const XRMediaCylinderLayerInit *self);

void XRMediaCylinderLayerInit_set_transform(XRMediaCylinderLayerInit* self, const XRRigidTransform* value);

float XRMediaCylinderLayerInit_radius( const XRMediaCylinderLayerInit *self);

void XRMediaCylinderLayerInit_set_radius(XRMediaCylinderLayerInit* self, float value);

float XRMediaCylinderLayerInit_centralAngle( const XRMediaCylinderLayerInit *self);

void XRMediaCylinderLayerInit_set_centralAngle(XRMediaCylinderLayerInit* self, float value);

float XRMediaCylinderLayerInit_aspectRatio( const XRMediaCylinderLayerInit *self);

void XRMediaCylinderLayerInit_set_aspectRatio(XRMediaCylinderLayerInit* self, float value);
typedef struct {
  em_Val inner;
} XRMediaEquirectLayerInit;


DECLARE_EMLITE_TYPE(XRMediaEquirectLayerInit, em_Val);

XRRigidTransform XRMediaEquirectLayerInit_transform( const XRMediaEquirectLayerInit *self);

void XRMediaEquirectLayerInit_set_transform(XRMediaEquirectLayerInit* self, const XRRigidTransform* value);

float XRMediaEquirectLayerInit_radius( const XRMediaEquirectLayerInit *self);

void XRMediaEquirectLayerInit_set_radius(XRMediaEquirectLayerInit* self, float value);

float XRMediaEquirectLayerInit_centralHorizontalAngle( const XRMediaEquirectLayerInit *self);

void XRMediaEquirectLayerInit_set_centralHorizontalAngle(XRMediaEquirectLayerInit* self, float value);

float XRMediaEquirectLayerInit_upperVerticalAngle( const XRMediaEquirectLayerInit *self);

void XRMediaEquirectLayerInit_set_upperVerticalAngle(XRMediaEquirectLayerInit* self, float value);

float XRMediaEquirectLayerInit_lowerVerticalAngle( const XRMediaEquirectLayerInit *self);

void XRMediaEquirectLayerInit_set_lowerVerticalAngle(XRMediaEquirectLayerInit* self, float value);
typedef struct {
  em_Val inner;
} XRMediaBinding;


DECLARE_EMLITE_TYPE(XRMediaBinding, em_Val);

XRMediaBinding XRMediaBinding_new(const XRSession* session);

XRQuadLayer XRMediaBinding_createQuadLayer(XRMediaBinding* self , const HTMLVideoElement* video);

XRQuadLayer XRMediaBinding_createQuadLayer(XRMediaBinding* self , const HTMLVideoElement* video, const XRMediaQuadLayerInit* init);

XRCylinderLayer XRMediaBinding_createCylinderLayer(XRMediaBinding* self , const HTMLVideoElement* video);

XRCylinderLayer XRMediaBinding_createCylinderLayer(XRMediaBinding* self , const HTMLVideoElement* video, const XRMediaCylinderLayerInit* init);

XREquirectLayer XRMediaBinding_createEquirectLayer(XRMediaBinding* self , const HTMLVideoElement* video);

XREquirectLayer XRMediaBinding_createEquirectLayer(XRMediaBinding* self , const HTMLVideoElement* video, const XRMediaEquirectLayerInit* init);
