#include <webbind/SVGScriptElement.h>
#include <webbind/SVGAnimatedString.h>


DEFINE_EMLITE_TYPE(SVGScriptElement, SVGElement);


jb_DOMString SVGScriptElement_type(const SVGScriptElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(SVGElement_as_val(self->inner), "type"));
}


void SVGScriptElement_set_type(SVGScriptElement* self, const jb_DOMString* value) {
    em_Val_set(SVGElement_as_val(self->inner), "type", value);
}


jb_DOMString SVGScriptElement_crossOrigin(const SVGScriptElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(SVGElement_as_val(self->inner), "crossOrigin"));
}


void SVGScriptElement_set_crossOrigin(SVGScriptElement* self, const jb_DOMString* value) {
    em_Val_set(SVGElement_as_val(self->inner), "crossOrigin", value);
}


SVGAnimatedString SVGScriptElement_href(const SVGScriptElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), "href"));
}

