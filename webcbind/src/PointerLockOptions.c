#include <webcbind/PointerLockOptions.h>

DEFINE_EMLITE_TYPE(PointerLockOptions, em_Val);


bool PointerLockOptions_unadjustedMovement(const PointerLockOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("unadjustedMovement")));
}


void PointerLockOptions_set_unadjustedMovement(PointerLockOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("unadjustedMovement"), em_Val_from(value));
}


PointerLockOptions PointerLockOptions_new() {
    em_Val obj = em_Val_object();
    return PointerLockOptions_from_val(&obj);
}

