#include <webbind/XRSessionEvent.h>
#include <webbind/XRSession.h>


DEFINE_EMLITE_TYPE(XRSessionEvent, Event);


XRSessionEvent XRSessionEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("XRSessionEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return XRSessionEvent(em_Val_new(em_Val_global("XRSessionEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


XRSession XRSessionEvent_session(const XRSessionEvent *self) {
    return em_Val_as(XRSession, em_Val_get(Event_as_val(self->inner), "session"));
}

