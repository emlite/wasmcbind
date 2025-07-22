#include <webbind/ExtendableCookieChangeEvent.h>
#include <webbind/CookieStore.h>


DEFINE_EMLITE_TYPE(ExtendableCookieChangeEvent, ExtendableEvent);


ExtendableCookieChangeEvent ExtendableCookieChangeEvent_new0(jb_DOMString * type) {
        em_Val vv = em_Val_new(em_Val_global("ExtendableCookieChangeEvent") , em_Val_from(type));
        return ExtendableCookieChangeEvent_from_val(&vv);
      }


ExtendableCookieChangeEvent ExtendableCookieChangeEvent_new1(jb_DOMString * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("ExtendableCookieChangeEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return ExtendableCookieChangeEvent_from_val(&vv);
      }


jb_FrozenArray ExtendableCookieChangeEvent_changed(const ExtendableCookieChangeEvent *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("changed")));
}


jb_FrozenArray ExtendableCookieChangeEvent_deleted(const ExtendableCookieChangeEvent *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("deleted")));
}

