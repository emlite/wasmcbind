#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} MLGraph;


DECLARE_EMLITE_TYPE(MLGraph, em_Val);

jb_Undefined MLGraph_destroy(MLGraph* self );
