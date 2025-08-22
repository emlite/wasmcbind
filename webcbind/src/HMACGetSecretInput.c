#include <webcbind/HMACGetSecretInput.h>

DEFINE_EMLITE_TYPE(HMACGetSecretInput, em_Val);


jb_ArrayBuffer HMACGetSecretInput_salt1(const HMACGetSecretInput *self) {
    return em_Val_as(jb_ArrayBuffer, em_Val_get(em_Val_as_val(self->inner), em_Val_from("salt1")));
}


void HMACGetSecretInput_set_salt1(HMACGetSecretInput* self, jb_ArrayBuffer * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("salt1"), em_Val_from(value));
}


jb_ArrayBuffer HMACGetSecretInput_salt2(const HMACGetSecretInput *self) {
    return em_Val_as(jb_ArrayBuffer, em_Val_get(em_Val_as_val(self->inner), em_Val_from("salt2")));
}


void HMACGetSecretInput_set_salt2(HMACGetSecretInput* self, jb_ArrayBuffer * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("salt2"), em_Val_from(value));
}


HMACGetSecretInput HMACGetSecretInput_new() {
    em_Val obj = em_Val_object();
    return HMACGetSecretInput_from_val(&obj);
}

