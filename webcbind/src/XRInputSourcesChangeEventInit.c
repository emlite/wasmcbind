#include <webcbind/XRInputSourcesChangeEventInit.h>

#include <webcbind/XRSession.h>
#include <webcbind/XRInputSource.h>

DEFINE_EMLITE_TYPE(XRInputSourcesChangeEventInit, EventInit);


XRSession XRInputSourcesChangeEventInit_session(const XRInputSourcesChangeEventInit *self) {
    return em_Val_as(XRSession, em_Val_get(EventInit_as_val(self->inner), em_Val_from("session")));
}


void XRInputSourcesChangeEventInit_set_session(XRInputSourcesChangeEventInit* self, XRSession * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("session"), em_Val_from(value));
}


jb_Array XRInputSourcesChangeEventInit_added(const XRInputSourcesChangeEventInit *self) {
    return em_Val_as(jb_Array, em_Val_get(EventInit_as_val(self->inner), em_Val_from("added")));
}


void XRInputSourcesChangeEventInit_set_added(XRInputSourcesChangeEventInit* self, jb_Array * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("added"), em_Val_from(value));
}


jb_Array XRInputSourcesChangeEventInit_removed(const XRInputSourcesChangeEventInit *self) {
    return em_Val_as(jb_Array, em_Val_get(EventInit_as_val(self->inner), em_Val_from("removed")));
}


void XRInputSourcesChangeEventInit_set_removed(XRInputSourcesChangeEventInit* self, jb_Array * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("removed"), em_Val_from(value));
}


XRInputSourcesChangeEventInit XRInputSourcesChangeEventInit_new() {
    em_Val obj = em_Val_object();
    return XRInputSourcesChangeEventInit_from_val(&obj);
}

