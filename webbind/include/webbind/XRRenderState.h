#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct XRWebGLLayer XRWebGLLayer;
typedef struct XRLayer XRLayer;


typedef struct {
  em_Val inner;
} XRRenderState;


DECLARE_EMLITE_TYPE(XRRenderState, em_Val);

double XRRenderState_depthNear( const XRRenderState *self);

double XRRenderState_depthFar( const XRRenderState *self);

bool XRRenderState_passthroughFullyObscured( const XRRenderState *self);

double XRRenderState_inlineVerticalFieldOfView( const XRRenderState *self);

XRWebGLLayer XRRenderState_baseLayer( const XRRenderState *self);

jb_FrozenArray XRRenderState_layers( const XRRenderState *self);
