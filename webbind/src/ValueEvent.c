#include <webbind/ValueEvent.h>

#include <webbind/ValueEventInit.h>

DEFINE_EMLITE_TYPE(ValueEvent, Event);


ValueEvent ValueEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("ValueEvent") , em_Val_from(type));
        return ValueEvent_from_val(&vv);
      }


ValueEvent ValueEvent_new1(jb_String * type, ValueEventInit * initDict) {
        em_Val vv = em_Val_new(em_Val_global("ValueEvent") , em_Val_from(type), em_Val_from(initDict));
        return ValueEvent_from_val(&vv);
      }


jb_Any ValueEvent_value(const ValueEvent *self) {
    return em_Val_as(jb_Any, em_Val_get(Event_as_val(self->inner), em_Val_from("value")));
}

