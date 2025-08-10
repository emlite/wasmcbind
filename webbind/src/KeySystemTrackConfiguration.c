#include <webbind/KeySystemTrackConfiguration.h>

DEFINE_EMLITE_TYPE(KeySystemTrackConfiguration, em_Val);


jb_String KeySystemTrackConfiguration_robustness(const KeySystemTrackConfiguration *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("robustness")));
}


void KeySystemTrackConfiguration_set_robustness(KeySystemTrackConfiguration* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("robustness"), em_Val_from(value));
}


jb_String KeySystemTrackConfiguration_encryptionScheme(const KeySystemTrackConfiguration *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("encryptionScheme")));
}


void KeySystemTrackConfiguration_set_encryptionScheme(KeySystemTrackConfiguration* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("encryptionScheme"), em_Val_from(value));
}


KeySystemTrackConfiguration KeySystemTrackConfiguration_new() {
    em_Val obj = em_Val_object();
    return KeySystemTrackConfiguration_from_val(&obj);
}

