#include <webbind/SVGStyleElement.h>

#include <webbind/CSSStyleSheet.h>

DEFINE_EMLITE_TYPE(SVGStyleElement, SVGElement);


jb_String SVGStyleElement_type(const SVGStyleElement *self) {
    return em_Val_as(jb_String, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("type")));
}


void SVGStyleElement_set_type(SVGStyleElement* self, jb_String * value) {
    em_Val_set(SVGElement_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


jb_String SVGStyleElement_media(const SVGStyleElement *self) {
    return em_Val_as(jb_String, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("media")));
}


void SVGStyleElement_set_media(SVGStyleElement* self, jb_String * value) {
    em_Val_set(SVGElement_as_val(self->inner), em_Val_from("media"), em_Val_from(value));
}


jb_String SVGStyleElement_title(const SVGStyleElement *self) {
    return em_Val_as(jb_String, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("title")));
}


void SVGStyleElement_set_title(SVGStyleElement* self, jb_String * value) {
    em_Val_set(SVGElement_as_val(self->inner), em_Val_from("title"), em_Val_from(value));
}


CSSStyleSheet SVGStyleElement_sheet(const SVGStyleElement *self) {
    return em_Val_as(CSSStyleSheet, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("sheet")));
}

