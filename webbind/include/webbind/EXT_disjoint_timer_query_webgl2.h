#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct WebGLQuery WebGLQuery;


typedef struct {
  em_Val inner;
} EXT_disjoint_timer_query_webgl2;


DECLARE_EMLITE_TYPE(EXT_disjoint_timer_query_webgl2, em_Val);

jb_Undefined EXT_disjoint_timer_query_webgl2_queryCounterEXT(EXT_disjoint_timer_query_webgl2* self , const WebGLQuery* query, const jb_Any* target);
