#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct WebGLTimerQueryEXT WebGLTimerQueryEXT;


typedef struct {
  em_Val inner;
} EXT_disjoint_timer_query;


DECLARE_EMLITE_TYPE(EXT_disjoint_timer_query, em_Val);

WebGLTimerQueryEXT EXT_disjoint_timer_query_createQueryEXT(EXT_disjoint_timer_query* self );

jb_Undefined EXT_disjoint_timer_query_deleteQueryEXT(EXT_disjoint_timer_query* self , const WebGLTimerQueryEXT* query);

bool EXT_disjoint_timer_query_isQueryEXT(EXT_disjoint_timer_query* self , const WebGLTimerQueryEXT* query);

jb_Undefined EXT_disjoint_timer_query_beginQueryEXT(EXT_disjoint_timer_query* self , const jb_Any* target, const WebGLTimerQueryEXT* query);

jb_Undefined EXT_disjoint_timer_query_endQueryEXT(EXT_disjoint_timer_query* self , const jb_Any* target);

jb_Undefined EXT_disjoint_timer_query_queryCounterEXT(EXT_disjoint_timer_query* self , const WebGLTimerQueryEXT* query, const jb_Any* target);

jb_Any EXT_disjoint_timer_query_getQueryEXT(EXT_disjoint_timer_query* self , const jb_Any* target, const jb_Any* pname);

jb_Any EXT_disjoint_timer_query_getQueryObjectEXT(EXT_disjoint_timer_query* self , const WebGLTimerQueryEXT* query, const jb_Any* pname);
