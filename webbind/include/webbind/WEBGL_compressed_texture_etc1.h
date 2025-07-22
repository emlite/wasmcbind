#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} WEBGL_compressed_texture_etc1;


DECLARE_EMLITE_TYPE(WEBGL_compressed_texture_etc1, em_Val);
