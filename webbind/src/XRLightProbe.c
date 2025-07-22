#include <webbind/XRLightProbe.h>
#include <webbind/XRSpace.h>


DEFINE_EMLITE_TYPE(XRLightProbe, EventTarget);


XRSpace XRLightProbe_probeSpace(const XRLightProbe *self) {
    return em_Val_as(XRSpace, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("probeSpace")));
}


jb_Any XRLightProbe_onreflectionchange(const XRLightProbe *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onreflectionchange")));
}


void XRLightProbe_set_onreflectionchange(XRLightProbe* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onreflectionchange"), em_Val_from(value));
}

