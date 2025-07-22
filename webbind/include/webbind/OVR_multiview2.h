#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct WebGLTexture WebGLTexture;


typedef struct {
  em_Val inner;
} OVR_multiview2;


DECLARE_EMLITE_TYPE(OVR_multiview2, em_Val);

jb_Undefined OVR_multiview2_framebufferTextureMultiviewOVR(OVR_multiview2* self , const jb_Any* target, const jb_Any* attachment, const WebGLTexture* texture, const jb_Any* level, const jb_Any* baseViewIndex, const jb_Any* numViews);
