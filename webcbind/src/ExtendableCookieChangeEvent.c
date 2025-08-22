#include <webcbind/ExtendableCookieChangeEvent.h>

#include <webcbind/ExtendableCookieChangeEventInit.h>
#include <webcbind/CookieListItem.h>

DEFINE_EMLITE_TYPE(ExtendableCookieChangeEvent, ExtendableEvent);


ExtendableCookieChangeEvent ExtendableCookieChangeEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("ExtendableCookieChangeEvent") , em_Val_from(type));
        return ExtendableCookieChangeEvent_from_val(&vv);
      }


ExtendableCookieChangeEvent ExtendableCookieChangeEvent_new1(jb_String * type, ExtendableCookieChangeEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("ExtendableCookieChangeEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return ExtendableCookieChangeEvent_from_val(&vv);
      }


jb_Array ExtendableCookieChangeEvent_changed(const ExtendableCookieChangeEvent *self) {
    return em_Val_as(jb_Array, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("changed")));
}


jb_Array ExtendableCookieChangeEvent_deleted(const ExtendableCookieChangeEvent *self) {
    return em_Val_as(jb_Array, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("deleted")));
}

