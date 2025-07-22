#include <webbind/XRInputSourcesChangeEvent.h>
#include <webbind/XRSession.h>
#include <webbind/XRInputSource.h>


DEFINE_EMLITE_TYPE(XRInputSourcesChangeEvent, Event);


XRInputSourcesChangeEvent XRInputSourcesChangeEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("XRInputSourcesChangeEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return XRInputSourcesChangeEvent(em_Val_new(em_Val_global("XRInputSourcesChangeEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


XRSession XRInputSourcesChangeEvent_session(const XRInputSourcesChangeEvent *self) {
    return em_Val_as(XRSession, em_Val_get(Event_as_val(self->inner), "session"));
}


jb_FrozenArray XRInputSourcesChangeEvent_added(const XRInputSourcesChangeEvent *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(Event_as_val(self->inner), "added"));
}


jb_FrozenArray XRInputSourcesChangeEvent_removed(const XRInputSourcesChangeEvent *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(Event_as_val(self->inner), "removed"));
}

