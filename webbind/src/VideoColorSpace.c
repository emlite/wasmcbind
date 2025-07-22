#include <webbind/VideoColorSpace.h>


DEFINE_EMLITE_TYPE(VideoColorSpaceInit, em_Val);


VideoColorPrimaries VideoColorSpaceInit_primaries(const VideoColorSpaceInit *self) {
    return em_Val_as(VideoColorPrimaries, em_Val_get(em_Val_as_val(self->inner), "primaries"));
}


void VideoColorSpaceInit_set_primaries(VideoColorSpaceInit* self, const VideoColorPrimaries* value) {
    em_Val_set(em_Val_as_val(self->inner), "primaries", value);
}


VideoTransferCharacteristics VideoColorSpaceInit_transfer(const VideoColorSpaceInit *self) {
    return em_Val_as(VideoTransferCharacteristics, em_Val_get(em_Val_as_val(self->inner), "transfer"));
}


void VideoColorSpaceInit_set_transfer(VideoColorSpaceInit* self, const VideoTransferCharacteristics* value) {
    em_Val_set(em_Val_as_val(self->inner), "transfer", value);
}


VideoMatrixCoefficients VideoColorSpaceInit_matrix(const VideoColorSpaceInit *self) {
    return em_Val_as(VideoMatrixCoefficients, em_Val_get(em_Val_as_val(self->inner), "matrix"));
}


void VideoColorSpaceInit_set_matrix(VideoColorSpaceInit* self, const VideoMatrixCoefficients* value) {
    em_Val_set(em_Val_as_val(self->inner), "matrix", value);
}


bool VideoColorSpaceInit_fullRange(const VideoColorSpaceInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "fullRange"));
}


void VideoColorSpaceInit_set_fullRange(VideoColorSpaceInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "fullRange", value);
}

DEFINE_EMLITE_TYPE(VideoColorSpace, em_Val);


VideoColorSpace VideoColorSpace_new() : em_Val(em_Val_global("VideoColorSpace").new_()) {
        return VideoColorSpace(em_Val_new(em_Val_global("VideoColorSpace", ));
      }


VideoColorSpace VideoColorSpace_new(const VideoColorSpaceInit* init) : em_Val(em_Val_global("VideoColorSpace").new_(em_Val_from(init))) {
        return VideoColorSpace(em_Val_new(em_Val_global("VideoColorSpace", em_Val_from(init)));
      }


VideoColorPrimaries VideoColorSpace_primaries(const VideoColorSpace *self) {
    return em_Val_as(VideoColorPrimaries, em_Val_get(em_Val_as_val(self->inner), "primaries"));
}


VideoTransferCharacteristics VideoColorSpace_transfer(const VideoColorSpace *self) {
    return em_Val_as(VideoTransferCharacteristics, em_Val_get(em_Val_as_val(self->inner), "transfer"));
}


VideoMatrixCoefficients VideoColorSpace_matrix(const VideoColorSpace *self) {
    return em_Val_as(VideoMatrixCoefficients, em_Val_get(em_Val_as_val(self->inner), "matrix"));
}


bool VideoColorSpace_fullRange(const VideoColorSpace *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "fullRange"));
}


VideoColorSpaceInit VideoColorSpace_toJSON(VideoColorSpace* self ) {
    return em_Val_as(VideoColorSpaceInit, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}

