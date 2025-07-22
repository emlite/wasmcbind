#include <webbind/FocusEvent.h>
#include <webbind/EventTarget.h>


DEFINE_EMLITE_TYPE(FocusEvent, UIEvent);


FocusEvent FocusEvent_new(const jb_DOMString* type) : UIEvent(em_Val_global("FocusEvent").new_(em_Val_from(type))) {
        return FocusEvent(em_Val_new(em_Val_global("FocusEvent", em_Val_from(type)));
      }


FocusEvent FocusEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : UIEvent(em_Val_global("FocusEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return FocusEvent(em_Val_new(em_Val_global("FocusEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


EventTarget FocusEvent_relatedTarget(const FocusEvent *self) {
    return em_Val_as(EventTarget, em_Val_get(UIEvent_as_val(self->inner), "relatedTarget"));
}

