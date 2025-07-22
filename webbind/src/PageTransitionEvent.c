#include <webbind/PageTransitionEvent.h>


DEFINE_EMLITE_TYPE(PageTransitionEvent, Event);


PageTransitionEvent PageTransitionEvent_new(const jb_DOMString* type) : Event(em_Val_global("PageTransitionEvent").new_(em_Val_from(type))) {
        return PageTransitionEvent(em_Val_new(em_Val_global("PageTransitionEvent", em_Val_from(type)));
      }


PageTransitionEvent PageTransitionEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("PageTransitionEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return PageTransitionEvent(em_Val_new(em_Val_global("PageTransitionEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


bool PageTransitionEvent_persisted(const PageTransitionEvent *self) {
    return em_Val_as(bool, em_Val_get(Event_as_val(self->inner), "persisted"));
}

