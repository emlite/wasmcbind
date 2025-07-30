#include <webbind/PageRevealEvent.h>
#include <webbind/ViewTransition.h>


DEFINE_EMLITE_TYPE(PageRevealEvent, Event);


PageRevealEvent PageRevealEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("PageRevealEvent") , em_Val_from(type));
        return PageRevealEvent_from_val(&vv);
      }


PageRevealEvent PageRevealEvent_new1(jb_String * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("PageRevealEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return PageRevealEvent_from_val(&vv);
      }


ViewTransition PageRevealEvent_viewTransition(const PageRevealEvent *self) {
    return em_Val_as(ViewTransition, em_Val_get(Event_as_val(self->inner), em_Val_from("viewTransition")));
}

