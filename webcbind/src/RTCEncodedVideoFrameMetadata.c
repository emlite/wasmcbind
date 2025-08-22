#include <webcbind/RTCEncodedVideoFrameMetadata.h>

DEFINE_EMLITE_TYPE(RTCEncodedVideoFrameMetadata, RTCEncodedFrameMetadata);


long long RTCEncodedVideoFrameMetadata_frameId(const RTCEncodedVideoFrameMetadata *self) {
    return em_Val_as(long long, em_Val_get(RTCEncodedFrameMetadata_as_val(self->inner), em_Val_from("frameId")));
}


void RTCEncodedVideoFrameMetadata_set_frameId(RTCEncodedVideoFrameMetadata* self, long long value) {
    em_Val_set(RTCEncodedFrameMetadata_as_val(self->inner), em_Val_from("frameId"), em_Val_from(value));
}


jb_Array RTCEncodedVideoFrameMetadata_dependencies(const RTCEncodedVideoFrameMetadata *self) {
    return em_Val_as(jb_Array, em_Val_get(RTCEncodedFrameMetadata_as_val(self->inner), em_Val_from("dependencies")));
}


void RTCEncodedVideoFrameMetadata_set_dependencies(RTCEncodedVideoFrameMetadata* self, jb_Array * value) {
    em_Val_set(RTCEncodedFrameMetadata_as_val(self->inner), em_Val_from("dependencies"), em_Val_from(value));
}


unsigned short RTCEncodedVideoFrameMetadata_width(const RTCEncodedVideoFrameMetadata *self) {
    return em_Val_as(unsigned short, em_Val_get(RTCEncodedFrameMetadata_as_val(self->inner), em_Val_from("width")));
}


void RTCEncodedVideoFrameMetadata_set_width(RTCEncodedVideoFrameMetadata* self, unsigned short value) {
    em_Val_set(RTCEncodedFrameMetadata_as_val(self->inner), em_Val_from("width"), em_Val_from(value));
}


unsigned short RTCEncodedVideoFrameMetadata_height(const RTCEncodedVideoFrameMetadata *self) {
    return em_Val_as(unsigned short, em_Val_get(RTCEncodedFrameMetadata_as_val(self->inner), em_Val_from("height")));
}


void RTCEncodedVideoFrameMetadata_set_height(RTCEncodedVideoFrameMetadata* self, unsigned short value) {
    em_Val_set(RTCEncodedFrameMetadata_as_val(self->inner), em_Val_from("height"), em_Val_from(value));
}


unsigned long RTCEncodedVideoFrameMetadata_spatialIndex(const RTCEncodedVideoFrameMetadata *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCEncodedFrameMetadata_as_val(self->inner), em_Val_from("spatialIndex")));
}


void RTCEncodedVideoFrameMetadata_set_spatialIndex(RTCEncodedVideoFrameMetadata* self, unsigned long value) {
    em_Val_set(RTCEncodedFrameMetadata_as_val(self->inner), em_Val_from("spatialIndex"), em_Val_from(value));
}


unsigned long RTCEncodedVideoFrameMetadata_temporalIndex(const RTCEncodedVideoFrameMetadata *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCEncodedFrameMetadata_as_val(self->inner), em_Val_from("temporalIndex")));
}


void RTCEncodedVideoFrameMetadata_set_temporalIndex(RTCEncodedVideoFrameMetadata* self, unsigned long value) {
    em_Val_set(RTCEncodedFrameMetadata_as_val(self->inner), em_Val_from("temporalIndex"), em_Val_from(value));
}


long long RTCEncodedVideoFrameMetadata_timestamp(const RTCEncodedVideoFrameMetadata *self) {
    return em_Val_as(long long, em_Val_get(RTCEncodedFrameMetadata_as_val(self->inner), em_Val_from("timestamp")));
}


void RTCEncodedVideoFrameMetadata_set_timestamp(RTCEncodedVideoFrameMetadata* self, long long value) {
    em_Val_set(RTCEncodedFrameMetadata_as_val(self->inner), em_Val_from("timestamp"), em_Val_from(value));
}


RTCEncodedVideoFrameMetadata RTCEncodedVideoFrameMetadata_new() {
    em_Val obj = em_Val_object();
    return RTCEncodedVideoFrameMetadata_from_val(&obj);
}

