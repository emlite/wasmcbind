#include <webbind/RTCEncodedAudioFrame.h>


DEFINE_EMLITE_TYPE(RTCEncodedAudioFrameMetadata, em_Val);


short RTCEncodedAudioFrameMetadata_sequenceNumber(const RTCEncodedAudioFrameMetadata *self) {
    return em_Val_as(short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sequenceNumber")));
}


void RTCEncodedAudioFrameMetadata_set_sequenceNumber(RTCEncodedAudioFrameMetadata* self, short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sequenceNumber"), em_Val_from(value));
}


double RTCEncodedAudioFrameMetadata_audioLevel(const RTCEncodedAudioFrameMetadata *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("audioLevel")));
}


void RTCEncodedAudioFrameMetadata_set_audioLevel(RTCEncodedAudioFrameMetadata* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("audioLevel"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(RTCEncodedAudioFrame, em_Val);


RTCEncodedAudioFrame RTCEncodedAudioFrame_new0(RTCEncodedAudioFrame * originalFrame) {
        em_Val vv = em_Val_new(em_Val_global("RTCEncodedAudioFrame") , em_Val_from(originalFrame));
        return RTCEncodedAudioFrame_from_val(&vv);
      }


RTCEncodedAudioFrame RTCEncodedAudioFrame_new1(RTCEncodedAudioFrame * originalFrame, jb_Any * options) {
        em_Val vv = em_Val_new(em_Val_global("RTCEncodedAudioFrame") , em_Val_from(originalFrame), em_Val_from(options));
        return RTCEncodedAudioFrame_from_val(&vv);
      }


jb_ArrayBuffer RTCEncodedAudioFrame_data(const RTCEncodedAudioFrame *self) {
    return em_Val_as(jb_ArrayBuffer, em_Val_get(em_Val_as_val(self->inner), em_Val_from("data")));
}


void RTCEncodedAudioFrame_set_data(RTCEncodedAudioFrame* self, jb_ArrayBuffer * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("data"), em_Val_from(value));
}


RTCEncodedAudioFrameMetadata RTCEncodedAudioFrame_getMetadata(RTCEncodedAudioFrame* self ) {
    return em_Val_as(RTCEncodedAudioFrameMetadata, em_Val_call(em_Val_as_val(self->inner), "getMetadata"));
}

