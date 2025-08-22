#include <webcbind/Crypto.h>

#include <webcbind/SubtleCrypto.h>

DEFINE_EMLITE_TYPE(Crypto, em_Val);


SubtleCrypto Crypto_subtle(const Crypto *self) {
    return em_Val_as(SubtleCrypto, em_Val_get(em_Val_as_val(self->inner), em_Val_from("subtle")));
}


jb_Any Crypto_getRandomValues(Crypto* self , jb_Any * array) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "getRandomValues", em_Val_from(array)));
}


jb_String Crypto_randomUUID(Crypto* self ) {
    return em_Val_as(jb_String, em_Val_call(em_Val_as_val(self->inner), "randomUUID"));
}

