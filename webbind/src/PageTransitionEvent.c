#include <webbind/PageTransitionEvent.h>

#include <webbind/PageTransitionEventInit.h>

DEFINE_EMLITE_TYPE(PageTransitionEvent, Event);


PageTransitionEvent PageTransitionEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("PageTransitionEvent") , em_Val_from(type));
        return PageTransitionEvent_from_val(&vv);
      }


PageTransitionEvent PageTransitionEvent_new1(jb_String * type, PageTransitionEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("PageTransitionEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return PageTransitionEvent_from_val(&vv);
      }


bool PageTransitionEvent_persisted(const PageTransitionEvent *self) {
    return em_Val_as(bool, em_Val_get(Event_as_val(self->inner), em_Val_from("persisted")));
}

