#include <webcbind/ImageDecodeResult.h>

#include <webcbind/VideoFrame.h>

DEFINE_EMLITE_TYPE(ImageDecodeResult, em_Val);


VideoFrame ImageDecodeResult_image(const ImageDecodeResult *self) {
    return em_Val_as(VideoFrame, em_Val_get(em_Val_as_val(self->inner), em_Val_from("image")));
}


void ImageDecodeResult_set_image(ImageDecodeResult* self, VideoFrame * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("image"), em_Val_from(value));
}


bool ImageDecodeResult_complete(const ImageDecodeResult *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("complete")));
}


void ImageDecodeResult_set_complete(ImageDecodeResult* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("complete"), em_Val_from(value));
}


ImageDecodeResult ImageDecodeResult_new() {
    em_Val obj = em_Val_object();
    return ImageDecodeResult_from_val(&obj);
}

