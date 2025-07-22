#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "XRDepthInformation.h"
#include "enums.h"

typedef struct WebGLTexture WebGLTexture;


typedef struct {
  XRDepthInformation inner;
} XRWebGLDepthInformation;


DECLARE_EMLITE_TYPE(XRWebGLDepthInformation, XRDepthInformation);

WebGLTexture XRWebGLDepthInformation_texture( const XRWebGLDepthInformation *self);

XRTextureType XRWebGLDepthInformation_textureType( const XRWebGLDepthInformation *self);

unsigned long XRWebGLDepthInformation_imageIndex( const XRWebGLDepthInformation *self);
