#include <webbind/PannerOptions.h>

DEFINE_EMLITE_TYPE(PannerOptions, AudioNodeOptions);


PanningModelType PannerOptions_panningModel(const PannerOptions *self) {
    return em_Val_as(PanningModelType, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("panningModel")));
}


void PannerOptions_set_panningModel(PannerOptions* self, PanningModelType * value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("panningModel"), em_Val_from(value));
}


DistanceModelType PannerOptions_distanceModel(const PannerOptions *self) {
    return em_Val_as(DistanceModelType, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("distanceModel")));
}


void PannerOptions_set_distanceModel(PannerOptions* self, DistanceModelType * value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("distanceModel"), em_Val_from(value));
}


float PannerOptions_positionX(const PannerOptions *self) {
    return em_Val_as(float, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("positionX")));
}


void PannerOptions_set_positionX(PannerOptions* self, float value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("positionX"), em_Val_from(value));
}


float PannerOptions_positionY(const PannerOptions *self) {
    return em_Val_as(float, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("positionY")));
}


void PannerOptions_set_positionY(PannerOptions* self, float value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("positionY"), em_Val_from(value));
}


float PannerOptions_positionZ(const PannerOptions *self) {
    return em_Val_as(float, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("positionZ")));
}


void PannerOptions_set_positionZ(PannerOptions* self, float value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("positionZ"), em_Val_from(value));
}


float PannerOptions_orientationX(const PannerOptions *self) {
    return em_Val_as(float, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("orientationX")));
}


void PannerOptions_set_orientationX(PannerOptions* self, float value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("orientationX"), em_Val_from(value));
}


float PannerOptions_orientationY(const PannerOptions *self) {
    return em_Val_as(float, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("orientationY")));
}


void PannerOptions_set_orientationY(PannerOptions* self, float value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("orientationY"), em_Val_from(value));
}


float PannerOptions_orientationZ(const PannerOptions *self) {
    return em_Val_as(float, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("orientationZ")));
}


void PannerOptions_set_orientationZ(PannerOptions* self, float value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("orientationZ"), em_Val_from(value));
}


double PannerOptions_refDistance(const PannerOptions *self) {
    return em_Val_as(double, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("refDistance")));
}


void PannerOptions_set_refDistance(PannerOptions* self, double value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("refDistance"), em_Val_from(value));
}


double PannerOptions_maxDistance(const PannerOptions *self) {
    return em_Val_as(double, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("maxDistance")));
}


void PannerOptions_set_maxDistance(PannerOptions* self, double value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("maxDistance"), em_Val_from(value));
}


double PannerOptions_rolloffFactor(const PannerOptions *self) {
    return em_Val_as(double, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("rolloffFactor")));
}


void PannerOptions_set_rolloffFactor(PannerOptions* self, double value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("rolloffFactor"), em_Val_from(value));
}


double PannerOptions_coneInnerAngle(const PannerOptions *self) {
    return em_Val_as(double, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("coneInnerAngle")));
}


void PannerOptions_set_coneInnerAngle(PannerOptions* self, double value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("coneInnerAngle"), em_Val_from(value));
}


double PannerOptions_coneOuterAngle(const PannerOptions *self) {
    return em_Val_as(double, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("coneOuterAngle")));
}


void PannerOptions_set_coneOuterAngle(PannerOptions* self, double value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("coneOuterAngle"), em_Val_from(value));
}


double PannerOptions_coneOuterGain(const PannerOptions *self) {
    return em_Val_as(double, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("coneOuterGain")));
}


void PannerOptions_set_coneOuterGain(PannerOptions* self, double value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("coneOuterGain"), em_Val_from(value));
}


PannerOptions PannerOptions_new() {
    em_Val obj = em_Val_object();
    return PannerOptions_from_val(&obj);
}

