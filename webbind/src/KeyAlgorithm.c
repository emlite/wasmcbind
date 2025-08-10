#include <webbind/KeyAlgorithm.h>

DEFINE_EMLITE_TYPE(KeyAlgorithm, em_Val);


jb_String KeyAlgorithm_name(const KeyAlgorithm *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


void KeyAlgorithm_set_name(KeyAlgorithm* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


KeyAlgorithm KeyAlgorithm_new() {
    em_Val obj = em_Val_object();
    return KeyAlgorithm_from_val(&obj);
}

