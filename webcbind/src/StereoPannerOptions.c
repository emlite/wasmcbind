#include <webcbind/StereoPannerOptions.h>

DEFINE_EMLITE_TYPE(StereoPannerOptions, AudioNodeOptions);


float StereoPannerOptions_pan(const StereoPannerOptions *self) {
    return em_Val_as(float, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("pan")));
}


void StereoPannerOptions_set_pan(StereoPannerOptions* self, float value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("pan"), em_Val_from(value));
}


StereoPannerOptions StereoPannerOptions_new() {
    em_Val obj = em_Val_object();
    return StereoPannerOptions_from_val(&obj);
}

