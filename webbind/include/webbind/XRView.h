#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct XRCamera XRCamera;
typedef struct XRRigidTransform XRRigidTransform;


typedef struct {
  em_Val inner;
} XRView;


DECLARE_EMLITE_TYPE(XRView, em_Val);

XREye XRView_eye( const XRView *self);

double XRView_recommendedViewportScale( const XRView *self);

jb_Undefined XRView_requestViewportScale(XRView* self , double scale);

XRCamera XRView_camera( const XRView *self);

bool XRView_isFirstPersonObserver( const XRView *self);

jb_Float32Array XRView_projectionMatrix( const XRView *self);

XRRigidTransform XRView_transform( const XRView *self);
