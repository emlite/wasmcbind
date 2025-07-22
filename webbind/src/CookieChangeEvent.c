#include <webbind/CookieChangeEvent.h>
#include <webbind/CookieStore.h>


DEFINE_EMLITE_TYPE(CookieChangeEvent, Event);


CookieChangeEvent CookieChangeEvent_new(const jb_DOMString* type) : Event(em_Val_global("CookieChangeEvent").new_(em_Val_from(type))) {
        return CookieChangeEvent(em_Val_new(em_Val_global("CookieChangeEvent", em_Val_from(type)));
      }


CookieChangeEvent CookieChangeEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("CookieChangeEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return CookieChangeEvent(em_Val_new(em_Val_global("CookieChangeEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


jb_FrozenArray CookieChangeEvent_changed(const CookieChangeEvent *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(Event_as_val(self->inner), "changed"));
}


jb_FrozenArray CookieChangeEvent_deleted(const CookieChangeEvent *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(Event_as_val(self->inner), "deleted"));
}

