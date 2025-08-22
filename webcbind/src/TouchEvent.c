#include <webcbind/TouchEvent.h>

#include <webcbind/TouchEventInit.h>
#include <webcbind/TouchList.h>

DEFINE_EMLITE_TYPE(TouchEvent, UIEvent);


TouchEvent TouchEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("TouchEvent") , em_Val_from(type));
        return TouchEvent_from_val(&vv);
      }


TouchEvent TouchEvent_new1(jb_String * type, TouchEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("TouchEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return TouchEvent_from_val(&vv);
      }


TouchList TouchEvent_touches(const TouchEvent *self) {
    return em_Val_as(TouchList, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("touches")));
}


TouchList TouchEvent_targetTouches(const TouchEvent *self) {
    return em_Val_as(TouchList, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("targetTouches")));
}


TouchList TouchEvent_changedTouches(const TouchEvent *self) {
    return em_Val_as(TouchList, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("changedTouches")));
}


bool TouchEvent_altKey(const TouchEvent *self) {
    return em_Val_as(bool, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("altKey")));
}


bool TouchEvent_metaKey(const TouchEvent *self) {
    return em_Val_as(bool, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("metaKey")));
}


bool TouchEvent_ctrlKey(const TouchEvent *self) {
    return em_Val_as(bool, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("ctrlKey")));
}


bool TouchEvent_shiftKey(const TouchEvent *self) {
    return em_Val_as(bool, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("shiftKey")));
}


bool TouchEvent_getModifierState(TouchEvent* self , jb_String * keyArg) {
    return em_Val_as(bool, em_Val_call(UIEvent_as_val(self->inner), "getModifierState", em_Val_from(keyArg)));
}

