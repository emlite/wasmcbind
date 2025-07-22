#include <webbind/VideoColorSpace.h>


DEFINE_EMLITE_TYPE(VideoColorSpaceInit, em_Val);


VideoColorPrimaries VideoColorSpaceInit_primaries(const VideoColorSpaceInit *self) {
    return em_Val_as(VideoColorPrimaries, em_Val_get(em_Val_as_val(self->inner), em_Val_from("primaries")));
}


void VideoColorSpaceInit_set_primaries(VideoColorSpaceInit* self, VideoColorPrimaries * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("primaries"), em_Val_from(value));
}


VideoTransferCharacteristics VideoColorSpaceInit_transfer(const VideoColorSpaceInit *self) {
    return em_Val_as(VideoTransferCharacteristics, em_Val_get(em_Val_as_val(self->inner), em_Val_from("transfer")));
}


void VideoColorSpaceInit_set_transfer(VideoColorSpaceInit* self, VideoTransferCharacteristics * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("transfer"), em_Val_from(value));
}


VideoMatrixCoefficients VideoColorSpaceInit_matrix(const VideoColorSpaceInit *self) {
    return em_Val_as(VideoMatrixCoefficients, em_Val_get(em_Val_as_val(self->inner), em_Val_from("matrix")));
}


void VideoColorSpaceInit_set_matrix(VideoColorSpaceInit* self, VideoMatrixCoefficients * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("matrix"), em_Val_from(value));
}


bool VideoColorSpaceInit_fullRange(const VideoColorSpaceInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("fullRange")));
}


void VideoColorSpaceInit_set_fullRange(VideoColorSpaceInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("fullRange"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(VideoColorSpace, em_Val);


VideoColorSpace VideoColorSpace_new0() {
        em_Val vv = em_Val_new(em_Val_global("VideoColorSpace") );
        return VideoColorSpace_from_val(&vv);
      }


VideoColorSpace VideoColorSpace_new1(VideoColorSpaceInit * init) {
        em_Val vv = em_Val_new(em_Val_global("VideoColorSpace") , em_Val_from(init));
        return VideoColorSpace_from_val(&vv);
      }


VideoColorPrimaries VideoColorSpace_primaries(const VideoColorSpace *self) {
    return em_Val_as(VideoColorPrimaries, em_Val_get(em_Val_as_val(self->inner), em_Val_from("primaries")));
}


VideoTransferCharacteristics VideoColorSpace_transfer(const VideoColorSpace *self) {
    return em_Val_as(VideoTransferCharacteristics, em_Val_get(em_Val_as_val(self->inner), em_Val_from("transfer")));
}


VideoMatrixCoefficients VideoColorSpace_matrix(const VideoColorSpace *self) {
    return em_Val_as(VideoMatrixCoefficients, em_Val_get(em_Val_as_val(self->inner), em_Val_from("matrix")));
}


bool VideoColorSpace_fullRange(const VideoColorSpace *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("fullRange")));
}


VideoColorSpaceInit VideoColorSpace_toJSON(VideoColorSpace* self ) {
    return em_Val_as(VideoColorSpaceInit, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}

