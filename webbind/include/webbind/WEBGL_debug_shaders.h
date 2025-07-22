#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct WebGLShader WebGLShader;


typedef struct {
  em_Val inner;
} WEBGL_debug_shaders;


DECLARE_EMLITE_TYPE(WEBGL_debug_shaders, em_Val);

jb_DOMString WEBGL_debug_shaders_getTranslatedShaderSource(WEBGL_debug_shaders* self , const WebGLShader* shader);
