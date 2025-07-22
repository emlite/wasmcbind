#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} ViewTransitionTypeSet;


DECLARE_EMLITE_TYPE(ViewTransitionTypeSet, em_Val);
