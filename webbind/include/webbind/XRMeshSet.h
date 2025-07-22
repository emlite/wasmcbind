#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} XRMeshSet;


DECLARE_EMLITE_TYPE(XRMeshSet, em_Val);
