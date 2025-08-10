#include <webbind/SVGAElement.h>

#include <webbind/SVGAnimatedString.h>
#include <webbind/DOMTokenList.h>

DEFINE_EMLITE_TYPE(SVGAElement, SVGGraphicsElement);


SVGAnimatedString SVGAElement_target(const SVGAElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("target")));
}


jb_String SVGAElement_download(const SVGAElement *self) {
    return em_Val_as(jb_String, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("download")));
}


void SVGAElement_set_download(SVGAElement* self, jb_String * value) {
    em_Val_set(SVGGraphicsElement_as_val(self->inner), em_Val_from("download"), em_Val_from(value));
}


jb_String SVGAElement_ping(const SVGAElement *self) {
    return em_Val_as(jb_String, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("ping")));
}


void SVGAElement_set_ping(SVGAElement* self, jb_String * value) {
    em_Val_set(SVGGraphicsElement_as_val(self->inner), em_Val_from("ping"), em_Val_from(value));
}


jb_String SVGAElement_rel(const SVGAElement *self) {
    return em_Val_as(jb_String, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("rel")));
}


void SVGAElement_set_rel(SVGAElement* self, jb_String * value) {
    em_Val_set(SVGGraphicsElement_as_val(self->inner), em_Val_from("rel"), em_Val_from(value));
}


DOMTokenList SVGAElement_relList(const SVGAElement *self) {
    return em_Val_as(DOMTokenList, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("relList")));
}


jb_String SVGAElement_hreflang(const SVGAElement *self) {
    return em_Val_as(jb_String, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("hreflang")));
}


void SVGAElement_set_hreflang(SVGAElement* self, jb_String * value) {
    em_Val_set(SVGGraphicsElement_as_val(self->inner), em_Val_from("hreflang"), em_Val_from(value));
}


jb_String SVGAElement_type(const SVGAElement *self) {
    return em_Val_as(jb_String, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("type")));
}


void SVGAElement_set_type(SVGAElement* self, jb_String * value) {
    em_Val_set(SVGGraphicsElement_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


jb_String SVGAElement_text(const SVGAElement *self) {
    return em_Val_as(jb_String, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("text")));
}


void SVGAElement_set_text(SVGAElement* self, jb_String * value) {
    em_Val_set(SVGGraphicsElement_as_val(self->inner), em_Val_from("text"), em_Val_from(value));
}


jb_String SVGAElement_referrerPolicy(const SVGAElement *self) {
    return em_Val_as(jb_String, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("referrerPolicy")));
}


void SVGAElement_set_referrerPolicy(SVGAElement* self, jb_String * value) {
    em_Val_set(SVGGraphicsElement_as_val(self->inner), em_Val_from("referrerPolicy"), em_Val_from(value));
}


jb_String SVGAElement_origin(const SVGAElement *self) {
    return em_Val_as(jb_String, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("origin")));
}


jb_String SVGAElement_protocol(const SVGAElement *self) {
    return em_Val_as(jb_String, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("protocol")));
}


void SVGAElement_set_protocol(SVGAElement* self, jb_String * value) {
    em_Val_set(SVGGraphicsElement_as_val(self->inner), em_Val_from("protocol"), em_Val_from(value));
}


jb_String SVGAElement_username(const SVGAElement *self) {
    return em_Val_as(jb_String, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("username")));
}


void SVGAElement_set_username(SVGAElement* self, jb_String * value) {
    em_Val_set(SVGGraphicsElement_as_val(self->inner), em_Val_from("username"), em_Val_from(value));
}


jb_String SVGAElement_password(const SVGAElement *self) {
    return em_Val_as(jb_String, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("password")));
}


void SVGAElement_set_password(SVGAElement* self, jb_String * value) {
    em_Val_set(SVGGraphicsElement_as_val(self->inner), em_Val_from("password"), em_Val_from(value));
}


jb_String SVGAElement_host(const SVGAElement *self) {
    return em_Val_as(jb_String, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("host")));
}


void SVGAElement_set_host(SVGAElement* self, jb_String * value) {
    em_Val_set(SVGGraphicsElement_as_val(self->inner), em_Val_from("host"), em_Val_from(value));
}


jb_String SVGAElement_hostname(const SVGAElement *self) {
    return em_Val_as(jb_String, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("hostname")));
}


void SVGAElement_set_hostname(SVGAElement* self, jb_String * value) {
    em_Val_set(SVGGraphicsElement_as_val(self->inner), em_Val_from("hostname"), em_Val_from(value));
}


jb_String SVGAElement_port(const SVGAElement *self) {
    return em_Val_as(jb_String, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("port")));
}


void SVGAElement_set_port(SVGAElement* self, jb_String * value) {
    em_Val_set(SVGGraphicsElement_as_val(self->inner), em_Val_from("port"), em_Val_from(value));
}


jb_String SVGAElement_pathname(const SVGAElement *self) {
    return em_Val_as(jb_String, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("pathname")));
}


void SVGAElement_set_pathname(SVGAElement* self, jb_String * value) {
    em_Val_set(SVGGraphicsElement_as_val(self->inner), em_Val_from("pathname"), em_Val_from(value));
}


jb_String SVGAElement_search(const SVGAElement *self) {
    return em_Val_as(jb_String, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("search")));
}


void SVGAElement_set_search(SVGAElement* self, jb_String * value) {
    em_Val_set(SVGGraphicsElement_as_val(self->inner), em_Val_from("search"), em_Val_from(value));
}


jb_String SVGAElement_hash(const SVGAElement *self) {
    return em_Val_as(jb_String, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("hash")));
}


void SVGAElement_set_hash(SVGAElement* self, jb_String * value) {
    em_Val_set(SVGGraphicsElement_as_val(self->inner), em_Val_from("hash"), em_Val_from(value));
}


SVGAnimatedString SVGAElement_href(const SVGAElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("href")));
}

