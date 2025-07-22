#include <webbind/SVGAElement.h>
#include <webbind/SVGAnimatedString.h>
#include <webbind/DOMTokenList.h>


DEFINE_EMLITE_TYPE(SVGAElement, SVGGraphicsElement);


SVGAnimatedString SVGAElement_target(const SVGAElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGGraphicsElement_as_val(self->inner), "target"));
}


jb_DOMString SVGAElement_download(const SVGAElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(SVGGraphicsElement_as_val(self->inner), "download"));
}


void SVGAElement_set_download(SVGAElement* self, const jb_DOMString* value) {
    em_Val_set(SVGGraphicsElement_as_val(self->inner), "download", value);
}


jb_USVString SVGAElement_ping(const SVGAElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(SVGGraphicsElement_as_val(self->inner), "ping"));
}


void SVGAElement_set_ping(SVGAElement* self, const jb_USVString* value) {
    em_Val_set(SVGGraphicsElement_as_val(self->inner), "ping", value);
}


jb_DOMString SVGAElement_rel(const SVGAElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(SVGGraphicsElement_as_val(self->inner), "rel"));
}


void SVGAElement_set_rel(SVGAElement* self, const jb_DOMString* value) {
    em_Val_set(SVGGraphicsElement_as_val(self->inner), "rel", value);
}


DOMTokenList SVGAElement_relList(const SVGAElement *self) {
    return em_Val_as(DOMTokenList, em_Val_get(SVGGraphicsElement_as_val(self->inner), "relList"));
}


jb_DOMString SVGAElement_hreflang(const SVGAElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(SVGGraphicsElement_as_val(self->inner), "hreflang"));
}


void SVGAElement_set_hreflang(SVGAElement* self, const jb_DOMString* value) {
    em_Val_set(SVGGraphicsElement_as_val(self->inner), "hreflang", value);
}


jb_DOMString SVGAElement_type(const SVGAElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(SVGGraphicsElement_as_val(self->inner), "type"));
}


void SVGAElement_set_type(SVGAElement* self, const jb_DOMString* value) {
    em_Val_set(SVGGraphicsElement_as_val(self->inner), "type", value);
}


jb_DOMString SVGAElement_text(const SVGAElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(SVGGraphicsElement_as_val(self->inner), "text"));
}


void SVGAElement_set_text(SVGAElement* self, const jb_DOMString* value) {
    em_Val_set(SVGGraphicsElement_as_val(self->inner), "text", value);
}


jb_DOMString SVGAElement_referrerPolicy(const SVGAElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(SVGGraphicsElement_as_val(self->inner), "referrerPolicy"));
}


void SVGAElement_set_referrerPolicy(SVGAElement* self, const jb_DOMString* value) {
    em_Val_set(SVGGraphicsElement_as_val(self->inner), "referrerPolicy", value);
}


jb_USVString SVGAElement_origin(const SVGAElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(SVGGraphicsElement_as_val(self->inner), "origin"));
}


jb_USVString SVGAElement_protocol(const SVGAElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(SVGGraphicsElement_as_val(self->inner), "protocol"));
}


void SVGAElement_set_protocol(SVGAElement* self, const jb_USVString* value) {
    em_Val_set(SVGGraphicsElement_as_val(self->inner), "protocol", value);
}


jb_USVString SVGAElement_username(const SVGAElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(SVGGraphicsElement_as_val(self->inner), "username"));
}


void SVGAElement_set_username(SVGAElement* self, const jb_USVString* value) {
    em_Val_set(SVGGraphicsElement_as_val(self->inner), "username", value);
}


jb_USVString SVGAElement_password(const SVGAElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(SVGGraphicsElement_as_val(self->inner), "password"));
}


void SVGAElement_set_password(SVGAElement* self, const jb_USVString* value) {
    em_Val_set(SVGGraphicsElement_as_val(self->inner), "password", value);
}


jb_USVString SVGAElement_host(const SVGAElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(SVGGraphicsElement_as_val(self->inner), "host"));
}


void SVGAElement_set_host(SVGAElement* self, const jb_USVString* value) {
    em_Val_set(SVGGraphicsElement_as_val(self->inner), "host", value);
}


jb_USVString SVGAElement_hostname(const SVGAElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(SVGGraphicsElement_as_val(self->inner), "hostname"));
}


void SVGAElement_set_hostname(SVGAElement* self, const jb_USVString* value) {
    em_Val_set(SVGGraphicsElement_as_val(self->inner), "hostname", value);
}


jb_USVString SVGAElement_port(const SVGAElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(SVGGraphicsElement_as_val(self->inner), "port"));
}


void SVGAElement_set_port(SVGAElement* self, const jb_USVString* value) {
    em_Val_set(SVGGraphicsElement_as_val(self->inner), "port", value);
}


jb_USVString SVGAElement_pathname(const SVGAElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(SVGGraphicsElement_as_val(self->inner), "pathname"));
}


void SVGAElement_set_pathname(SVGAElement* self, const jb_USVString* value) {
    em_Val_set(SVGGraphicsElement_as_val(self->inner), "pathname", value);
}


jb_USVString SVGAElement_search(const SVGAElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(SVGGraphicsElement_as_val(self->inner), "search"));
}


void SVGAElement_set_search(SVGAElement* self, const jb_USVString* value) {
    em_Val_set(SVGGraphicsElement_as_val(self->inner), "search", value);
}


jb_USVString SVGAElement_hash(const SVGAElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(SVGGraphicsElement_as_val(self->inner), "hash"));
}


void SVGAElement_set_hash(SVGAElement* self, const jb_USVString* value) {
    em_Val_set(SVGGraphicsElement_as_val(self->inner), "hash", value);
}


SVGAnimatedString SVGAElement_href(const SVGAElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGGraphicsElement_as_val(self->inner), "href"));
}

