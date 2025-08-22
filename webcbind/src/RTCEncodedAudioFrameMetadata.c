#include <webcbind/RTCEncodedAudioFrameMetadata.h>

DEFINE_EMLITE_TYPE(RTCEncodedAudioFrameMetadata, RTCEncodedFrameMetadata);


short RTCEncodedAudioFrameMetadata_sequenceNumber(const RTCEncodedAudioFrameMetadata *self) {
    return em_Val_as(short, em_Val_get(RTCEncodedFrameMetadata_as_val(self->inner), em_Val_from("sequenceNumber")));
}


void RTCEncodedAudioFrameMetadata_set_sequenceNumber(RTCEncodedAudioFrameMetadata* self, short value) {
    em_Val_set(RTCEncodedFrameMetadata_as_val(self->inner), em_Val_from("sequenceNumber"), em_Val_from(value));
}


double RTCEncodedAudioFrameMetadata_audioLevel(const RTCEncodedAudioFrameMetadata *self) {
    return em_Val_as(double, em_Val_get(RTCEncodedFrameMetadata_as_val(self->inner), em_Val_from("audioLevel")));
}


void RTCEncodedAudioFrameMetadata_set_audioLevel(RTCEncodedAudioFrameMetadata* self, double value) {
    em_Val_set(RTCEncodedFrameMetadata_as_val(self->inner), em_Val_from("audioLevel"), em_Val_from(value));
}


RTCEncodedAudioFrameMetadata RTCEncodedAudioFrameMetadata_new() {
    em_Val obj = em_Val_object();
    return RTCEncodedAudioFrameMetadata_from_val(&obj);
}

