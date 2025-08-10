#include <webbind/ResizeObserverOptions.h>

DEFINE_EMLITE_TYPE(ResizeObserverOptions, em_Val);


ResizeObserverBoxOptions ResizeObserverOptions_box(const ResizeObserverOptions *self) {
    return em_Val_as(ResizeObserverBoxOptions, em_Val_get(em_Val_as_val(self->inner), em_Val_from("box")));
}


void ResizeObserverOptions_set_box(ResizeObserverOptions* self, ResizeObserverBoxOptions * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("box"), em_Val_from(value));
}


ResizeObserverOptions ResizeObserverOptions_new() {
    em_Val obj = em_Val_object();
    return ResizeObserverOptions_from_val(&obj);
}

