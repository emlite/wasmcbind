#include <webbind/PreferenceManager.h>

#include <webbind/PreferenceObject.h>

DEFINE_EMLITE_TYPE(PreferenceManager, em_Val);


PreferenceObject PreferenceManager_colorScheme(const PreferenceManager *self) {
    return em_Val_as(PreferenceObject, em_Val_get(em_Val_as_val(self->inner), em_Val_from("colorScheme")));
}


PreferenceObject PreferenceManager_contrast(const PreferenceManager *self) {
    return em_Val_as(PreferenceObject, em_Val_get(em_Val_as_val(self->inner), em_Val_from("contrast")));
}


PreferenceObject PreferenceManager_reducedMotion(const PreferenceManager *self) {
    return em_Val_as(PreferenceObject, em_Val_get(em_Val_as_val(self->inner), em_Val_from("reducedMotion")));
}


PreferenceObject PreferenceManager_reducedTransparency(const PreferenceManager *self) {
    return em_Val_as(PreferenceObject, em_Val_get(em_Val_as_val(self->inner), em_Val_from("reducedTransparency")));
}


PreferenceObject PreferenceManager_reducedData(const PreferenceManager *self) {
    return em_Val_as(PreferenceObject, em_Val_get(em_Val_as_val(self->inner), em_Val_from("reducedData")));
}

