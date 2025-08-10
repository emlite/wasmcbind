#include <webbind/SVGScriptElement.h>

#include <webbind/SVGAnimatedString.h>

DEFINE_EMLITE_TYPE(SVGScriptElement, SVGElement);


jb_String SVGScriptElement_type(const SVGScriptElement *self) {
    return em_Val_as(jb_String, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("type")));
}


void SVGScriptElement_set_type(SVGScriptElement* self, jb_String * value) {
    em_Val_set(SVGElement_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


jb_String SVGScriptElement_crossOrigin(const SVGScriptElement *self) {
    return em_Val_as(jb_String, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("crossOrigin")));
}


void SVGScriptElement_set_crossOrigin(SVGScriptElement* self, jb_String * value) {
    em_Val_set(SVGElement_as_val(self->inner), em_Val_from("crossOrigin"), em_Val_from(value));
}


SVGAnimatedString SVGScriptElement_href(const SVGScriptElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("href")));
}

