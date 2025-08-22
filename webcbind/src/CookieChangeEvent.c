#include <webcbind/CookieChangeEvent.h>

#include <webcbind/CookieChangeEventInit.h>
#include <webcbind/CookieListItem.h>

DEFINE_EMLITE_TYPE(CookieChangeEvent, Event);


CookieChangeEvent CookieChangeEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("CookieChangeEvent") , em_Val_from(type));
        return CookieChangeEvent_from_val(&vv);
      }


CookieChangeEvent CookieChangeEvent_new1(jb_String * type, CookieChangeEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("CookieChangeEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return CookieChangeEvent_from_val(&vv);
      }


jb_Array CookieChangeEvent_changed(const CookieChangeEvent *self) {
    return em_Val_as(jb_Array, em_Val_get(Event_as_val(self->inner), em_Val_from("changed")));
}


jb_Array CookieChangeEvent_deleted(const CookieChangeEvent *self) {
    return em_Val_as(jb_Array, em_Val_get(Event_as_val(self->inner), em_Val_from("deleted")));
}

