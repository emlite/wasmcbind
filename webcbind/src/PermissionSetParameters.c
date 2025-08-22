#include <webcbind/PermissionSetParameters.h>

DEFINE_EMLITE_TYPE(PermissionSetParameters, em_Val);


jb_Object PermissionSetParameters_descriptor(const PermissionSetParameters *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("descriptor")));
}


void PermissionSetParameters_set_descriptor(PermissionSetParameters* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("descriptor"), em_Val_from(value));
}


PermissionState PermissionSetParameters_state(const PermissionSetParameters *self) {
    return em_Val_as(PermissionState, em_Val_get(em_Val_as_val(self->inner), em_Val_from("state")));
}


void PermissionSetParameters_set_state(PermissionSetParameters* self, PermissionState * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("state"), em_Val_from(value));
}


PermissionSetParameters PermissionSetParameters_new() {
    em_Val obj = em_Val_object();
    return PermissionSetParameters_from_val(&obj);
}

