#include <webbind/EXT_disjoint_timer_query.h>

#include <webbind/WebGLTimerQueryEXT.h>

DEFINE_EMLITE_TYPE(EXT_disjoint_timer_query, em_Val);


WebGLTimerQueryEXT EXT_disjoint_timer_query_createQueryEXT(EXT_disjoint_timer_query* self ) {
    return em_Val_as(WebGLTimerQueryEXT, em_Val_call(em_Val_as_val(self->inner), "createQueryEXT"));
}


jb_Undefined EXT_disjoint_timer_query_deleteQueryEXT(EXT_disjoint_timer_query* self , WebGLTimerQueryEXT * query) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "deleteQueryEXT", em_Val_from(query)));
}


bool EXT_disjoint_timer_query_isQueryEXT(EXT_disjoint_timer_query* self , WebGLTimerQueryEXT * query) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "isQueryEXT", em_Val_from(query)));
}


jb_Undefined EXT_disjoint_timer_query_beginQueryEXT(EXT_disjoint_timer_query* self , jb_Any * target, WebGLTimerQueryEXT * query) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "beginQueryEXT", em_Val_from(target), em_Val_from(query)));
}


jb_Undefined EXT_disjoint_timer_query_endQueryEXT(EXT_disjoint_timer_query* self , jb_Any * target) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "endQueryEXT", em_Val_from(target)));
}


jb_Undefined EXT_disjoint_timer_query_queryCounterEXT(EXT_disjoint_timer_query* self , WebGLTimerQueryEXT * query, jb_Any * target) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "queryCounterEXT", em_Val_from(query), em_Val_from(target)));
}


jb_Any EXT_disjoint_timer_query_getQueryEXT(EXT_disjoint_timer_query* self , jb_Any * target, jb_Any * pname) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "getQueryEXT", em_Val_from(target), em_Val_from(pname)));
}


jb_Any EXT_disjoint_timer_query_getQueryObjectEXT(EXT_disjoint_timer_query* self , WebGLTimerQueryEXT * query, jb_Any * pname) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "getQueryObjectEXT", em_Val_from(query), em_Val_from(pname)));
}

