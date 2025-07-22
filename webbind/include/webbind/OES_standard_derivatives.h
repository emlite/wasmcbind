#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} OES_standard_derivatives;


DECLARE_EMLITE_TYPE(OES_standard_derivatives, em_Val);
