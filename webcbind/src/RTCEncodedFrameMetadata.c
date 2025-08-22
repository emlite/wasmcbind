#include <webcbind/RTCEncodedFrameMetadata.h>

DEFINE_EMLITE_TYPE(RTCEncodedFrameMetadata, em_Val);


unsigned long RTCEncodedFrameMetadata_synchronizationSource(const RTCEncodedFrameMetadata *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("synchronizationSource")));
}


void RTCEncodedFrameMetadata_set_synchronizationSource(RTCEncodedFrameMetadata* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("synchronizationSource"), em_Val_from(value));
}


unsigned char RTCEncodedFrameMetadata_payloadType(const RTCEncodedFrameMetadata *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), em_Val_from("payloadType")));
}


void RTCEncodedFrameMetadata_set_payloadType(RTCEncodedFrameMetadata* self, unsigned char value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("payloadType"), em_Val_from(value));
}


jb_Array RTCEncodedFrameMetadata_contributingSources(const RTCEncodedFrameMetadata *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("contributingSources")));
}


void RTCEncodedFrameMetadata_set_contributingSources(RTCEncodedFrameMetadata* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("contributingSources"), em_Val_from(value));
}


unsigned long RTCEncodedFrameMetadata_rtpTimestamp(const RTCEncodedFrameMetadata *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rtpTimestamp")));
}


void RTCEncodedFrameMetadata_set_rtpTimestamp(RTCEncodedFrameMetadata* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rtpTimestamp"), em_Val_from(value));
}


jb_Any RTCEncodedFrameMetadata_receiveTime(const RTCEncodedFrameMetadata *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("receiveTime")));
}


void RTCEncodedFrameMetadata_set_receiveTime(RTCEncodedFrameMetadata* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("receiveTime"), em_Val_from(value));
}


jb_Any RTCEncodedFrameMetadata_captureTime(const RTCEncodedFrameMetadata *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("captureTime")));
}


void RTCEncodedFrameMetadata_set_captureTime(RTCEncodedFrameMetadata* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("captureTime"), em_Val_from(value));
}


jb_Any RTCEncodedFrameMetadata_senderCaptureTimeOffset(const RTCEncodedFrameMetadata *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("senderCaptureTimeOffset")));
}


void RTCEncodedFrameMetadata_set_senderCaptureTimeOffset(RTCEncodedFrameMetadata* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("senderCaptureTimeOffset"), em_Val_from(value));
}


jb_String RTCEncodedFrameMetadata_mimeType(const RTCEncodedFrameMetadata *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mimeType")));
}


void RTCEncodedFrameMetadata_set_mimeType(RTCEncodedFrameMetadata* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mimeType"), em_Val_from(value));
}


RTCEncodedFrameMetadata RTCEncodedFrameMetadata_new() {
    em_Val obj = em_Val_object();
    return RTCEncodedFrameMetadata_from_val(&obj);
}

