#include <webbind/WebGLContextEventInit.h>

DEFINE_EMLITE_TYPE(WebGLContextEventInit, EventInit);


jb_String WebGLContextEventInit_statusMessage(const WebGLContextEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("statusMessage")));
}


void WebGLContextEventInit_set_statusMessage(WebGLContextEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("statusMessage"), em_Val_from(value));
}


WebGLContextEventInit WebGLContextEventInit_new() {
    em_Val obj = em_Val_object();
    return WebGLContextEventInit_from_val(&obj);
}

