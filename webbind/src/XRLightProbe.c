#include <webbind/XRLightProbe.h>
#include <webbind/XRSpace.h>


DEFINE_EMLITE_TYPE(XRLightProbe, EventTarget);


XRSpace XRLightProbe_probeSpace(const XRLightProbe *self) {
    return em_Val_as(XRSpace, em_Val_get(EventTarget_as_val(self->inner), "probeSpace"));
}


jb_Any XRLightProbe_onreflectionchange(const XRLightProbe *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onreflectionchange"));
}


void XRLightProbe_set_onreflectionchange(XRLightProbe* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onreflectionchange", value);
}

