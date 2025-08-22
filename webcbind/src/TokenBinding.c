#include <webcbind/TokenBinding.h>

DEFINE_EMLITE_TYPE(TokenBinding, em_Val);


jb_String TokenBinding_status(const TokenBinding *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("status")));
}


void TokenBinding_set_status(TokenBinding* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("status"), em_Val_from(value));
}


jb_String TokenBinding_id(const TokenBinding *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("id")));
}


void TokenBinding_set_id(TokenBinding* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("id"), em_Val_from(value));
}


TokenBinding TokenBinding_new() {
    em_Val obj = em_Val_object();
    return TokenBinding_from_val(&obj);
}

