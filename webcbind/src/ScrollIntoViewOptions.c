#include <webcbind/ScrollIntoViewOptions.h>

DEFINE_EMLITE_TYPE(ScrollIntoViewOptions, ScrollOptions);


ScrollLogicalPosition ScrollIntoViewOptions_block(const ScrollIntoViewOptions *self) {
    return em_Val_as(ScrollLogicalPosition, em_Val_get(ScrollOptions_as_val(self->inner), em_Val_from("block")));
}


void ScrollIntoViewOptions_set_block(ScrollIntoViewOptions* self, ScrollLogicalPosition * value) {
    em_Val_set(ScrollOptions_as_val(self->inner), em_Val_from("block"), em_Val_from(value));
}


ScrollLogicalPosition ScrollIntoViewOptions_inline_(const ScrollIntoViewOptions *self) {
    return em_Val_as(ScrollLogicalPosition, em_Val_get(ScrollOptions_as_val(self->inner), em_Val_from("inline")));
}


void ScrollIntoViewOptions_set_inline_(ScrollIntoViewOptions* self, ScrollLogicalPosition * value) {
    em_Val_set(ScrollOptions_as_val(self->inner), em_Val_from("inline"), em_Val_from(value));
}


ScrollIntoViewContainer ScrollIntoViewOptions_container(const ScrollIntoViewOptions *self) {
    return em_Val_as(ScrollIntoViewContainer, em_Val_get(ScrollOptions_as_val(self->inner), em_Val_from("container")));
}


void ScrollIntoViewOptions_set_container(ScrollIntoViewOptions* self, ScrollIntoViewContainer * value) {
    em_Val_set(ScrollOptions_as_val(self->inner), em_Val_from("container"), em_Val_from(value));
}


ScrollIntoViewOptions ScrollIntoViewOptions_new() {
    em_Val obj = em_Val_object();
    return ScrollIntoViewOptions_from_val(&obj);
}

