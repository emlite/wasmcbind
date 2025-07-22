#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} XRPlaneSet;


DECLARE_EMLITE_TYPE(XRPlaneSet, em_Val);
