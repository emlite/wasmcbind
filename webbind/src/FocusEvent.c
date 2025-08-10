#include <webbind/FocusEvent.h>

#include <webbind/FocusEventInit.h>
#include <webbind/EventTarget.h>

DEFINE_EMLITE_TYPE(FocusEvent, UIEvent);


FocusEvent FocusEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("FocusEvent") , em_Val_from(type));
        return FocusEvent_from_val(&vv);
      }


FocusEvent FocusEvent_new1(jb_String * type, FocusEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("FocusEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return FocusEvent_from_val(&vv);
      }


EventTarget FocusEvent_relatedTarget(const FocusEvent *self) {
    return em_Val_as(EventTarget, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("relatedTarget")));
}

