#include <webbind/RTCEncodedVideoFrame.h>


DEFINE_EMLITE_TYPE(RTCEncodedVideoFrameMetadata, em_Val);


long long RTCEncodedVideoFrameMetadata_frameId(const RTCEncodedVideoFrameMetadata *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("frameId")));
}


void RTCEncodedVideoFrameMetadata_set_frameId(RTCEncodedVideoFrameMetadata* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("frameId"), em_Val_from(value));
}


jb_Array RTCEncodedVideoFrameMetadata_dependencies(const RTCEncodedVideoFrameMetadata *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dependencies")));
}


void RTCEncodedVideoFrameMetadata_set_dependencies(RTCEncodedVideoFrameMetadata* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("dependencies"), em_Val_from(value));
}


unsigned short RTCEncodedVideoFrameMetadata_width(const RTCEncodedVideoFrameMetadata *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("width")));
}


void RTCEncodedVideoFrameMetadata_set_width(RTCEncodedVideoFrameMetadata* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("width"), em_Val_from(value));
}


unsigned short RTCEncodedVideoFrameMetadata_height(const RTCEncodedVideoFrameMetadata *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("height")));
}


void RTCEncodedVideoFrameMetadata_set_height(RTCEncodedVideoFrameMetadata* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("height"), em_Val_from(value));
}


unsigned long RTCEncodedVideoFrameMetadata_spatialIndex(const RTCEncodedVideoFrameMetadata *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("spatialIndex")));
}


void RTCEncodedVideoFrameMetadata_set_spatialIndex(RTCEncodedVideoFrameMetadata* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("spatialIndex"), em_Val_from(value));
}


unsigned long RTCEncodedVideoFrameMetadata_temporalIndex(const RTCEncodedVideoFrameMetadata *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("temporalIndex")));
}


void RTCEncodedVideoFrameMetadata_set_temporalIndex(RTCEncodedVideoFrameMetadata* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("temporalIndex"), em_Val_from(value));
}


long long RTCEncodedVideoFrameMetadata_timestamp(const RTCEncodedVideoFrameMetadata *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("timestamp")));
}


void RTCEncodedVideoFrameMetadata_set_timestamp(RTCEncodedVideoFrameMetadata* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("timestamp"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(RTCEncodedVideoFrame, em_Val);


RTCEncodedVideoFrame RTCEncodedVideoFrame_new0(RTCEncodedVideoFrame * originalFrame) {
        em_Val vv = em_Val_new(em_Val_global("RTCEncodedVideoFrame") , em_Val_from(originalFrame));
        return RTCEncodedVideoFrame_from_val(&vv);
      }


RTCEncodedVideoFrame RTCEncodedVideoFrame_new1(RTCEncodedVideoFrame * originalFrame, jb_Any * options) {
        em_Val vv = em_Val_new(em_Val_global("RTCEncodedVideoFrame") , em_Val_from(originalFrame), em_Val_from(options));
        return RTCEncodedVideoFrame_from_val(&vv);
      }


RTCEncodedVideoFrameType RTCEncodedVideoFrame_type(const RTCEncodedVideoFrame *self) {
    return em_Val_as(RTCEncodedVideoFrameType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


jb_ArrayBuffer RTCEncodedVideoFrame_data(const RTCEncodedVideoFrame *self) {
    return em_Val_as(jb_ArrayBuffer, em_Val_get(em_Val_as_val(self->inner), em_Val_from("data")));
}


void RTCEncodedVideoFrame_set_data(RTCEncodedVideoFrame* self, jb_ArrayBuffer * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("data"), em_Val_from(value));
}


RTCEncodedVideoFrameMetadata RTCEncodedVideoFrame_getMetadata(RTCEncodedVideoFrame* self ) {
    return em_Val_as(RTCEncodedVideoFrameMetadata, em_Val_call(em_Val_as_val(self->inner), "getMetadata"));
}

