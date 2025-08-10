#include <webbind/EXT_disjoint_timer_query_webgl2.h>

#include <webbind/WebGLQuery.h>

DEFINE_EMLITE_TYPE(EXT_disjoint_timer_query_webgl2, em_Val);


jb_Undefined EXT_disjoint_timer_query_webgl2_queryCounterEXT(EXT_disjoint_timer_query_webgl2* self , WebGLQuery * query, jb_Any * target) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "queryCounterEXT", em_Val_from(query), em_Val_from(target)));
}

