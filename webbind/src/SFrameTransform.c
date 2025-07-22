#include <webbind/SFrameTransform.h>
#include <webbind/CryptoKey.h>
#include <webbind/ReadableStream.h>
#include <webbind/WritableStream.h>


DEFINE_EMLITE_TYPE(SFrameTransform, EventTarget);


SFrameTransform SFrameTransform_new() : EventTarget(em_Val_global("SFrameTransform").new_()) {
        return SFrameTransform(em_Val_new(em_Val_global("SFrameTransform", ));
      }


SFrameTransform SFrameTransform_new(const jb_Any* options) : EventTarget(em_Val_global("SFrameTransform").new_(em_Val_from(options))) {
        return SFrameTransform(em_Val_new(em_Val_global("SFrameTransform", em_Val_from(options)));
      }


jb_Promise SFrameTransform_setEncryptionKey(SFrameTransform* self , const CryptoKey* key) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "setEncryptionKey", em_Val_from(key)));
}


jb_Promise SFrameTransform_setEncryptionKey(SFrameTransform* self , const CryptoKey* key, const jb_Any* keyID) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "setEncryptionKey", em_Val_from(key), em_Val_from(keyID)));
}


jb_Any SFrameTransform_onerror(const SFrameTransform *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onerror"));
}


void SFrameTransform_set_onerror(SFrameTransform* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onerror", value);
}


ReadableStream SFrameTransform_readable(const SFrameTransform *self) {
    return em_Val_as(ReadableStream, em_Val_get(EventTarget_as_val(self->inner), "readable"));
}


WritableStream SFrameTransform_writable(const SFrameTransform *self) {
    return em_Val_as(WritableStream, em_Val_get(EventTarget_as_val(self->inner), "writable"));
}

