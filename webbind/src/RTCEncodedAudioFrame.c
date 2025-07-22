#include <webbind/RTCEncodedAudioFrame.h>


DEFINE_EMLITE_TYPE(RTCEncodedAudioFrameMetadata, em_Val);


short RTCEncodedAudioFrameMetadata_sequenceNumber(const RTCEncodedAudioFrameMetadata *self) {
    return em_Val_as(short, em_Val_get(em_Val_as_val(self->inner), "sequenceNumber"));
}


void RTCEncodedAudioFrameMetadata_set_sequenceNumber(RTCEncodedAudioFrameMetadata* self, short value) {
    em_Val_set(em_Val_as_val(self->inner), "sequenceNumber", value);
}


double RTCEncodedAudioFrameMetadata_audioLevel(const RTCEncodedAudioFrameMetadata *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "audioLevel"));
}


void RTCEncodedAudioFrameMetadata_set_audioLevel(RTCEncodedAudioFrameMetadata* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "audioLevel", value);
}

DEFINE_EMLITE_TYPE(RTCEncodedAudioFrame, em_Val);


RTCEncodedAudioFrame RTCEncodedAudioFrame_new(const RTCEncodedAudioFrame* originalFrame) : em_Val(em_Val_global("RTCEncodedAudioFrame").new_(em_Val_from(originalFrame))) {
        return RTCEncodedAudioFrame(em_Val_new(em_Val_global("RTCEncodedAudioFrame", em_Val_from(originalFrame)));
      }


RTCEncodedAudioFrame RTCEncodedAudioFrame_new(const RTCEncodedAudioFrame* originalFrame, const jb_Any* options) : em_Val(em_Val_global("RTCEncodedAudioFrame").new_(em_Val_from(originalFrame), em_Val_from(options))) {
        return RTCEncodedAudioFrame(em_Val_new(em_Val_global("RTCEncodedAudioFrame", em_Val_from(originalFrame), em_Val_from(options)));
      }


jb_ArrayBuffer RTCEncodedAudioFrame_data(const RTCEncodedAudioFrame *self) {
    return em_Val_as(jb_ArrayBuffer, em_Val_get(em_Val_as_val(self->inner), "data"));
}


void RTCEncodedAudioFrame_set_data(RTCEncodedAudioFrame* self, const jb_ArrayBuffer* value) {
    em_Val_set(em_Val_as_val(self->inner), "data", value);
}


RTCEncodedAudioFrameMetadata RTCEncodedAudioFrame_getMetadata(RTCEncodedAudioFrame* self ) {
    return em_Val_as(RTCEncodedAudioFrameMetadata, em_Val_call(em_Val_as_val(self->inner), "getMetadata"));
}

