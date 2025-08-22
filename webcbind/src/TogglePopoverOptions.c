#include <webcbind/TogglePopoverOptions.h>

DEFINE_EMLITE_TYPE(TogglePopoverOptions, ShowPopoverOptions);


bool TogglePopoverOptions_force(const TogglePopoverOptions *self) {
    return em_Val_as(bool, em_Val_get(ShowPopoverOptions_as_val(self->inner), em_Val_from("force")));
}


void TogglePopoverOptions_set_force(TogglePopoverOptions* self, bool value) {
    em_Val_set(ShowPopoverOptions_as_val(self->inner), em_Val_from("force"), em_Val_from(value));
}


TogglePopoverOptions TogglePopoverOptions_new() {
    em_Val obj = em_Val_object();
    return TogglePopoverOptions_from_val(&obj);
}

