#include <webbind/WebGLActiveInfo.h>


DEFINE_EMLITE_TYPE(WebGLActiveInfo, em_Val);


jb_Any WebGLActiveInfo_size(const WebGLActiveInfo *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("size")));
}


jb_Any WebGLActiveInfo_type(const WebGLActiveInfo *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


jb_DOMString WebGLActiveInfo_name(const WebGLActiveInfo *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}

