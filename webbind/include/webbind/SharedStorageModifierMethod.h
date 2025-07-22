#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} SharedStorageModifierMethod;


DECLARE_EMLITE_TYPE(SharedStorageModifierMethod, em_Val);
