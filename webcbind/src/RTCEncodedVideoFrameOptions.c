#include <webcbind/RTCEncodedVideoFrameOptions.h>

DEFINE_EMLITE_TYPE(RTCEncodedVideoFrameOptions, em_Val);


RTCEncodedVideoFrameMetadata RTCEncodedVideoFrameOptions_metadata(const RTCEncodedVideoFrameOptions *self) {
    return em_Val_as(RTCEncodedVideoFrameMetadata, em_Val_get(em_Val_as_val(self->inner), em_Val_from("metadata")));
}


void RTCEncodedVideoFrameOptions_set_metadata(RTCEncodedVideoFrameOptions* self, RTCEncodedVideoFrameMetadata * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("metadata"), em_Val_from(value));
}


RTCEncodedVideoFrameOptions RTCEncodedVideoFrameOptions_new() {
    em_Val obj = em_Val_object();
    return RTCEncodedVideoFrameOptions_from_val(&obj);
}

