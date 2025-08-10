#include <webbind/ExtendableEvent.h>

#include <webbind/ExtendableEventInit.h>

DEFINE_EMLITE_TYPE(ExtendableEvent, Event);


ExtendableEvent ExtendableEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("ExtendableEvent") , em_Val_from(type));
        return ExtendableEvent_from_val(&vv);
      }


ExtendableEvent ExtendableEvent_new1(jb_String * type, ExtendableEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("ExtendableEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return ExtendableEvent_from_val(&vv);
      }


jb_Undefined ExtendableEvent_waitUntil(ExtendableEvent* self , jb_Promise * f) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "waitUntil", em_Val_from(f)));
}

