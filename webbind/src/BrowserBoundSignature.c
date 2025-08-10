#include <webbind/BrowserBoundSignature.h>

DEFINE_EMLITE_TYPE(BrowserBoundSignature, em_Val);


jb_ArrayBuffer BrowserBoundSignature_signature(const BrowserBoundSignature *self) {
    return em_Val_as(jb_ArrayBuffer, em_Val_get(em_Val_as_val(self->inner), em_Val_from("signature")));
}


void BrowserBoundSignature_set_signature(BrowserBoundSignature* self, jb_ArrayBuffer * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("signature"), em_Val_from(value));
}


BrowserBoundSignature BrowserBoundSignature_new() {
    em_Val obj = em_Val_object();
    return BrowserBoundSignature_from_val(&obj);
}

