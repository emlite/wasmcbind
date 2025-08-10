#include <webbind/URLPattern.h>

#include <webbind/URLPatternOptions.h>
#include <webbind/URLPatternResult.h>

DEFINE_EMLITE_TYPE(URLPattern, em_Val);


URLPattern URLPattern_new0() {
        em_Val vv = em_Val_new(em_Val_global("URLPattern") );
        return URLPattern_from_val(&vv);
      }


URLPattern URLPattern_new1(jb_Any * input) {
        em_Val vv = em_Val_new(em_Val_global("URLPattern") , em_Val_from(input));
        return URLPattern_from_val(&vv);
      }


URLPattern URLPattern_new2(jb_Any * input, URLPatternOptions * options) {
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

