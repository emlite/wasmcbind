#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} EXT_frag_depth;


DECLARE_EMLITE_TYPE(EXT_frag_depth, em_Val);
