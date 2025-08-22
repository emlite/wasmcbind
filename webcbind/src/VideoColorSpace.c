#include <webcbind/VideoColorSpace.h>

#include <webcbind/VideoColorSpaceInit.h>

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

