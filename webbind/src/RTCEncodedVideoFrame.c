#include <webbind/RTCEncodedVideoFrame.h>


DEFINE_EMLITE_TYPE(RTCEncodedVideoFrameMetadata, em_Val);


long long RTCEncodedVideoFrameMetadata_frameId(const RTCEncodedVideoFrameMetadata *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "frameId"));
}


void RTCEncodedVideoFrameMetadata_set_frameId(RTCEncodedVideoFrameMetadata* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "frameId", value);
}


jb_Sequence RTCEncodedVideoFrameMetadata_dependencies(const RTCEncodedVideoFrameMetadata *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "dependencies"));
}


void RTCEncodedVideoFrameMetadata_set_dependencies(RTCEncodedVideoFrameMetadata* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "dependencies", value);
}


unsigned short RTCEncodedVideoFrameMetadata_width(const RTCEncodedVideoFrameMetadata *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), "width"));
}


void RTCEncodedVideoFrameMetadata_set_width(RTCEncodedVideoFrameMetadata* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), "width", value);
}


unsigned short RTCEncodedVideoFrameMetadata_height(const RTCEncodedVideoFrameMetadata *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), "height"));
}


void RTCEncodedVideoFrameMetadata_set_height(RTCEncodedVideoFrameMetadata* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), "height", value);
}


unsigned long RTCEncodedVideoFrameMetadata_spatialIndex(const RTCEncodedVideoFrameMetadata *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "spatialIndex"));
}


void RTCEncodedVideoFrameMetadata_set_spatialIndex(RTCEncodedVideoFrameMetadata* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "spatialIndex", value);
}


unsigned long RTCEncodedVideoFrameMetadata_temporalIndex(const RTCEncodedVideoFrameMetadata *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "temporalIndex"));
}


void RTCEncodedVideoFrameMetadata_set_temporalIndex(RTCEncodedVideoFrameMetadata* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "temporalIndex", value);
}


long long RTCEncodedVideoFrameMetadata_timestamp(const RTCEncodedVideoFrameMetadata *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "timestamp"));
}


void RTCEncodedVideoFrameMetadata_set_timestamp(RTCEncodedVideoFrameMetadata* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "timestamp", value);
}

DEFINE_EMLITE_TYPE(RTCEncodedVideoFrame, em_Val);


RTCEncodedVideoFrame RTCEncodedVideoFrame_new(const RTCEncodedVideoFrame* originalFrame) : em_Val(em_Val_global("RTCEncodedVideoFrame").new_(em_Val_from(originalFrame))) {
        return RTCEncodedVideoFrame(em_Val_new(em_Val_global("RTCEncodedVideoFrame", em_Val_from(originalFrame)));
      }


RTCEncodedVideoFrame RTCEncodedVideoFrame_new(const RTCEncodedVideoFrame* originalFrame, const jb_Any* options) : em_Val(em_Val_global("RTCEncodedVideoFrame").new_(em_Val_from(originalFrame), em_Val_from(options))) {
        return RTCEncodedVideoFrame(em_Val_new(em_Val_global("RTCEncodedVideoFrame", em_Val_from(originalFrame), em_Val_from(options)));
      }


RTCEncodedVideoFrameType RTCEncodedVideoFrame_type(const RTCEncodedVideoFrame *self) {
    return em_Val_as(RTCEncodedVideoFrameType, em_Val_get(em_Val_as_val(self->inner), "type"));
}


jb_ArrayBuffer RTCEncodedVideoFrame_data(const RTCEncodedVideoFrame *self) {
    return em_Val_as(jb_ArrayBuffer, em_Val_get(em_Val_as_val(self->inner), "data"));
}


void RTCEncodedVideoFrame_set_data(RTCEncodedVideoFrame* self, const jb_ArrayBuffer* value) {
    em_Val_set(em_Val_as_val(self->inner), "data", value);
}


RTCEncodedVideoFrameMetadata RTCEncodedVideoFrame_getMetadata(RTCEncodedVideoFrame* self ) {
    return em_Val_as(RTCEncodedVideoFrameMetadata, em_Val_call(em_Val_as_val(self->inner), "getMetadata"));
}

