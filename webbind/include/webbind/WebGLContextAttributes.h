#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(WebGLContextAttributes, em_Val);

bool WebGLContextAttributes_xrCompatible(const WebGLContextAttributes *self);

void WebGLContextAttributes_set_xrCompatible(WebGLContextAttributes* self, bool value);

WebGLContextAttributes WebGLContextAttributes_new();

#ifdef __cplusplus
}
#endif
