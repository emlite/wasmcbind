#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} KHR_parallel_shader_compile;


DECLARE_EMLITE_TYPE(KHR_parallel_shader_compile, em_Val);
