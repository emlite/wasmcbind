#include <webbind/PortalActivateEvent.h>
#include <webbind/HTMLPortalElement.h>


DEFINE_EMLITE_TYPE(PortalActivateEvent, Event);


PortalActivateEvent PortalActivateEvent_new(const jb_DOMString* type) : Event(em_Val_global("PortalActivateEvent").new_(em_Val_from(type))) {
        return PortalActivateEvent(em_Val_new(em_Val_global("PortalActivateEvent", em_Val_from(type)));
      }


PortalActivateEvent PortalActivateEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("PortalActivateEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return PortalActivateEvent(em_Val_new(em_Val_global("PortalActivateEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


jb_Any PortalActivateEvent_data(const PortalActivateEvent *self) {
    return em_Val_as(jb_Any, em_Val_get(Event_as_val(self->inner), "data"));
}


HTMLPortalElement PortalActivateEvent_adoptPredecessor(PortalActivateEvent* self ) {
    return em_Val_as(HTMLPortalElement, em_Val_call(Event_as_val(self->inner), "adoptPredecessor"));
}

