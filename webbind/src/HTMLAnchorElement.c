#include <webbind/HTMLAnchorElement.h>
#include <webbind/DOMTokenList.h>


DEFINE_EMLITE_TYPE(HTMLAnchorElement, HTMLElement);


HTMLAnchorElement HTMLAnchorElement_new() : HTMLElement(em_Val_global("HTMLAnchorElement").new_()) {
        return HTMLAnchorElement(em_Val_new(em_Val_global("HTMLAnchorElement", ));
      }


jb_DOMString HTMLAnchorElement_target(const HTMLAnchorElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "target"));
}


void HTMLAnchorElement_set_target(HTMLAnchorElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "target", value);
}


jb_DOMString HTMLAnchorElement_download(const HTMLAnchorElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "download"));
}


void HTMLAnchorElement_set_download(HTMLAnchorElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "download", value);
}


jb_USVString HTMLAnchorElement_ping(const HTMLAnchorElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "ping"));
}


void HTMLAnchorElement_set_ping(HTMLAnchorElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "ping", value);
}


jb_DOMString HTMLAnchorElement_rel(const HTMLAnchorElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "rel"));
}


void HTMLAnchorElement_set_rel(HTMLAnchorElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "rel", value);
}


DOMTokenList HTMLAnchorElement_relList(const HTMLAnchorElement *self) {
    return em_Val_as(DOMTokenList, em_Val_get(HTMLElement_as_val(self->inner), "relList"));
}


jb_DOMString HTMLAnchorElement_hreflang(const HTMLAnchorElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "hreflang"));
}


void HTMLAnchorElement_set_hreflang(HTMLAnchorElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "hreflang", value);
}


jb_DOMString HTMLAnchorElement_type(const HTMLAnchorElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "type"));
}


void HTMLAnchorElement_set_type(HTMLAnchorElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "type", value);
}


jb_DOMString HTMLAnchorElement_text(const HTMLAnchorElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "text"));
}


void HTMLAnchorElement_set_text(HTMLAnchorElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "text", value);
}


jb_DOMString HTMLAnchorElement_referrerPolicy(const HTMLAnchorElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "referrerPolicy"));
}


void HTMLAnchorElement_set_referrerPolicy(HTMLAnchorElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "referrerPolicy", value);
}


jb_DOMString HTMLAnchorElement_coords(const HTMLAnchorElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "coords"));
}


void HTMLAnchorElement_set_coords(HTMLAnchorElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "coords", value);
}


jb_DOMString HTMLAnchorElement_charset(const HTMLAnchorElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "charset"));
}


void HTMLAnchorElement_set_charset(HTMLAnchorElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "charset", value);
}


jb_DOMString HTMLAnchorElement_name(const HTMLAnchorElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "name"));
}


void HTMLAnchorElement_set_name(HTMLAnchorElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "name", value);
}


jb_DOMString HTMLAnchorElement_rev(const HTMLAnchorElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "rev"));
}


void HTMLAnchorElement_set_rev(HTMLAnchorElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "rev", value);
}


jb_DOMString HTMLAnchorElement_shape(const HTMLAnchorElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "shape"));
}


void HTMLAnchorElement_set_shape(HTMLAnchorElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "shape", value);
}


unsigned long HTMLAnchorElement_attributionSourceId(const HTMLAnchorElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), "attributionSourceId"));
}


void HTMLAnchorElement_set_attributionSourceId(HTMLAnchorElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), "attributionSourceId", value);
}


jb_USVString HTMLAnchorElement_attributionSrc(const HTMLAnchorElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "attributionSrc"));
}


void HTMLAnchorElement_set_attributionSrc(HTMLAnchorElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "attributionSrc", value);
}


jb_USVString HTMLAnchorElement_href(const HTMLAnchorElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "href"));
}


void HTMLAnchorElement_set_href(HTMLAnchorElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "href", value);
}


jb_USVString HTMLAnchorElement_origin(const HTMLAnchorElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "origin"));
}


jb_USVString HTMLAnchorElement_protocol(const HTMLAnchorElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "protocol"));
}


void HTMLAnchorElement_set_protocol(HTMLAnchorElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "protocol", value);
}


jb_USVString HTMLAnchorElement_username(const HTMLAnchorElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "username"));
}


void HTMLAnchorElement_set_username(HTMLAnchorElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "username", value);
}


jb_USVString HTMLAnchorElement_password(const HTMLAnchorElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "password"));
}


void HTMLAnchorElement_set_password(HTMLAnchorElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "password", value);
}


jb_USVString HTMLAnchorElement_host(const HTMLAnchorElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "host"));
}


void HTMLAnchorElement_set_host(HTMLAnchorElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "host", value);
}


jb_USVString HTMLAnchorElement_hostname(const HTMLAnchorElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "hostname"));
}


void HTMLAnchorElement_set_hostname(HTMLAnchorElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "hostname", value);
}


jb_USVString HTMLAnchorElement_port(const HTMLAnchorElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "port"));
}


void HTMLAnchorElement_set_port(HTMLAnchorElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "port", value);
}


jb_USVString HTMLAnchorElement_pathname(const HTMLAnchorElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "pathname"));
}


void HTMLAnchorElement_set_pathname(HTMLAnchorElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "pathname", value);
}


jb_USVString HTMLAnchorElement_search(const HTMLAnchorElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "search"));
}


void HTMLAnchorElement_set_search(HTMLAnchorElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "search", value);
}


jb_USVString HTMLAnchorElement_hash(const HTMLAnchorElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "hash"));
}


void HTMLAnchorElement_set_hash(HTMLAnchorElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "hash", value);
}

