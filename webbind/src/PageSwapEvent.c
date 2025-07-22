#include <webbind/PageSwapEvent.h>
#include <webbind/NavigationActivation.h>
#include <webbind/ViewTransition.h>


DEFINE_EMLITE_TYPE(PageSwapEvent, Event);


PageSwapEvent PageSwapEvent_new0(jb_DOMString * type) {
        em_Val vv = em_Val_new(em_Val_global("PageSwapEvent") , em_Val_from(type));
        return PageSwapEvent_from_val(&vv);
      }


PageSwapEvent PageSwapEvent_new1(jb_DOMString * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("PageSwapEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return PageSwapEvent_from_val(&vv);
      }


NavigationActivation PageSwapEvent_activation(const PageSwapEvent *self) {
    return em_Val_as(NavigationActivation, em_Val_get(Event_as_val(self->inner), em_Val_from("activation")));
}


ViewTransition PageSwapEvent_viewTransition(const PageSwapEvent *self) {
    return em_Val_as(ViewTransition, em_Val_get(Event_as_val(self->inner), em_Val_from("viewTransition")));
}

