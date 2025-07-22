#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} CustomStateSet;


DECLARE_EMLITE_TYPE(CustomStateSet, em_Val);
