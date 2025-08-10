#include <webbind/XRInputSourcesChangeEvent.h>

#include <webbind/XRInputSourcesChangeEventInit.h>
#include <webbind/XRSession.h>
#include <webbind/XRInputSource.h>

DEFINE_EMLITE_TYPE(XRInputSourcesChangeEvent, Event);


XRInputSourcesChangeEvent XRInputSourcesChangeEvent_new(jb_String * type, XRInputSourcesChangeEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("XRInputSourcesChangeEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return XRInputSourcesChangeEvent_from_val(&vv);
      }


XRSession XRInputSourcesChangeEvent_session(const XRInputSourcesChangeEvent *self) {
    return em_Val_as(XRSession, em_Val_get(Event_as_val(self->inner), em_Val_from("session")));
}


jb_Array XRInputSourcesChangeEvent_added(const XRInputSourcesChangeEvent *self) {
    return em_Val_as(jb_Array, em_Val_get(Event_as_val(self->inner), em_Val_from("added")));
}


jb_Array XRInputSourcesChangeEvent_removed(const XRInputSourcesChangeEvent *self) {
    return em_Val_as(jb_Array, em_Val_get(Event_as_val(self->inner), em_Val_from("removed")));
}

