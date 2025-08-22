#include <webcbind/CryptoKeyPair.h>

#include <webcbind/CryptoKey.h>

DEFINE_EMLITE_TYPE(CryptoKeyPair, em_Val);


CryptoKey CryptoKeyPair_publicKey(const CryptoKeyPair *self) {
    return em_Val_as(CryptoKey, em_Val_get(em_Val_as_val(self->inner), em_Val_from("publicKey")));
}


void CryptoKeyPair_set_publicKey(CryptoKeyPair* self, CryptoKey * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("publicKey"), em_Val_from(value));
}


CryptoKey CryptoKeyPair_privateKey(const CryptoKeyPair *self) {
    return em_Val_as(CryptoKey, em_Val_get(em_Val_as_val(self->inner), em_Val_from("privateKey")));
}


void CryptoKeyPair_set_privateKey(CryptoKeyPair* self, CryptoKey * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("privateKey"), em_Val_from(value));
}


CryptoKeyPair CryptoKeyPair_new() {
    em_Val obj = em_Val_object();
    return CryptoKeyPair_from_val(&obj);
}

