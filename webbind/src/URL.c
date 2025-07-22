#include <webbind/URL.h>
#include <webbind/URLSearchParams.h>


DEFINE_EMLITE_TYPE(URL, em_Val);


URL URL_new0(jb_USVString * url) {
        em_Val vv = em_Val_new(em_Val_global("URL") , em_Val_from(url));
        return URL_from_val(&vv);
      }


URL URL_new1(jb_USVString * url, jb_USVString * base) {
        em_Val vv = em_Val_new(em_Val_global("URL") , em_Val_from(url), em_Val_from(base));
        return URL_from_val(&vv);
      }


URL URL_parse0(URL* self , jb_USVString * url) {
    return em_Val_as(URL, em_Val_call(em_Val_global("url"), "parse", em_Val_from(url)));
}


URL URL_parse1(URL* self , jb_USVString * url, jb_USVString * base) {
    return em_Val_as(URL, em_Val_call(em_Val_global("url"), "parse", em_Val_from(url), em_Val_from(base)));
}


bool URL_canParse0(URL* self , jb_USVString * url) {
    return em_Val_as(bool, em_Val_call(em_Val_global("url"), "canParse", em_Val_from(url)));
}


bool URL_canParse1(URL* self , jb_USVString * url, jb_USVString * base) {
    return em_Val_as(bool, em_Val_call(em_Val_global("url"), "canParse", em_Val_from(url), em_Val_from(base)));
}


jb_USVString URL_href(const URL *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("href")));
}


void URL_set_href(URL* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("href"), em_Val_from(value));
}


jb_USVString URL_origin(const URL *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("origin")));
}


jb_USVString URL_protocol(const URL *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("protocol")));
}


void URL_set_protocol(URL* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("protocol"), em_Val_from(value));
}


jb_USVString URL_username(const URL *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("username")));
}


void URL_set_username(URL* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("username"), em_Val_from(value));
}


jb_USVString URL_password(const URL *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("password")));
}


void URL_set_password(URL* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("password"), em_Val_from(value));
}


jb_USVString URL_host(const URL *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("host")));
}


void URL_set_host(URL* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("host"), em_Val_from(value));
}


jb_USVString URL_hostname(const URL *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hostname")));
}


void URL_set_hostname(URL* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("hostname"), em_Val_from(value));
}


jb_USVString URL_port(const URL *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("port")));
}


void URL_set_port(URL* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("port"), em_Val_from(value));
}


jb_USVString URL_pathname(const URL *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("pathname")));
}


void URL_set_pathname(URL* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("pathname"), em_Val_from(value));
}


jb_USVString URL_search(const URL *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("search")));
}


void URL_set_search(URL* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("search"), em_Val_from(value));
}


URLSearchParams URL_searchParams(const URL *self) {
    return em_Val_as(URLSearchParams, em_Val_get(em_Val_as_val(self->inner), em_Val_from("searchParams")));
}


jb_USVString URL_hash(const URL *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hash")));
}


void URL_set_hash(URL* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("hash"), em_Val_from(value));
}


jb_USVString URL_toJSON(URL* self ) {
    return em_Val_as(jb_USVString, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}


jb_DOMString URL_createObjectURL(URL* self , jb_Any * obj) {
    return em_Val_as(jb_DOMString, em_Val_call(em_Val_global("url"), "createObjectURL", em_Val_from(obj)));
}


jb_Undefined URL_revokeObjectURL(URL* self , jb_DOMString * url) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("url"), "revokeObjectURL", em_Val_from(url)));
}

