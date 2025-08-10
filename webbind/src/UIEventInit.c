#include <webbind/UIEventInit.h>

DEFINE_EMLITE_TYPE(UIEventInit, em_Val);


unsigned long UIEventInit_which(const UIEventInit *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("which")));
}


void UIEventInit_set_which(UIEventInit* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("which"), em_Val_from(value));
}


UIEventInit UIEventInit_new() {
    em_Val obj = em_Val_object();
    return UIEventInit_from_val(&obj);
}

