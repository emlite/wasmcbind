#include <webbind/URL.h>
#include <webbind/URLSearchParams.h>


DEFINE_EMLITE_TYPE(URL, em_Val);


URL URL_new(const jb_USVString* url) : em_Val(em_Val_global("URL").new_(em_Val_from(url))) {
        return URL(em_Val_new(em_Val_global("URL", em_Val_from(url)));
      }


URL URL_new(const jb_USVString* url, const jb_USVString* base) : em_Val(em_Val_global("URL").new_(em_Val_from(url), em_Val_from(base))) {
        return URL(em_Val_new(em_Val_global("URL", em_Val_from(url), em_Val_from(base)));
      }


URL URL_parse(URL* self , const jb_USVString* url) {
    return em_Val_as(URL, em_Val_call(em_Val_global("url"), "parse", em_Val_from(url)));
}


URL URL_parse(URL* self , const jb_USVString* url, const jb_USVString* base) {
    return em_Val_as(URL, em_Val_call(em_Val_global("url"), "parse", em_Val_from(url), em_Val_from(base)));
}


bool URL_canParse(URL* self , const jb_USVString* url) {
    return em_Val_as(bool, em_Val_call(em_Val_global("url"), "canParse", em_Val_from(url)));
}


bool URL_canParse(URL* self , const jb_USVString* url, const jb_USVString* base) {
    return em_Val_as(bool, em_Val_call(em_Val_global("url"), "canParse", em_Val_from(url), em_Val_from(base)));
}


jb_USVString URL_href(const URL *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "href"));
}


void URL_set_href(URL* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "href", value);
}


jb_USVString URL_origin(const URL *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "origin"));
}


jb_USVString URL_protocol(const URL *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "protocol"));
}


void URL_set_protocol(URL* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "protocol", value);
}


jb_USVString URL_username(const URL *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "username"));
}


void URL_set_username(URL* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "username", value);
}


jb_USVString URL_password(const URL *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "password"));
}


void URL_set_password(URL* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "password", value);
}


jb_USVString URL_host(const URL *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "host"));
}


void URL_set_host(URL* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "host", value);
}


jb_USVString URL_hostname(const URL *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "hostname"));
}


void URL_set_hostname(URL* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "hostname", value);
}


jb_USVString URL_port(const URL *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "port"));
}


void URL_set_port(URL* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "port", value);
}


jb_USVString URL_pathname(const URL *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "pathname"));
}


void URL_set_pathname(URL* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "pathname", value);
}


jb_USVString URL_search(const URL *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "search"));
}


void URL_set_search(URL* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "search", value);
}


URLSearchParams URL_searchParams(const URL *self) {
    return em_Val_as(URLSearchParams, em_Val_get(em_Val_as_val(self->inner), "searchParams"));
}


jb_USVString URL_hash(const URL *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "hash"));
}


void URL_set_hash(URL* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "hash", value);
}


jb_USVString URL_toJSON(URL* self ) {
    return em_Val_as(jb_USVString, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}


jb_DOMString URL_createObjectURL(URL* self , const jb_Any* obj) {
    return em_Val_as(jb_DOMString, em_Val_call(em_Val_global("url"), "createObjectURL", em_Val_from(obj)));
}


jb_Undefined URL_revokeObjectURL(URL* self , const jb_DOMString* url) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("url"), "revokeObjectURL", em_Val_from(url)));
}

