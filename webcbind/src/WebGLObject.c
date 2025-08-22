#include <webcbind/WebGLObject.h>

DEFINE_EMLITE_TYPE(WebGLObject, em_Val);


jb_String WebGLObject_label(const WebGLObject *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("label")));
}


void WebGLObject_set_label(WebGLObject* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("label"), em_Val_from(value));
}

