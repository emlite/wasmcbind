#include <webbind/HTMLAreaElement.h>
#include <webbind/DOMTokenList.h>


DEFINE_EMLITE_TYPE(HTMLAreaElement, HTMLElement);


HTMLAreaElement HTMLAreaElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLAreaElement") );
        return HTMLAreaElement_from_val(&vv);
      }


jb_DOMString HTMLAreaElement_alt(const HTMLAreaElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("alt")));
}


void HTMLAreaElement_set_alt(HTMLAreaElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("alt"), em_Val_from(value));
}


jb_DOMString HTMLAreaElement_coords(const HTMLAreaElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("coords")));
}


void HTMLAreaElement_set_coords(HTMLAreaElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("coords"), em_Val_from(value));
}


jb_DOMString HTMLAreaElement_shape(const HTMLAreaElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("shape")));
}


void HTMLAreaElement_set_shape(HTMLAreaElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("shape"), em_Val_from(value));
}


jb_DOMString HTMLAreaElement_target(const HTMLAreaElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("target")));
}


void HTMLAreaElement_set_target(HTMLAreaElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("target"), em_Val_from(value));
}


jb_DOMString HTMLAreaElement_download(const HTMLAreaElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("download")));
}


void HTMLAreaElement_set_download(HTMLAreaElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("download"), em_Val_from(value));
}


jb_USVString HTMLAreaElement_ping(const HTMLAreaElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("ping")));
}


void HTMLAreaElement_set_ping(HTMLAreaElement* self, jb_USVString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("ping"), em_Val_from(value));
}


jb_DOMString HTMLAreaElement_rel(const HTMLAreaElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("rel")));
}


void HTMLAreaElement_set_rel(HTMLAreaElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("rel"), em_Val_from(value));
}


DOMTokenList HTMLAreaElement_relList(const HTMLAreaElement *self) {
    return em_Val_as(DOMTokenList, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("relList")));
}


jb_DOMString HTMLAreaElement_referrerPolicy(const HTMLAreaElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("referrerPolicy")));
}


void HTMLAreaElement_set_referrerPolicy(HTMLAreaElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("referrerPolicy"), em_Val_from(value));
}


bool HTMLAreaElement_noHref(const HTMLAreaElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("noHref")));
}


void HTMLAreaElement_set_noHref(HTMLAreaElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("noHref"), em_Val_from(value));
}


jb_USVString HTMLAreaElement_attributionSrc(const HTMLAreaElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("attributionSrc")));
}


void HTMLAreaElement_set_attributionSrc(HTMLAreaElement* self, jb_USVString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("attributionSrc"), em_Val_from(value));
}


jb_USVString HTMLAreaElement_href(const HTMLAreaElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("href")));
}


void HTMLAreaElement_set_href(HTMLAreaElement* self, jb_USVString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("href"), em_Val_from(value));
}


jb_USVString HTMLAreaElement_origin(const HTMLAreaElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("origin")));
}


jb_USVString HTMLAreaElement_protocol(const HTMLAreaElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("protocol")));
}


void HTMLAreaElement_set_protocol(HTMLAreaElement* self, jb_USVString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("protocol"), em_Val_from(value));
}


jb_USVString HTMLAreaElement_username(const HTMLAreaElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("username")));
}


void HTMLAreaElement_set_username(HTMLAreaElement* self, jb_USVString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("username"), em_Val_from(value));
}


jb_USVString HTMLAreaElement_password(const HTMLAreaElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("password")));
}


void HTMLAreaElement_set_password(HTMLAreaElement* self, jb_USVString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("password"), em_Val_from(value));
}


jb_USVString HTMLAreaElement_host(const HTMLAreaElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("host")));
}


void HTMLAreaElement_set_host(HTMLAreaElement* self, jb_USVString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("host"), em_Val_from(value));
}


jb_USVString HTMLAreaElement_hostname(const HTMLAreaElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("hostname")));
}


void HTMLAreaElement_set_hostname(HTMLAreaElement* self, jb_USVString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("hostname"), em_Val_from(value));
}


jb_USVString HTMLAreaElement_port(const HTMLAreaElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("port")));
}


void HTMLAreaElement_set_port(HTMLAreaElement* self, jb_USVString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("port"), em_Val_from(value));
}


jb_USVString HTMLAreaElement_pathname(const HTMLAreaElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("pathname")));
}


void HTMLAreaElement_set_pathname(HTMLAreaElement* self, jb_USVString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("pathname"), em_Val_from(value));
}


jb_USVString HTMLAreaElement_search(const HTMLAreaElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("search")));
}


void HTMLAreaElement_set_search(HTMLAreaElement* self, jb_USVString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("search"), em_Val_from(value));
}


jb_USVString HTMLAreaElement_hash(const HTMLAreaElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("hash")));
}


void HTMLAreaElement_set_hash(HTMLAreaElement* self, jb_USVString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("hash"), em_Val_from(value));
}

