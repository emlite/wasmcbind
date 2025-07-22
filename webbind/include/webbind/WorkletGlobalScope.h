#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} WorkletGlobalScope;


DECLARE_EMLITE_TYPE(WorkletGlobalScope, em_Val);
