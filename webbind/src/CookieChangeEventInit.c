#include <webbind/CookieChangeEventInit.h>

DEFINE_EMLITE_TYPE(CookieChangeEventInit, EventInit);


jb_Any CookieChangeEventInit_changed(const CookieChangeEventInit *self) {
    return em_Val_as(jb_Any, em_Val_get(EventInit_as_val(self->inner), em_Val_from("changed")));
}


void CookieChangeEventInit_set_changed(CookieChangeEventInit* self, jb_Any * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("changed"), em_Val_from(value));
}


jb_Any CookieChangeEventInit_deleted(const CookieChangeEventInit *self) {
    return em_Val_as(jb_Any, em_Val_get(EventInit_as_val(self->inner), em_Val_from("deleted")));
}


void CookieChangeEventInit_set_deleted(CookieChangeEventInit* self, jb_Any * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("deleted"), em_Val_from(value));
}


CookieChangeEventInit CookieChangeEventInit_new() {
    em_Val obj = em_Val_object();
    return CookieChangeEventInit_from_val(&obj);
}

