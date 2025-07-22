#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} XRAnchorSet;


DECLARE_EMLITE_TYPE(XRAnchorSet, em_Val);
