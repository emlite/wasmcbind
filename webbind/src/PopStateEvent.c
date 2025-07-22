#include <webbind/PopStateEvent.h>


DEFINE_EMLITE_TYPE(PopStateEvent, Event);


PopStateEvent PopStateEvent_new0(jb_DOMString * type) {
        em_Val vv = em_Val_new(em_Val_global("PopStateEvent") , em_Val_from(type));
        return PopStateEvent_from_val(&vv);
      }


PopStateEvent PopStateEvent_new1(jb_DOMString * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("PopStateEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return PopStateEvent_from_val(&vv);
      }


jb_Any PopStateEvent_state(const PopStateEvent *self) {
    return em_Val_as(jb_Any, em_Val_get(Event_as_val(self->inner), em_Val_from("state")));
}


bool PopStateEvent_hasUAVisualTransition(const PopStateEvent *self) {
    return em_Val_as(bool, em_Val_get(Event_as_val(self->inner), em_Val_from("hasUAVisualTransition")));
}

