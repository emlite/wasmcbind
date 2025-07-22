#include <webbind/PageSwapEvent.h>
#include <webbind/NavigationActivation.h>
#include <webbind/ViewTransition.h>


DEFINE_EMLITE_TYPE(PageSwapEvent, Event);


PageSwapEvent PageSwapEvent_new(const jb_DOMString* type) : Event(em_Val_global("PageSwapEvent").new_(em_Val_from(type))) {
        return PageSwapEvent(em_Val_new(em_Val_global("PageSwapEvent", em_Val_from(type)));
      }


PageSwapEvent PageSwapEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("PageSwapEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return PageSwapEvent(em_Val_new(em_Val_global("PageSwapEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


NavigationActivation PageSwapEvent_activation(const PageSwapEvent *self) {
    return em_Val_as(NavigationActivation, em_Val_get(Event_as_val(self->inner), "activation"));
}


ViewTransition PageSwapEvent_viewTransition(const PageSwapEvent *self) {
    return em_Val_as(ViewTransition, em_Val_get(Event_as_val(self->inner), "viewTransition"));
}

