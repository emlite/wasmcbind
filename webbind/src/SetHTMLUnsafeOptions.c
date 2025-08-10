#include <webbind/SetHTMLUnsafeOptions.h>

DEFINE_EMLITE_TYPE(SetHTMLUnsafeOptions, em_Val);


jb_Any SetHTMLUnsafeOptions_sanitizer(const SetHTMLUnsafeOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sanitizer")));
}


void SetHTMLUnsafeOptions_set_sanitizer(SetHTMLUnsafeOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sanitizer"), em_Val_from(value));
}


SetHTMLUnsafeOptions SetHTMLUnsafeOptions_new() {
    em_Val obj = em_Val_object();
    return SetHTMLUnsafeOptions_from_val(&obj);
}

