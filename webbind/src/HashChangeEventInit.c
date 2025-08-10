#include <webbind/HashChangeEventInit.h>

DEFINE_EMLITE_TYPE(HashChangeEventInit, EventInit);


jb_String HashChangeEventInit_oldURL(const HashChangeEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("oldURL")));
}


void HashChangeEventInit_set_oldURL(HashChangeEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("oldURL"), em_Val_from(value));
}


jb_String HashChangeEventInit_newURL(const HashChangeEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("newURL")));
}


void HashChangeEventInit_set_newURL(HashChangeEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("newURL"), em_Val_from(value));
}


HashChangeEventInit HashChangeEventInit_new() {
    em_Val obj = em_Val_object();
    return HashChangeEventInit_from_val(&obj);
}

