#include <webbind/ImageCapture.h>
#include <webbind/Blob.h>
#include <webbind/ImageBitmap.h>
#include <webbind/MediaStreamTrack.h>


DEFINE_EMLITE_TYPE(PhotoSettings, em_Val);


FillLightMode PhotoSettings_fillLightMode(const PhotoSettings *self) {
    return em_Val_as(FillLightMode, em_Val_get(em_Val_as_val(self->inner), "fillLightMode"));
}


void PhotoSettings_set_fillLightMode(PhotoSettings* self, const FillLightMode* value) {
    em_Val_set(em_Val_as_val(self->inner), "fillLightMode", value);
}


double PhotoSettings_imageHeight(const PhotoSettings *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "imageHeight"));
}


void PhotoSettings_set_imageHeight(PhotoSettings* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "imageHeight", value);
}


double PhotoSettings_imageWidth(const PhotoSettings *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "imageWidth"));
}


void PhotoSettings_set_imageWidth(PhotoSettings* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "imageWidth", value);
}


bool PhotoSettings_redEyeReduction(const PhotoSettings *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "redEyeReduction"));
}


void PhotoSettings_set_redEyeReduction(PhotoSettings* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "redEyeReduction", value);
}

DEFINE_EMLITE_TYPE(PhotoCapabilities, em_Val);


RedEyeReduction PhotoCapabilities_redEyeReduction(const PhotoCapabilities *self) {
    return em_Val_as(RedEyeReduction, em_Val_get(em_Val_as_val(self->inner), "redEyeReduction"));
}


void PhotoCapabilities_set_redEyeReduction(PhotoCapabilities* self, const RedEyeReduction* value) {
    em_Val_set(em_Val_as_val(self->inner), "redEyeReduction", value);
}


jb_Any PhotoCapabilities_imageHeight(const PhotoCapabilities *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "imageHeight"));
}


void PhotoCapabilities_set_imageHeight(PhotoCapabilities* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "imageHeight", value);
}


jb_Any PhotoCapabilities_imageWidth(const PhotoCapabilities *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "imageWidth"));
}


void PhotoCapabilities_set_imageWidth(PhotoCapabilities* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "imageWidth", value);
}


jb_Sequence PhotoCapabilities_fillLightMode(const PhotoCapabilities *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "fillLightMode"));
}


void PhotoCapabilities_set_fillLightMode(PhotoCapabilities* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "fillLightMode", value);
}

DEFINE_EMLITE_TYPE(ImageCapture, em_Val);


ImageCapture ImageCapture_new(const MediaStreamTrack* videoTrack) : em_Val(em_Val_global("ImageCapture").new_(em_Val_from(videoTrack))) {
        return ImageCapture(em_Val_new(em_Val_global("ImageCapture", em_Val_from(videoTrack)));
      }


jb_Promise ImageCapture_takePhoto(ImageCapture* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "takePhoto"));
}


jb_Promise ImageCapture_takePhoto(ImageCapture* self , const PhotoSettings* photoSettings) {
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
    return em_Val_as(MediaStreamTrack, em_Val_get(em_Val_as_val(self->inner), "track"));
}

