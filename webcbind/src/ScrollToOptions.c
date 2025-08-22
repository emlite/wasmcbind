#include <webcbind/ScrollToOptions.h>

DEFINE_EMLITE_TYPE(ScrollToOptions, ScrollOptions);


double ScrollToOptions_left(const ScrollToOptions *self) {
    return em_Val_as(double, em_Val_get(ScrollOptions_as_val(self->inner), em_Val_from("left")));
}


void ScrollToOptions_set_left(ScrollToOptions* self, double value) {
    em_Val_set(ScrollOptions_as_val(self->inner), em_Val_from("left"), em_Val_from(value));
}


double ScrollToOptions_top(const ScrollToOptions *self) {
    return em_Val_as(double, em_Val_get(ScrollOptions_as_val(self->inner), em_Val_from("top")));
}


void ScrollToOptions_set_top(ScrollToOptions* self, double value) {
    em_Val_set(ScrollOptions_as_val(self->inner), em_Val_from("top"), em_Val_from(value));
}


ScrollToOptions ScrollToOptions_new() {
    em_Val obj = em_Val_object();
    return ScrollToOptions_from_val(&obj);
}

