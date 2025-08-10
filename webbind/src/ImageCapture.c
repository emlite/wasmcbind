#include <webbind/ImageCapture.h>

#include <webbind/MediaStreamTrack.h>
#include <webbind/Blob.h>
#include <webbind/PhotoSettings.h>
#include <webbind/PhotoCapabilities.h>
#include <webbind/ImageBitmap.h>

DEFINE_EMLITE_TYPE(ImageCapture, em_Val);


ImageCapture ImageCapture_new(MediaStreamTrack * videoTrack) {
        em_Val vv = em_Val_new(em_Val_global("ImageCapture") , em_Val_from(videoTrack));
        return ImageCapture_from_val(&vv);
      }


jb_Promise ImageCapture_takePhoto0(ImageCapture* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "takePhoto"));
}


jb_Promise ImageCapture_takePhoto1(ImageCapture* self , PhotoSettings * photoSettings) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "takePhoto", em_Val_from(photoSettings)));
}


jb_Promise ImageCapture_getPhotoCapabilities(ImageCapture* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getPhotoCapabilities"));
}


jb_Promise ImageCapture_getPhotoSettings(ImageCapture* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getPhotoSettings"));
}


jb_Promise ImageCapture_grabFrame(ImageCapture* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "grabFrame"));
}


MediaStreamTrack ImageCapture_track(const ImageCapture *self) {
    return em_Val_as(MediaStreamTrack, em_Val_get(em_Val_as_val(self->inner), em_Val_from("track")));
}

