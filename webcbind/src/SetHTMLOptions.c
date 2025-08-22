#include <webcbind/SetHTMLOptions.h>

DEFINE_EMLITE_TYPE(SetHTMLOptions, em_Val);


jb_Any SetHTMLOptions_sanitizer(const SetHTMLOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sanitizer")));
}


void SetHTMLOptions_set_sanitizer(SetHTMLOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sanitizer"), em_Val_from(value));
}


SetHTMLOptions SetHTMLOptions_new() {
    em_Val obj = em_Val_object();
    return SetHTMLOptions_from_val(&obj);
}

