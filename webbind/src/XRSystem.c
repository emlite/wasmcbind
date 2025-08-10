#include <webbind/XRSystem.h>

#include <webbind/XRSession.h>
#include <webbind/XRSessionInit.h>

DEFINE_EMLITE_TYPE(XRSystem, EventTarget);


jb_Promise XRSystem_isSessionSupported(XRSystem* self , XRSessionMode * mode) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "isSessionSupported", em_Val_from(mode)));
}


jb_Promise XRSystem_requestSession0(XRSystem* self , XRSessionMode * mode) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "requestSession", em_Val_from(mode)));
}


jb_Promise XRSystem_requestSession1(XRSystem* self , XRSessionMode * mode, XRSessionInit * options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "requestSession", em_Val_from(mode), em_Val_from(options)));
}


jb_Any XRSystem_ondevicechange(const XRSystem *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("ondevicechange")));
}


void XRSystem_set_ondevicechange(XRSystem* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("ondevicechange"), em_Val_from(value));
}

