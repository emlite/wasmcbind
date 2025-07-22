#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} NamedFlowMap;


DECLARE_EMLITE_TYPE(NamedFlowMap, em_Val);
