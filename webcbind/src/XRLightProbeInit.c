#include <webcbind/XRLightProbeInit.h>

DEFINE_EMLITE_TYPE(XRLightProbeInit, em_Val);


XRReflectionFormat XRLightProbeInit_reflectionFormat(const XRLightProbeInit *self) {
    return em_Val_as(XRReflectionFormat, em_Val_get(em_Val_as_val(self->inner), em_Val_from("reflectionFormat")));
}


void XRLightProbeInit_set_reflectionFormat(XRLightProbeInit* self, XRReflectionFormat * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("reflectionFormat"), em_Val_from(value));
}


XRLightProbeInit XRLightProbeInit_new() {
    em_Val obj = em_Val_object();
    return XRLightProbeInit_from_val(&obj);
}

