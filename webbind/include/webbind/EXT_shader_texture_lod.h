#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} EXT_shader_texture_lod;


DECLARE_EMLITE_TYPE(EXT_shader_texture_lod, em_Val);
