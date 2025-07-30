#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct WebGLShader WebGLShader;


DECLARE_EMLITE_TYPE(WEBGL_debug_shaders, em_Val);

jb_String WEBGL_debug_shaders_getTranslatedShaderSource(WEBGL_debug_shaders* self , WebGLShader * shader);
