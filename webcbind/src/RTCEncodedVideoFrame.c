#include <webcbind/RTCEncodedVideoFrame.h>

#include <webcbind/RTCEncodedVideoFrameOptions.h>
#include <webcbind/RTCEncodedVideoFrameMetadata.h>

DEFINE_EMLITE_TYPE(RTCEncodedVideoFrame, em_Val);


RTCEncodedVideoFrame RTCEncodedVideoFrame_new0(RTCEncodedVideoFrame * originalFrame) {
        em_Val vv = em_Val_new(em_Val_global("RTCEncodedVideoFrame") , em_Val_from(originalFrame));
        return RTCEncodedVideoFrame_from_val(&vv);
      }


RTCEncodedVideoFrame RTCEncodedVideoFrame_new1(RTCEncodedVideoFrame * originalFrame, RTCEncodedVideoFrameOptions * options) {
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

