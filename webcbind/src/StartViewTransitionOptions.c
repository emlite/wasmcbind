#include <webcbind/StartViewTransitionOptions.h>

DEFINE_EMLITE_TYPE(StartViewTransitionOptions, em_Val);


jb_Function StartViewTransitionOptions_update(const StartViewTransitionOptions *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("update")));
}


void StartViewTransitionOptions_set_update(StartViewTransitionOptions* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("update"), em_Val_from(value));
}


jb_Array StartViewTransitionOptions_types(const StartViewTransitionOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("types")));
}


void StartViewTransitionOptions_set_types(StartViewTransitionOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("types"), em_Val_from(value));
}


StartViewTransitionOptions StartViewTransitionOptions_new() {
    em_Val obj = em_Val_object();
    return StartViewTransitionOptions_from_val(&obj);
}

