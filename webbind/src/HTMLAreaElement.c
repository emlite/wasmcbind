#include <webbind/HTMLAreaElement.h>
#include <webbind/DOMTokenList.h>


DEFINE_EMLITE_TYPE(HTMLAreaElement, HTMLElement);


HTMLAreaElement HTMLAreaElement_new() : HTMLElement(em_Val_global("HTMLAreaElement").new_()) {
        return HTMLAreaElement(em_Val_new(em_Val_global("HTMLAreaElement", ));
      }


jb_DOMString HTMLAreaElement_alt(const HTMLAreaElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "alt"));
}


void HTMLAreaElement_set_alt(HTMLAreaElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "alt", value);
}


jb_DOMString HTMLAreaElement_coords(const HTMLAreaElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "coords"));
}


void HTMLAreaElement_set_coords(HTMLAreaElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "coords", value);
}


jb_DOMString HTMLAreaElement_shape(const HTMLAreaElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "shape"));
}


void HTMLAreaElement_set_shape(HTMLAreaElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "shape", value);
}


jb_DOMString HTMLAreaElement_target(const HTMLAreaElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "target"));
}


void HTMLAreaElement_set_target(HTMLAreaElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "target", value);
}


jb_DOMString HTMLAreaElement_download(const HTMLAreaElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "download"));
}


void HTMLAreaElement_set_download(HTMLAreaElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "download", value);
}


jb_USVString HTMLAreaElement_ping(const HTMLAreaElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "ping"));
}


void HTMLAreaElement_set_ping(HTMLAreaElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "ping", value);
}


jb_DOMString HTMLAreaElement_rel(const HTMLAreaElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "rel"));
}


void HTMLAreaElement_set_rel(HTMLAreaElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "rel", value);
}


DOMTokenList HTMLAreaElement_relList(const HTMLAreaElement *self) {
    return em_Val_as(DOMTokenList, em_Val_get(HTMLElement_as_val(self->inner), "relList"));
}


jb_DOMString HTMLAreaElement_referrerPolicy(const HTMLAreaElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "referrerPolicy"));
}


void HTMLAreaElement_set_referrerPolicy(HTMLAreaElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "referrerPolicy", value);
}


bool HTMLAreaElement_noHref(const HTMLAreaElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "noHref"));
}


void HTMLAreaElement_set_noHref(HTMLAreaElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "noHref", value);
}


jb_USVString HTMLAreaElement_attributionSrc(const HTMLAreaElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "attributionSrc"));
}


void HTMLAreaElement_set_attributionSrc(HTMLAreaElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "attributionSrc", value);
}


jb_USVString HTMLAreaElement_href(const HTMLAreaElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "href"));
}


void HTMLAreaElement_set_href(HTMLAreaElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "href", value);
}


jb_USVString HTMLAreaElement_origin(const HTMLAreaElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "origin"));
}


jb_USVString HTMLAreaElement_protocol(const HTMLAreaElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "protocol"));
}


void HTMLAreaElement_set_protocol(HTMLAreaElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "protocol", value);
}


jb_USVString HTMLAreaElement_username(const HTMLAreaElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "username"));
}


void HTMLAreaElement_set_username(HTMLAreaElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "username", value);
}


jb_USVString HTMLAreaElement_password(const HTMLAreaElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "password"));
}


void HTMLAreaElement_set_password(HTMLAreaElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "password", value);
}


jb_USVString HTMLAreaElement_host(const HTMLAreaElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "host"));
}


void HTMLAreaElement_set_host(HTMLAreaElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "host", value);
}


jb_USVString HTMLAreaElement_hostname(const HTMLAreaElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "hostname"));
}


void HTMLAreaElement_set_hostname(HTMLAreaElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "hostname", value);
}


jb_USVString HTMLAreaElement_port(const HTMLAreaElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "port"));
}


void HTMLAreaElement_set_port(HTMLAreaElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "port", value);
}


jb_USVString HTMLAreaElement_pathname(const HTMLAreaElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "pathname"));
}


void HTMLAreaElement_set_pathname(HTMLAreaElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "pathname", value);
}


jb_USVString HTMLAreaElement_search(const HTMLAreaElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "search"));
}


void HTMLAreaElement_set_search(HTMLAreaElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "search", value);
}


jb_USVString HTMLAreaElement_hash(const HTMLAreaElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "hash"));
}


void HTMLAreaElement_set_hash(HTMLAreaElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "hash", value);
}

