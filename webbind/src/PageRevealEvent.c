#include <webbind/PageRevealEvent.h>
#include <webbind/ViewTransition.h>


DEFINE_EMLITE_TYPE(PageRevealEvent, Event);


PageRevealEvent PageRevealEvent_new(const jb_DOMString* type) : Event(em_Val_global("PageRevealEvent").new_(em_Val_from(type))) {
        return PageRevealEvent(em_Val_new(em_Val_global("PageRevealEvent", em_Val_from(type)));
      }


PageRevealEvent PageRevealEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("PageRevealEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return PageRevealEvent(em_Val_new(em_Val_global("PageRevealEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


ViewTransition PageRevealEvent_viewTransition(const PageRevealEvent *self) {
    return em_Val_as(ViewTransition, em_Val_get(Event_as_val(self->inner), "viewTransition"));
}

