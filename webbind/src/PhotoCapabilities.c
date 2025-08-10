#include <webbind/PhotoCapabilities.h>

DEFINE_EMLITE_TYPE(PhotoCapabilities, em_Val);


RedEyeReduction PhotoCapabilities_redEyeReduction(const PhotoCapabilities *self) {
    return em_Val_as(RedEyeReduction, em_Val_get(em_Val_as_val(self->inner), em_Val_from("redEyeReduction")));
}


void PhotoCapabilities_set_redEyeReduction(PhotoCapabilities* self, RedEyeReduction * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("redEyeReduction"), em_Val_from(value));
}


MediaSettingsRange PhotoCapabilities_imageHeight(const PhotoCapabilities *self) {
    return em_Val_as(MediaSettingsRange, em_Val_get(em_Val_as_val(self->inner), em_Val_from("imageHeight")));
}


void PhotoCapabilities_set_imageHeight(PhotoCapabilities* self, MediaSettingsRange * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("imageHeight"), em_Val_from(value));
}


MediaSettingsRange PhotoCapabilities_imageWidth(const PhotoCapabilities *self) {
    return em_Val_as(MediaSettingsRange, em_Val_get(em_Val_as_val(self->inner), em_Val_from("imageWidth")));
}


void PhotoCapabilities_set_imageWidth(PhotoCapabilities* self, MediaSettingsRange * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("imageWidth"), em_Val_from(value));
}


jb_Array PhotoCapabilities_fillLightMode(const PhotoCapabilities *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("fillLightMode")));
}


void PhotoCapabilities_set_fillLightMode(PhotoCapabilities* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("fillLightMode"), em_Val_from(value));
}


PhotoCapabilities PhotoCapabilities_new() {
    em_Val obj = em_Val_object();
    return PhotoCapabilities_from_val(&obj);
}

