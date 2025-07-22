#include <webbind/TouchEvent.h>
#include <webbind/TouchList.h>


DEFINE_EMLITE_TYPE(TouchEvent, UIEvent);


TouchEvent TouchEvent_new(const jb_DOMString* type) : UIEvent(em_Val_global("TouchEvent").new_(em_Val_from(type))) {
        return TouchEvent(em_Val_new(em_Val_global("TouchEvent", em_Val_from(type)));
      }


TouchEvent TouchEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : UIEvent(em_Val_global("TouchEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return TouchEvent(em_Val_new(em_Val_global("TouchEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


TouchList TouchEvent_touches(const TouchEvent *self) {
    return em_Val_as(TouchList, em_Val_get(UIEvent_as_val(self->inner), "touches"));
}


TouchList TouchEvent_targetTouches(const TouchEvent *self) {
    return em_Val_as(TouchList, em_Val_get(UIEvent_as_val(self->inner), "targetTouches"));
}


TouchList TouchEvent_changedTouches(const TouchEvent *self) {
    return em_Val_as(TouchList, em_Val_get(UIEvent_as_val(self->inner), "changedTouches"));
}


bool TouchEvent_altKey(const TouchEvent *self) {
    return em_Val_as(bool, em_Val_get(UIEvent_as_val(self->inner), "altKey"));
}


bool TouchEvent_metaKey(const TouchEvent *self) {
    return em_Val_as(bool, em_Val_get(UIEvent_as_val(self->inner), "metaKey"));
}


bool TouchEvent_ctrlKey(const TouchEvent *self) {
    return em_Val_as(bool, em_Val_get(UIEvent_as_val(self->inner), "ctrlKey"));
}


bool TouchEvent_shiftKey(const TouchEvent *self) {
    return em_Val_as(bool, em_Val_get(UIEvent_as_val(self->inner), "shiftKey"));
}


bool TouchEvent_getModifierState(TouchEvent* self , const jb_DOMString* keyArg) {
    return em_Val_as(bool, em_Val_call(UIEvent_as_val(self->inner), "getModifierState", em_Val_from(keyArg)));
}

