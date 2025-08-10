#include <webbind/MediaSettingsRange.h>

DEFINE_EMLITE_TYPE(MediaSettingsRange, em_Val);


double MediaSettingsRange_max(const MediaSettingsRange *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("max")));
}


void MediaSettingsRange_set_max(MediaSettingsRange* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("max"), em_Val_from(value));
}


double MediaSettingsRange_min(const MediaSettingsRange *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("min")));
}


void MediaSettingsRange_set_min(MediaSettingsRange* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("min"), em_Val_from(value));
}


double MediaSettingsRange_step(const MediaSettingsRange *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("step")));
}


void MediaSettingsRange_set_step(MediaSettingsRange* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("step"), em_Val_from(value));
}


MediaSettingsRange MediaSettingsRange_new() {
    em_Val obj = em_Val_object();
    return MediaSettingsRange_from_val(&obj);
}

