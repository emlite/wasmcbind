#include <webbind/RTCRtpScriptTransformer.h>

#include <webbind/ReadableStream.h>
#include <webbind/WritableStream.h>

DEFINE_EMLITE_TYPE(RTCRtpScriptTransformer, EventTarget);


ReadableStream RTCRtpScriptTransformer_readable(const RTCRtpScriptTransformer *self) {
    return em_Val_as(ReadableStream, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("readable")));
}


jb_Promise RTCRtpScriptTransformer_generateKeyFrame0(RTCRtpScriptTransformer* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "generateKeyFrame"));
}


jb_Promise RTCRtpScriptTransformer_generateKeyFrame1(RTCRtpScriptTransformer* self , jb_String * rid) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "generateKeyFrame", em_Val_from(rid)));
}


jb_Promise RTCRtpScriptTransformer_sendKeyFrameRequest(RTCRtpScriptTransformer* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "sendKeyFrameRequest"));
}


WritableStream RTCRtpScriptTransformer_writable(const RTCRtpScriptTransformer *self) {
    return em_Val_as(WritableStream, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("writable")));
}


jb_Any RTCRtpScriptTransformer_onkeyframerequest(const RTCRtpScriptTransformer *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onkeyframerequest")));
}


void RTCRtpScriptTransformer_set_onkeyframerequest(RTCRtpScriptTransformer* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onkeyframerequest"), em_Val_from(value));
}


jb_Any RTCRtpScriptTransformer_options(const RTCRtpScriptTransformer *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("options")));
}

