#include <webbind/URLPattern.h>


DEFINE_EMLITE_TYPE(URLPatternResult, em_Val);


jb_Sequence URLPatternResult_inputs(const URLPatternResult *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "inputs"));
}


void URLPatternResult_set_inputs(URLPatternResult* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "inputs", value);
}


jb_Any URLPatternResult_protocol(const URLPatternResult *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "protocol"));
}


void URLPatternResult_set_protocol(URLPatternResult* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "protocol", value);
}


jb_Any URLPatternResult_username(const URLPatternResult *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "username"));
}


void URLPatternResult_set_username(URLPatternResult* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "username", value);
}


jb_Any URLPatternResult_password(const URLPatternResult *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "password"));
}


void URLPatternResult_set_password(URLPatternResult* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "password", value);
}


jb_Any URLPatternResult_hostname(const URLPatternResult *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "hostname"));
}


void URLPatternResult_set_hostname(URLPatternResult* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "hostname", value);
}


jb_Any URLPatternResult_port(const URLPatternResult *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "port"));
}


void URLPatternResult_set_port(URLPatternResult* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "port", value);
}


jb_Any URLPatternResult_pathname(const URLPatternResult *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "pathname"));
}


void URLPatternResult_set_pathname(URLPatternResult* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "pathname", value);
}


jb_Any URLPatternResult_search(const URLPatternResult *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "search"));
}


void URLPatternResult_set_search(URLPatternResult* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "search", value);
}


jb_Any URLPatternResult_hash(const URLPatternResult *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "hash"));
}


void URLPatternResult_set_hash(URLPatternResult* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "hash", value);
}

DEFINE_EMLITE_TYPE(URLPattern, em_Val);


URLPattern URLPattern_new() : em_Val(em_Val_global("URLPattern").new_()) {
        return URLPattern(em_Val_new(em_Val_global("URLPattern", ));
      }


URLPattern URLPattern_new(const jb_Any* input) : em_Val(em_Val_global("URLPattern").new_(em_Val_from(input))) {
        return URLPattern(em_Val_new(em_Val_global("URLPattern", em_Val_from(input)));
      }


URLPattern URLPattern_new(const jb_Any* input, const jb_Any* options) : em_Val(em_Val_global("URLPattern").new_(em_Val_from(input), em_Val_from(options))) {
        return URLPattern(em_Val_new(em_Val_global("URLPattern", em_Val_from(input), em_Val_from(options)));
      }


bool URLPattern_test(URLPattern* self ) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "test"));
}


bool URLPattern_test(URLPattern* self , const jb_Any* input) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "test", em_Val_from(input)));
}


bool URLPattern_test(URLPattern* self , const jb_Any* input, const jb_USVString* baseURL) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "test", em_Val_from(input), em_Val_from(baseURL)));
}


URLPatternResult URLPattern_exec(URLPattern* self ) {
    return em_Val_as(URLPatternResult, em_Val_call(em_Val_as_val(self->inner), "exec"));
}


URLPatternResult URLPattern_exec(URLPattern* self , const jb_Any* input) {
    return em_Val_as(URLPatternResult, em_Val_call(em_Val_as_val(self->inner), "exec", em_Val_from(input)));
}


URLPatternResult URLPattern_exec(URLPattern* self , const jb_Any* input, const jb_USVString* baseURL) {
    return em_Val_as(URLPatternResult, em_Val_call(em_Val_as_val(self->inner), "exec", em_Val_from(input), em_Val_from(baseURL)));
}


jb_USVString URLPattern_protocol(const URLPattern *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "protocol"));
}


jb_USVString URLPattern_username(const URLPattern *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "username"));
}


jb_USVString URLPattern_password(const URLPattern *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "password"));
}


jb_USVString URLPattern_hostname(const URLPattern *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "hostname"));
}


jb_USVString URLPattern_port(const URLPattern *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "port"));
}


jb_USVString URLPattern_pathname(const URLPattern *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "pathname"));
}


jb_USVString URLPattern_search(const URLPattern *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "search"));
}


jb_USVString URLPattern_hash(const URLPattern *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "hash"));
}


bool URLPattern_hasRegExpGroups(const URLPattern *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "hasRegExpGroups"));
}

