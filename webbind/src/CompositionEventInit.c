#include <webbind/CompositionEventInit.h>

DEFINE_EMLITE_TYPE(CompositionEventInit, UIEventInit);


jb_String CompositionEventInit_data(const CompositionEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(UIEventInit_as_val(self->inner), em_Val_from("data")));
}


void CompositionEventInit_set_data(CompositionEventInit* self, jb_String * value) {
    em_Val_set(UIEventInit_as_val(self->inner), em_Val_from("data"), em_Val_from(value));
}


CompositionEventInit CompositionEventInit_new() {
    em_Val obj = em_Val_object();
    return CompositionEventInit_from_val(&obj);
}

