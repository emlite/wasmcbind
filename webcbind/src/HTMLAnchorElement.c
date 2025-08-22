#include <webcbind/HTMLAnchorElement.h>

#include <webcbind/DOMTokenList.h>

DEFINE_EMLITE_TYPE(HTMLAnchorElement, HTMLElement);


HTMLAnchorElement HTMLAnchorElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLAnchorElement") );
        return HTMLAnchorElement_from_val(&vv);
      }


jb_String HTMLAnchorElement_target(const HTMLAnchorElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("target")));
}


void HTMLAnchorElement_set_target(HTMLAnchorElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("target"), em_Val_from(value));
}


jb_String HTMLAnchorElement_download(const HTMLAnchorElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("download")));
}


void HTMLAnchorElement_set_download(HTMLAnchorElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("download"), em_Val_from(value));
}


jb_String HTMLAnchorElement_ping(const HTMLAnchorElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("ping")));
}


void HTMLAnchorElement_set_ping(HTMLAnchorElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("ping"), em_Val_from(value));
}


jb_String HTMLAnchorElement_rel(const HTMLAnchorElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("rel")));
}


void HTMLAnchorElement_set_rel(HTMLAnchorElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("rel"), em_Val_from(value));
}


DOMTokenList HTMLAnchorElement_relList(const HTMLAnchorElement *self) {
    return em_Val_as(DOMTokenList, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("relList")));
}


jb_String HTMLAnchorElement_hreflang(const HTMLAnchorElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("hreflang")));
}


void HTMLAnchorElement_set_hreflang(HTMLAnchorElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("hreflang"), em_Val_from(value));
}


jb_String HTMLAnchorElement_type(const HTMLAnchorElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("type")));
}


void HTMLAnchorElement_set_type(HTMLAnchorElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


jb_String HTMLAnchorElement_text(const HTMLAnchorElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("text")));
}


void HTMLAnchorElement_set_text(HTMLAnchorElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("text"), em_Val_from(value));
}


jb_String HTMLAnchorElement_referrerPolicy(const HTMLAnchorElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("referrerPolicy")));
}


void HTMLAnchorElement_set_referrerPolicy(HTMLAnchorElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("referrerPolicy"), em_Val_from(value));
}


jb_String HTMLAnchorElement_coords(const HTMLAnchorElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("coords")));
}


void HTMLAnchorElement_set_coords(HTMLAnchorElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("coords"), em_Val_from(value));
}


jb_String HTMLAnchorElement_charset(const HTMLAnchorElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("charset")));
}


void HTMLAnchorElement_set_charset(HTMLAnchorElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("charset"), em_Val_from(value));
}


jb_String HTMLAnchorElement_name(const HTMLAnchorElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("name")));
}


void HTMLAnchorElement_set_name(HTMLAnchorElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


jb_String HTMLAnchorElement_rev(const HTMLAnchorElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("rev")));
}


void HTMLAnchorElement_set_rev(HTMLAnchorElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("rev"), em_Val_from(value));
}


jb_String HTMLAnchorElement_shape(const HTMLAnchorElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("shape")));
}


void HTMLAnchorElement_set_shape(HTMLAnchorElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("shape"), em_Val_from(value));
}


unsigned long HTMLAnchorElement_attributionSourceId(const HTMLAnchorElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("attributionSourceId")));
}


void HTMLAnchorElement_set_attributionSourceId(HTMLAnchorElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("attributionSourceId"), em_Val_from(value));
}


jb_String HTMLAnchorElement_attributionSrc(const HTMLAnchorElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("attributionSrc")));
}


void HTMLAnchorElement_set_attributionSrc(HTMLAnchorElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("attributionSrc"), em_Val_from(value));
}


jb_String HTMLAnchorElement_href(const HTMLAnchorElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("href")));
}


void HTMLAnchorElement_set_href(HTMLAnchorElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("href"), em_Val_from(value));
}


jb_String HTMLAnchorElement_origin(const HTMLAnchorElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("origin")));
}


jb_String HTMLAnchorElement_protocol(const HTMLAnchorElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("protocol")));
}


void HTMLAnchorElement_set_protocol(HTMLAnchorElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("protocol"), em_Val_from(value));
}


jb_String HTMLAnchorElement_username(const HTMLAnchorElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("username")));
}


void HTMLAnchorElement_set_username(HTMLAnchorElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("username"), em_Val_from(value));
}


jb_String HTMLAnchorElement_password(const HTMLAnchorElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("password")));
}


void HTMLAnchorElement_set_password(HTMLAnchorElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("password"), em_Val_from(value));
}


jb_String HTMLAnchorElement_host(const HTMLAnchorElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("host")));
}


void HTMLAnchorElement_set_host(HTMLAnchorElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("host"), em_Val_from(value));
}


jb_String HTMLAnchorElement_hostname(const HTMLAnchorElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("hostname")));
}


void HTMLAnchorElement_set_hostname(HTMLAnchorElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("hostname"), em_Val_from(value));
}


jb_String HTMLAnchorElement_port(const HTMLAnchorElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("port")));
}


void HTMLAnchorElement_set_port(HTMLAnchorElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("port"), em_Val_from(value));
}


jb_String HTMLAnchorElement_pathname(const HTMLAnchorElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("pathname")));
}


void HTMLAnchorElement_set_pathname(HTMLAnchorElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("pathname"), em_Val_from(value));
}


jb_String HTMLAnchorElement_search(const HTMLAnchorElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("search")));
}


void HTMLAnchorElement_set_search(HTMLAnchorElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("search"), em_Val_from(value));
}


jb_String HTMLAnchorElement_hash(const HTMLAnchorElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("hash")));
}


void HTMLAnchorElement_set_hash(HTMLAnchorElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("hash"), em_Val_from(value));
}

