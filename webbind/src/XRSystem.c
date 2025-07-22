#include <webbind/XRSystem.h>
#include <webbind/XRSession.h>


DEFINE_EMLITE_TYPE(XRSessionInit, em_Val);


jb_Sequence XRSessionInit_requiredFeatures(const XRSessionInit *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("requiredFeatures")));
}


void XRSessionInit_set_requiredFeatures(XRSessionInit* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("requiredFeatures"), em_Val_from(value));
}


jb_Sequence XRSessionInit_optionalFeatures(const XRSessionInit *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("optionalFeatures")));
}


void XRSessionInit_set_optionalFeatures(XRSessionInit* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("optionalFeatures"), em_Val_from(value));
}

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

