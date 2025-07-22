#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} AudioParamMap;


DECLARE_EMLITE_TYPE(AudioParamMap, em_Val);
