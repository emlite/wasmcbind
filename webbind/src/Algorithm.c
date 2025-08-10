#include <webbind/Algorithm.h>

DEFINE_EMLITE_TYPE(Algorithm, em_Val);


jb_String Algorithm_name(const Algorithm *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


void Algorithm_set_name(Algorithm* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


Algorithm Algorithm_new() {
    em_Val obj = em_Val_object();
    return Algorithm_from_val(&obj);
}

