#include <webbind/RTCRtpScriptTransformer.h>
#include <webbind/ReadableStream.h>
#include <webbind/WritableStream.h>


DEFINE_EMLITE_TYPE(RTCRtpScriptTransformer, EventTarget);


ReadableStream RTCRtpScriptTransformer_readable(const RTCRtpScriptTransformer *self) {
    return em_Val_as(ReadableStream, em_Val_get(EventTarget_as_val(self->inner), "readable"));
}


jb_Promise RTCRtpScriptTransformer_generateKeyFrame(RTCRtpScriptTransformer* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "generateKeyFrame"));
}


jb_Promise RTCRtpScriptTransformer_generateKeyFrame(RTCRtpScriptTransformer* self , const jb_DOMString* rid) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "generateKeyFrame", em_Val_from(rid)));
}


jb_Promise RTCRtpScriptTransformer_sendKeyFrameRequest(RTCRtpScriptTransformer* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "sendKeyFrameRequest"));
}


WritableStream RTCRtpScriptTransformer_writable(const RTCRtpScriptTransformer *self) {
    return em_Val_as(WritableStream, em_Val_get(EventTarget_as_val(self->inner), "writable"));
}


jb_Any RTCRtpScriptTransformer_onkeyframerequest(const RTCRtpScriptTransformer *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onkeyframerequest"));
}


void RTCRtpScriptTransformer_set_onkeyframerequest(RTCRtpScriptTransformer* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onkeyframerequest", value);
}


jb_Any RTCRtpScriptTransformer_options(const RTCRtpScriptTransformer *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "options"));
}

