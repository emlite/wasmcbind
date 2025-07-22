#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} EXT_texture_filter_anisotropic;


DECLARE_EMLITE_TYPE(EXT_texture_filter_anisotropic, em_Val);
