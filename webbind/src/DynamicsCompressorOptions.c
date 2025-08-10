#include <webbind/DynamicsCompressorOptions.h>

DEFINE_EMLITE_TYPE(DynamicsCompressorOptions, AudioNodeOptions);


float DynamicsCompressorOptions_attack(const DynamicsCompressorOptions *self) {
    return em_Val_as(float, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("attack")));
}


void DynamicsCompressorOptions_set_attack(DynamicsCompressorOptions* self, float value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("attack"), em_Val_from(value));
}


float DynamicsCompressorOptions_knee(const DynamicsCompressorOptions *self) {
    return em_Val_as(float, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("knee")));
}


void DynamicsCompressorOptions_set_knee(DynamicsCompressorOptions* self, float value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("knee"), em_Val_from(value));
}


float DynamicsCompressorOptions_ratio(const DynamicsCompressorOptions *self) {
    return em_Val_as(float, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("ratio")));
}


void DynamicsCompressorOptions_set_ratio(DynamicsCompressorOptions* self, float value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("ratio"), em_Val_from(value));
}


float DynamicsCompressorOptions_release(const DynamicsCompressorOptions *self) {
    return em_Val_as(float, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("release")));
}


void DynamicsCompressorOptions_set_release(DynamicsCompressorOptions* self, float value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("release"), em_Val_from(value));
}


float DynamicsCompressorOptions_threshold(const DynamicsCompressorOptions *self) {
    return em_Val_as(float, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("threshold")));
}


void DynamicsCompressorOptions_set_threshold(DynamicsCompressorOptions* self, float value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("threshold"), em_Val_from(value));
}


DynamicsCompressorOptions DynamicsCompressorOptions_new() {
    em_Val obj = em_Val_object();
    return DynamicsCompressorOptions_from_val(&obj);
}

