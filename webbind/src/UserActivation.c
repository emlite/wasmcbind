#include <webbind/UserActivation.h>


DEFINE_EMLITE_TYPE(UserActivation, em_Val);


bool UserActivation_hasBeenActive(const UserActivation *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hasBeenActive")));
}


bool UserActivation_isActive(const UserActivation *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("isActive")));
}

