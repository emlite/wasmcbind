#include <webbind/CryptoKey.h>


DEFINE_EMLITE_TYPE(CryptoKey, em_Val);


KeyType CryptoKey_type(const CryptoKey *self) {
    return em_Val_as(KeyType, em_Val_get(em_Val_as_val(self->inner), "type"));
}


bool CryptoKey_extractable(const CryptoKey *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "extractable"));
}


jb_Object CryptoKey_algorithm(const CryptoKey *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), "algorithm"));
}


jb_Object CryptoKey_usages(const CryptoKey *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), "usages"));
}

