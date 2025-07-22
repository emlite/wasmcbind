#include <webbind/SubtleCrypto.h>
#include <webbind/CryptoKey.h>


DEFINE_EMLITE_TYPE(SubtleCrypto, em_Val);


jb_Promise SubtleCrypto_encrypt(SubtleCrypto* self , jb_Any * algorithm, CryptoKey * key, jb_Any * data) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "encrypt", em_Val_from(algorithm), em_Val_from(key), em_Val_from(data)));
}


jb_Promise SubtleCrypto_decrypt(SubtleCrypto* self , jb_Any * algorithm, CryptoKey * key, jb_Any * data) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "decrypt", em_Val_from(algorithm), em_Val_from(key), em_Val_from(data)));
}


jb_Promise SubtleCrypto_sign(SubtleCrypto* self , jb_Any * algorithm, CryptoKey * key, jb_Any * data) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "sign", em_Val_from(algorithm), em_Val_from(key), em_Val_from(data)));
}


jb_Promise SubtleCrypto_verify(SubtleCrypto* self , jb_Any * algorithm, CryptoKey * key, jb_Any * signature, jb_Any * data) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "verify", em_Val_from(algorithm), em_Val_from(key), em_Val_from(signature), em_Val_from(data)));
}


jb_Promise SubtleCrypto_digest(SubtleCrypto* self , jb_Any * algorithm, jb_Any * data) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "digest", em_Val_from(algorithm), em_Val_from(data)));
}


jb_Promise SubtleCrypto_generateKey(SubtleCrypto* self , jb_Any * algorithm, bool extractable, jb_Sequence * keyUsages) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "generateKey", em_Val_from(algorithm), em_Val_from(extractable), em_Val_from(keyUsages)));
}


jb_Promise SubtleCrypto_deriveKey(SubtleCrypto* self , jb_Any * algorithm, CryptoKey * baseKey, jb_Any * derivedKeyType, bool extractable, jb_Sequence * keyUsages) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "deriveKey", em_Val_from(algorithm), em_Val_from(baseKey), em_Val_from(derivedKeyType), em_Val_from(extractable), em_Val_from(keyUsages)));
}


jb_Promise SubtleCrypto_deriveBits0(SubtleCrypto* self , jb_Any * algorithm, CryptoKey * baseKey) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "deriveBits", em_Val_from(algorithm), em_Val_from(baseKey)));
}


jb_Promise SubtleCrypto_deriveBits1(SubtleCrypto* self , jb_Any * algorithm, CryptoKey * baseKey, unsigned long length) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "deriveBits", em_Val_from(algorithm), em_Val_from(baseKey), em_Val_from(length)));
}


jb_Promise SubtleCrypto_importKey(SubtleCrypto* self , KeyFormat * format, jb_Any * keyData, jb_Any * algorithm, bool extractable, jb_Sequence * keyUsages) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "importKey", em_Val_from(format), em_Val_from(keyData), em_Val_from(algorithm), em_Val_from(extractable), em_Val_from(keyUsages)));
}


jb_Promise SubtleCrypto_exportKey(SubtleCrypto* self , KeyFormat * format, CryptoKey * key) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "exportKey", em_Val_from(format), em_Val_from(key)));
}


jb_Promise SubtleCrypto_wrapKey(SubtleCrypto* self , KeyFormat * format, CryptoKey * key, CryptoKey * wrappingKey, jb_Any * wrapAlgorithm) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "wrapKey", em_Val_from(format), em_Val_from(key), em_Val_from(wrappingKey), em_Val_from(wrapAlgorithm)));
}


jb_Promise SubtleCrypto_unwrapKey(SubtleCrypto* self , KeyFormat * format, jb_Any * wrappedKey, CryptoKey * unwrappingKey, jb_Any * unwrapAlgorithm, jb_Any * unwrappedKeyAlgorithm, bool extractable, jb_Sequence * keyUsages) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "unwrapKey", em_Val_from(format), em_Val_from(wrappedKey), em_Val_from(unwrappingKey), em_Val_from(unwrapAlgorithm), em_Val_from(unwrappedKeyAlgorithm), em_Val_from(extractable), em_Val_from(keyUsages)));
}

