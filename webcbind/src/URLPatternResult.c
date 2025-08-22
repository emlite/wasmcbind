#include <webcbind/URLPatternResult.h>

DEFINE_EMLITE_TYPE(URLPatternResult, em_Val);


jb_Array URLPatternResult_inputs(const URLPatternResult *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("inputs")));
}


void URLPatternResult_set_inputs(URLPatternResult* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("inputs"), em_Val_from(value));
}


URLPatternComponentResult URLPatternResult_protocol(const URLPatternResult *self) {
    return em_Val_as(URLPatternComponentResult, em_Val_get(em_Val_as_val(self->inner), em_Val_from("protocol")));
}


void URLPatternResult_set_protocol(URLPatternResult* self, URLPatternComponentResult * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("protocol"), em_Val_from(value));
}


URLPatternComponentResult URLPatternResult_username(const URLPatternResult *self) {
    return em_Val_as(URLPatternComponentResult, em_Val_get(em_Val_as_val(self->inner), em_Val_from("username")));
}


void URLPatternResult_set_username(URLPatternResult* self, URLPatternComponentResult * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("username"), em_Val_from(value));
}


URLPatternComponentResult URLPatternResult_password(const URLPatternResult *self) {
    return em_Val_as(URLPatternComponentResult, em_Val_get(em_Val_as_val(self->inner), em_Val_from("password")));
}


void URLPatternResult_set_password(URLPatternResult* self, URLPatternComponentResult * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("password"), em_Val_from(value));
}


URLPatternComponentResult URLPatternResult_hostname(const URLPatternResult *self) {
    return em_Val_as(URLPatternComponentResult, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hostname")));
}


void URLPatternResult_set_hostname(URLPatternResult* self, URLPatternComponentResult * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("hostname"), em_Val_from(value));
}


URLPatternComponentResult URLPatternResult_port(const URLPatternResult *self) {
    return em_Val_as(URLPatternComponentResult, em_Val_get(em_Val_as_val(self->inner), em_Val_from("port")));
}


void URLPatternResult_set_port(URLPatternResult* self, URLPatternComponentResult * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("port"), em_Val_from(value));
}


URLPatternComponentResult URLPatternResult_pathname(const URLPatternResult *self) {
    return em_Val_as(URLPatternComponentResult, em_Val_get(em_Val_as_val(self->inner), em_Val_from("pathname")));
}


void URLPatternResult_set_pathname(URLPatternResult* self, URLPatternComponentResult * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("pathname"), em_Val_from(value));
}


URLPatternComponentResult URLPatternResult_search(const URLPatternResult *self) {
    return em_Val_as(URLPatternComponentResult, em_Val_get(em_Val_as_val(self->inner), em_Val_from("search")));
}


void URLPatternResult_set_search(URLPatternResult* self, URLPatternComponentResult * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("search"), em_Val_from(value));
}


URLPatternComponentResult URLPatternResult_hash(const URLPatternResult *self) {
    return em_Val_as(URLPatternComponentResult, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hash")));
}


void URLPatternResult_set_hash(URLPatternResult* self, URLPatternComponentResult * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("hash"), em_Val_from(value));
}


URLPatternResult URLPatternResult_new() {
    em_Val obj = em_Val_object();
    return URLPatternResult_from_val(&obj);
}

