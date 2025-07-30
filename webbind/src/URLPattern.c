#include <webbind/URLPattern.h>


DEFINE_EMLITE_TYPE(URLPatternResult, em_Val);


jb_Array URLPatternResult_inputs(const URLPatternResult *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("inputs")));
}


void URLPatternResult_set_inputs(URLPatternResult* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("inputs"), em_Val_from(value));
}


jb_Any URLPatternResult_protocol(const URLPatternResult *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("protocol")));
}


void URLPatternResult_set_protocol(URLPatternResult* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("protocol"), em_Val_from(value));
}


jb_Any URLPatternResult_username(const URLPatternResult *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("username")));
}


void URLPatternResult_set_username(URLPatternResult* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("username"), em_Val_from(value));
}


jb_Any URLPatternResult_password(const URLPatternResult *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("password")));
}


void URLPatternResult_set_password(URLPatternResult* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("password"), em_Val_from(value));
}


jb_Any URLPatternResult_hostname(const URLPatternResult *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hostname")));
}


void URLPatternResult_set_hostname(URLPatternResult* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("hostname"), em_Val_from(value));
}


jb_Any URLPatternResult_port(const URLPatternResult *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("port")));
}


void URLPatternResult_set_port(URLPatternResult* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("port"), em_Val_from(value));
}


jb_Any URLPatternResult_pathname(const URLPatternResult *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("pathname")));
}


void URLPatternResult_set_pathname(URLPatternResult* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("pathname"), em_Val_from(value));
}


jb_Any URLPatternResult_search(const URLPatternResult *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("search")));
}


void URLPatternResult_set_search(URLPatternResult* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("search"), em_Val_from(value));
}


jb_Any URLPatternResult_hash(const URLPatternResult *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hash")));
}


void URLPatternResult_set_hash(URLPatternResult* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("hash"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(URLPattern, em_Val);


URLPattern URLPattern_new0() {
        em_Val vv = em_Val_new(em_Val_global("URLPattern") );
        return URLPattern_from_val(&vv);
      }


URLPattern URLPattern_new1(jb_Any * input) {
        em_Val vv = em_Val_new(em_Val_global("URLPattern") , em_Val_from(input));
        return URLPattern_from_val(&vv);
      }


URLPattern URLPattern_new2(jb_Any * input, jb_Any * options) {
        em_Val vv = em_Val_new(em_Val_global("URLPattern") , em_Val_from(input), em_Val_from(options));
        return URLPattern_from_val(&vv);
      }


bool URLPattern_test0(URLPattern* self ) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "test"));
}


bool URLPattern_test1(URLPattern* self , jb_Any * input) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "test", em_Val_from(input)));
}


bool URLPattern_test2(URLPattern* self , jb_Any * input, jb_String * baseURL) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "test", em_Val_from(input), em_Val_from(baseURL)));
}


URLPatternResult URLPattern_exec0(URLPattern* self ) {
    return em_Val_as(URLPatternResult, em_Val_call(em_Val_as_val(self->inner), "exec"));
}


URLPatternResult URLPattern_exec1(URLPattern* self , jb_Any * input) {
    return em_Val_as(URLPatternResult, em_Val_call(em_Val_as_val(self->inner), "exec", em_Val_from(input)));
}


URLPatternResult URLPattern_exec2(URLPattern* self , jb_Any * input, jb_String * baseURL) {
    return em_Val_as(URLPatternResult, em_Val_call(em_Val_as_val(self->inner), "exec", em_Val_from(input), em_Val_from(baseURL)));
}


jb_String URLPattern_protocol(const URLPattern *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("protocol")));
}


jb_String URLPattern_username(const URLPattern *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("username")));
}


jb_String URLPattern_password(const URLPattern *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("password")));
}


jb_String URLPattern_hostname(const URLPattern *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hostname")));
}


jb_String URLPattern_port(const URLPattern *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("port")));
}


jb_String URLPattern_pathname(const URLPattern *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("pathname")));
}


jb_String URLPattern_search(const URLPattern *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("search")));
}


jb_String URLPattern_hash(const URLPattern *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hash")));
}


bool URLPattern_hasRegExpGroups(const URLPattern *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hasRegExpGroups")));
}

