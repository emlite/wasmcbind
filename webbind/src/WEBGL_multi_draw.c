#include <webbind/WEBGL_multi_draw.h>


DEFINE_EMLITE_TYPE(WEBGL_multi_draw, em_Val);


jb_Undefined WEBGL_multi_draw_multiDrawArraysWEBGL(WEBGL_multi_draw* self , jb_Any * mode, jb_Any * firstsList, long long firstsOffset, jb_Any * countsList, long long countsOffset, jb_Any * drawcount) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "multiDrawArraysWEBGL", em_Val_from(mode), em_Val_from(firstsList), em_Val_from(firstsOffset), em_Val_from(countsList), em_Val_from(countsOffset), em_Val_from(drawcount)));
}


jb_Undefined WEBGL_multi_draw_multiDrawElementsWEBGL(WEBGL_multi_draw* self , jb_Any * mode, jb_Any * countsList, long long countsOffset, jb_Any * type, jb_Any * offsetsList, long long offsetsOffset, jb_Any * drawcount) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "multiDrawElementsWEBGL", em_Val_from(mode), em_Val_from(countsList), em_Val_from(countsOffset), em_Val_from(type), em_Val_from(offsetsList), em_Val_from(offsetsOffset), em_Val_from(drawcount)));
}


jb_Undefined WEBGL_multi_draw_multiDrawArraysInstancedWEBGL(WEBGL_multi_draw* self , jb_Any * mode, jb_Any * firstsList, long long firstsOffset, jb_Any * countsList, long long countsOffset, jb_Any * instanceCountsList, long long instanceCountsOffset, jb_Any * drawcount) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "multiDrawArraysInstancedWEBGL", em_Val_from(mode), em_Val_from(firstsList), em_Val_from(firstsOffset), em_Val_from(countsList), em_Val_from(countsOffset), em_Val_from(instanceCountsList), em_Val_from(instanceCountsOffset), em_Val_from(drawcount)));
}


jb_Undefined WEBGL_multi_draw_multiDrawElementsInstancedWEBGL(WEBGL_multi_draw* self , jb_Any * mode, jb_Any * countsList, long long countsOffset, jb_Any * type, jb_Any * offsetsList, long long offsetsOffset, jb_Any * instanceCountsList, long long instanceCountsOffset, jb_Any * drawcount) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "multiDrawElementsInstancedWEBGL", em_Val_from(mode), em_Val_from(countsList), em_Val_from(countsOffset), em_Val_from(type), em_Val_from(offsetsList), em_Val_from(offsetsOffset), em_Val_from(instanceCountsList), em_Val_from(instanceCountsOffset), em_Val_from(drawcount)));
}

