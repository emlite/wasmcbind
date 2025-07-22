#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} KeyboardLayoutMap;


DECLARE_EMLITE_TYPE(KeyboardLayoutMap, em_Val);
