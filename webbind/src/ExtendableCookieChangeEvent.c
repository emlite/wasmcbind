#include <webbind/ExtendableCookieChangeEvent.h>
#include <webbind/CookieStore.h>


DEFINE_EMLITE_TYPE(ExtendableCookieChangeEvent, ExtendableEvent);


ExtendableCookieChangeEvent ExtendableCookieChangeEvent_new(const jb_DOMString* type) : ExtendableEvent(em_Val_global("ExtendableCookieChangeEvent").new_(em_Val_from(type))) {
        return ExtendableCookieChangeEvent(em_Val_new(em_Val_global("ExtendableCookieChangeEvent", em_Val_from(type)));
      }


ExtendableCookieChangeEvent ExtendableCookieChangeEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : ExtendableEvent(em_Val_global("ExtendableCookieChangeEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return ExtendableCookieChangeEvent(em_Val_new(em_Val_global("ExtendableCookieChangeEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


jb_FrozenArray ExtendableCookieChangeEvent_changed(const ExtendableCookieChangeEvent *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(ExtendableEvent_as_val(self->inner), "changed"));
}


jb_FrozenArray ExtendableCookieChangeEvent_deleted(const ExtendableCookieChangeEvent *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(ExtendableEvent_as_val(self->inner), "deleted"));
}

