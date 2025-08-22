#include <webcbind/FocusOptions.h>

DEFINE_EMLITE_TYPE(FocusOptions, em_Val);


bool FocusOptions_preventScroll(const FocusOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("preventScroll")));
}


void FocusOptions_set_preventScroll(FocusOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("preventScroll"), em_Val_from(value));
}


bool FocusOptions_focusVisible(const FocusOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("focusVisible")));
}


void FocusOptions_set_focusVisible(FocusOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("focusVisible"), em_Val_from(value));
}


FocusOptions FocusOptions_new() {
    em_Val obj = em_Val_object();
    return FocusOptions_from_val(&obj);
}

