#include <webbind/ExtendableCookieChangeEventInit.h>

DEFINE_EMLITE_TYPE(ExtendableCookieChangeEventInit, ExtendableEventInit);


jb_Any ExtendableCookieChangeEventInit_changed(const ExtendableCookieChangeEventInit *self) {
    return em_Val_as(jb_Any, em_Val_get(ExtendableEventInit_as_val(self->inner), em_Val_from("changed")));
}


void ExtendableCookieChangeEventInit_set_changed(ExtendableCookieChangeEventInit* self, jb_Any * value) {
    em_Val_set(ExtendableEventInit_as_val(self->inner), em_Val_from("changed"), em_Val_from(value));
}


jb_Any ExtendableCookieChangeEventInit_deleted(const ExtendableCookieChangeEventInit *self) {
    return em_Val_as(jb_Any, em_Val_get(ExtendableEventInit_as_val(self->inner), em_Val_from("deleted")));
}


void ExtendableCookieChangeEventInit_set_deleted(ExtendableCookieChangeEventInit* self, jb_Any * value) {
    em_Val_set(ExtendableEventInit_as_val(self->inner), em_Val_from("deleted"), em_Val_from(value));
}


ExtendableCookieChangeEventInit ExtendableCookieChangeEventInit_new() {
    em_Val obj = em_Val_object();
    return ExtendableCookieChangeEventInit_from_val(&obj);
}

