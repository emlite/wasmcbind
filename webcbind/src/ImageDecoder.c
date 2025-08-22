#include <webcbind/ImageDecoder.h>

#include <webcbind/ImageDecoderInit.h>
#include <webcbind/ImageTrackList.h>
#include <webcbind/ImageDecodeResult.h>
#include <webcbind/ImageDecodeOptions.h>

DEFINE_EMLITE_TYPE(ImageDecoder, em_Val);


ImageDecoder ImageDecoder_new(ImageDecoderInit * init) {
        em_Val vv = em_Val_new(em_Val_global("ImageDecoder") , em_Val_from(init));
        return ImageDecoder_from_val(&vv);
      }


jb_String ImageDecoder_type(const ImageDecoder *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
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


jb_Promise ImageDecoder_isTypeSupported(ImageDecoder* self , jb_String * type) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("imagedecoder"), "isTypeSupported", em_Val_from(type)));
}

