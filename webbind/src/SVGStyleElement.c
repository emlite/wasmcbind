#include <webbind/SVGStyleElement.h>
#include <webbind/CSSStyleSheet.h>


DEFINE_EMLITE_TYPE(SVGStyleElement, SVGElement);


jb_DOMString SVGStyleElement_type(const SVGStyleElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(SVGElement_as_val(self->inner), "type"));
}


void SVGStyleElement_set_type(SVGStyleElement* self, const jb_DOMString* value) {
    em_Val_set(SVGElement_as_val(self->inner), "type", value);
}


jb_DOMString SVGStyleElement_media(const SVGStyleElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(SVGElement_as_val(self->inner), "media"));
}


void SVGStyleElement_set_media(SVGStyleElement* self, const jb_DOMString* value) {
    em_Val_set(SVGElement_as_val(self->inner), "media", value);
}


jb_DOMString SVGStyleElement_title(const SVGStyleElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(SVGElement_as_val(self->inner), "title"));
}


void SVGStyleElement_set_title(SVGStyleElement* self, const jb_DOMString* value) {
    em_Val_set(SVGElement_as_val(self->inner), "title", value);
}


CSSStyleSheet SVGStyleElement_sheet(const SVGStyleElement *self) {
    return em_Val_as(CSSStyleSheet, em_Val_get(SVGElement_as_val(self->inner), "sheet"));
}

