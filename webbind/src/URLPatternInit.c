#include <webbind/URLPatternInit.h>

DEFINE_EMLITE_TYPE(URLPatternInit, em_Val);


jb_String URLPatternInit_protocol(const URLPatternInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("protocol")));
}


void URLPatternInit_set_protocol(URLPatternInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("protocol"), em_Val_from(value));
}


jb_String URLPatternInit_username(const URLPatternInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("username")));
}


void URLPatternInit_set_username(URLPatternInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("username"), em_Val_from(value));
}


jb_String URLPatternInit_password(const URLPatternInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("password")));
}


void URLPatternInit_set_password(URLPatternInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("password"), em_Val_from(value));
}


jb_String URLPatternInit_hostname(const URLPatternInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hostname")));
}


void URLPatternInit_set_hostname(URLPatternInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("hostname"), em_Val_from(value));
}


jb_String URLPatternInit_port(const URLPatternInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("port")));
}


void URLPatternInit_set_port(URLPatternInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("port"), em_Val_from(value));
}


jb_String URLPatternInit_pathname(const URLPatternInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("pathname")));
}


void URLPatternInit_set_pathname(URLPatternInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("pathname"), em_Val_from(value));
}


jb_String URLPatternInit_search(const URLPatternInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("search")));
}


void URLPatternInit_set_search(URLPatternInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("search"), em_Val_from(value));
}


jb_String URLPatternInit_hash(const URLPatternInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hash")));
}


void URLPatternInit_set_hash(URLPatternInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("hash"), em_Val_from(value));
}


jb_String URLPatternInit_baseURL(const URLPatternInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("baseURL")));
}


void URLPatternInit_set_baseURL(URLPatternInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("baseURL"), em_Val_from(value));
}


URLPatternInit URLPatternInit_new() {
    em_Val obj = em_Val_object();
    return URLPatternInit_from_val(&obj);
}

