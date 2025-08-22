#include <webcbind/PhotoSettings.h>

DEFINE_EMLITE_TYPE(PhotoSettings, em_Val);


FillLightMode PhotoSettings_fillLightMode(const PhotoSettings *self) {
    return em_Val_as(FillLightMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("fillLightMode")));
}


void PhotoSettings_set_fillLightMode(PhotoSettings* self, FillLightMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("fillLightMode"), em_Val_from(value));
}


double PhotoSettings_imageHeight(const PhotoSettings *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("imageHeight")));
}


void PhotoSettings_set_imageHeight(PhotoSettings* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("imageHeight"), em_Val_from(value));
}


double PhotoSettings_imageWidth(const PhotoSettings *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("imageWidth")));
}


void PhotoSettings_set_imageWidth(PhotoSettings* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("imageWidth"), em_Val_from(value));
}


bool PhotoSettings_redEyeReduction(const PhotoSettings *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("redEyeReduction")));
}


void PhotoSettings_set_redEyeReduction(PhotoSettings* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("redEyeReduction"), em_Val_from(value));
}


PhotoSettings PhotoSettings_new() {
    em_Val obj = em_Val_object();
    return PhotoSettings_from_val(&obj);
}

