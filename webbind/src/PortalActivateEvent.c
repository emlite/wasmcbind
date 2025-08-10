#include <webbind/PortalActivateEvent.h>

#include <webbind/PortalActivateEventInit.h>
#include <webbind/HTMLPortalElement.h>

DEFINE_EMLITE_TYPE(PortalActivateEvent, Event);


PortalActivateEvent PortalActivateEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("PortalActivateEvent") , em_Val_from(type));
        return PortalActivateEvent_from_val(&vv);
      }


PortalActivateEvent PortalActivateEvent_new1(jb_String * type, PortalActivateEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("PortalActivateEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return PortalActivateEvent_from_val(&vv);
      }


jb_Any PortalActivateEvent_data(const PortalActivateEvent *self) {
    return em_Val_as(jb_Any, em_Val_get(Event_as_val(self->inner), em_Val_from("data")));
}


HTMLPortalElement PortalActivateEvent_adoptPredecessor(PortalActivateEvent* self ) {
    return em_Val_as(HTMLPortalElement, em_Val_call(Event_as_val(self->inner), "adoptPredecessor"));
}

