#include <webbind/GPURenderBundle.h>


DEFINE_EMLITE_TYPE(GPURenderBundle, em_Val);


jb_USVString GPURenderBundle_label(const GPURenderBundle *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("label")));
}


void GPURenderBundle_set_label(GPURenderBundle* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("label"), em_Val_from(value));
}

