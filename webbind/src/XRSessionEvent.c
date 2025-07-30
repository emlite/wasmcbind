#include <webbind/XRSessionEvent.h>
#include <webbind/XRSession.h>


DEFINE_EMLITE_TYPE(XRSessionEvent, Event);


XRSessionEvent XRSessionEvent_new(jb_String * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("XRSessionEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return XRSessionEvent_from_val(&vv);
      }


XRSession XRSessionEvent_session(const XRSessionEvent *self) {
    return em_Val_as(XRSession, em_Val_get(Event_as_val(self->inner), em_Val_from("session")));
}

