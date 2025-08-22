#include <webcbind/XRLightEstimate.h>

#include <webcbind/DOMPointReadOnly.h>

DEFINE_EMLITE_TYPE(XRLightEstimate, em_Val);


jb_Float32Array XRLightEstimate_sphericalHarmonicsCoefficients(const XRLightEstimate *self) {
    return em_Val_as(jb_Float32Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sphericalHarmonicsCoefficients")));
}


DOMPointReadOnly XRLightEstimate_primaryLightDirection(const XRLightEstimate *self) {
    return em_Val_as(DOMPointReadOnly, em_Val_get(em_Val_as_val(self->inner), em_Val_from("primaryLightDirection")));
}


DOMPointReadOnly XRLightEstimate_primaryLightIntensity(const XRLightEstimate *self) {
    return em_Val_as(DOMPointReadOnly, em_Val_get(em_Val_as_val(self->inner), em_Val_from("primaryLightIntensity")));
}

