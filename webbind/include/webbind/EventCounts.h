#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} EventCounts;


DECLARE_EMLITE_TYPE(EventCounts, em_Val);
