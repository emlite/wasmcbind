#include <webbind/WebGLContextAttributes.h>

DEFINE_EMLITE_TYPE(WebGLContextAttributes, em_Val);


bool WebGLContextAttributes_xrCompatible(const WebGLContextAttributes *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("xrCompatible")));
}


void WebGLContextAttributes_set_xrCompatible(WebGLContextAttributes* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("xrCompatible"), em_Val_from(value));
}


WebGLContextAttributes WebGLContextAttributes_new() {
    em_Val obj = em_Val_object();
    return WebGLContextAttributes_from_val(&obj);
}

