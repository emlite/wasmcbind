#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} OES_element_index_uint;


DECLARE_EMLITE_TYPE(OES_element_index_uint, em_Val);
