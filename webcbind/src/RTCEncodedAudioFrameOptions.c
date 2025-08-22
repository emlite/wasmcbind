#include <webcbind/RTCEncodedAudioFrameOptions.h>

DEFINE_EMLITE_TYPE(RTCEncodedAudioFrameOptions, em_Val);


RTCEncodedAudioFrameMetadata RTCEncodedAudioFrameOptions_metadata(const RTCEncodedAudioFrameOptions *self) {
    return em_Val_as(RTCEncodedAudioFrameMetadata, em_Val_get(em_Val_as_val(self->inner), em_Val_from("metadata")));
}


void RTCEncodedAudioFrameOptions_set_metadata(RTCEncodedAudioFrameOptions* self, RTCEncodedAudioFrameMetadata * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("metadata"), em_Val_from(value));
}


RTCEncodedAudioFrameOptions RTCEncodedAudioFrameOptions_new() {
    em_Val obj = em_Val_object();
    return RTCEncodedAudioFrameOptions_from_val(&obj);
}

