#include <webcbind/Pbkdf2Params.h>

DEFINE_EMLITE_TYPE(Pbkdf2Params, Algorithm);


jb_Any Pbkdf2Params_salt(const Pbkdf2Params *self) {
    return em_Val_as(jb_Any, em_Val_get(Algorithm_as_val(self->inner), em_Val_from("salt")));
}


void Pbkdf2Params_set_salt(Pbkdf2Params* self, jb_Any * value) {
    em_Val_set(Algorithm_as_val(self->inner), em_Val_from("salt"), em_Val_from(value));
}


unsigned long Pbkdf2Params_iterations(const Pbkdf2Params *self) {
    return em_Val_as(unsigned long, em_Val_get(Algorithm_as_val(self->inner), em_Val_from("iterations")));
}


void Pbkdf2Params_set_iterations(Pbkdf2Params* self, unsigned long value) {
    em_Val_set(Algorithm_as_val(self->inner), em_Val_from("iterations"), em_Val_from(value));
}


jb_Any Pbkdf2Params_hash(const Pbkdf2Params *self) {
    return em_Val_as(jb_Any, em_Val_get(Algorithm_as_val(self->inner), em_Val_from("hash")));
}


void Pbkdf2Params_set_hash(Pbkdf2Params* self, jb_Any * value) {
    em_Val_set(Algorithm_as_val(self->inner), em_Val_from("hash"), em_Val_from(value));
}


Pbkdf2Params Pbkdf2Params_new() {
    em_Val obj = em_Val_object();
    return Pbkdf2Params_from_val(&obj);
}

