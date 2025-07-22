#include <webbind/ImageDecoder.h>
#include <webbind/ImageTrackList.h>
#include <webbind/VideoFrame.h>


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

DEFINE_EMLITE_TYPE(ImageDecodeOptions, em_Val);


unsigned long ImageDecodeOptions_frameIndex(const ImageDecodeOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("frameIndex")));
}


void ImageDecodeOptions_set_frameIndex(ImageDecodeOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("frameIndex"), em_Val_from(value));
}


bool ImageDecodeOptions_completeFramesOnly(const ImageDecodeOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("completeFramesOnly")));
}


void ImageDecodeOptions_set_completeFramesOnly(ImageDecodeOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("completeFramesOnly"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(ImageDecoder, em_Val);


ImageDecoder ImageDecoder_new(jb_Any * init) {
        em_Val vv = em_Val_new(em_Val_global("ImageDecoder") , em_Val_from(init));
        return ImageDecoder_from_val(&vv);
      }


jb_DOMString ImageDecoder_type(const ImageDecoder *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


bool ImageDecoder_complete(const ImageDecoder *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("complete")));
}


jb_Promise ImageDecoder_completed(const ImageDecoder *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), em_Val_from("completed")));
}


ImageTrackList ImageDecoder_tracks(const ImageDecoder *self) {
    return em_Val_as(ImageTrackList, em_Val_get(em_Val_as_val(self->inner), em_Val_from("tracks")));
}


jb_Promise ImageDecoder_decode0(ImageDecoder* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "decode"));
}


jb_Promise ImageDecoder_decode1(ImageDecoder* self , ImageDecodeOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "decode", em_Val_from(options)));
}


jb_Undefined ImageDecoder_reset(ImageDecoder* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "reset"));
}


jb_Undefined ImageDecoder_close(ImageDecoder* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "close"));
}


jb_Promise ImageDecoder_isTypeSupported(ImageDecoder* self , jb_DOMString * type) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("imagedecoder"), "isTypeSupported", em_Val_from(type)));
}

