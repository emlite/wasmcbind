#include <webbind/SFrameTransform.h>

#include <webbind/SFrameTransformOptions.h>
#include <webbind/CryptoKey.h>
#include <webbind/ReadableStream.h>
#include <webbind/WritableStream.h>

DEFINE_EMLITE_TYPE(SFrameTransform, EventTarget);


SFrameTransform SFrameTransform_new0() {
        em_Val vv = em_Val_new(em_Val_global("SFrameTransform") );
        return SFrameTransform_from_val(&vv);
      }


SFrameTransform SFrameTransform_new1(SFrameTransformOptions * options) {
        em_Val vv = em_Val_new(em_Val_global("SFrameTransform") , em_Val_from(options));
        return SFrameTransform_from_val(&vv);
      }


jb_Promise SFrameTransform_setEncryptionKey0(SFrameTransform* self , CryptoKey * key) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "setEncryptionKey", em_Val_from(key)));
}


jb_Promise SFrameTransform_setEncryptionKey1(SFrameTransform* self , CryptoKey * key, jb_Any * keyID) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "setEncryptionKey", em_Val_from(key), em_Val_from(keyID)));
}


jb_Any SFrameTransform_onerror(const SFrameTransform *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onerror")));
}


void SFrameTransform_set_onerror(SFrameTransform* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onerror"), em_Val_from(value));
}


ReadableStream SFrameTransform_readable(const SFrameTransform *self) {
    return em_Val_as(ReadableStream, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("readable")));
}


WritableStream SFrameTransform_writable(const SFrameTransform *self) {
    return em_Val_as(WritableStream, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("writable")));
}

