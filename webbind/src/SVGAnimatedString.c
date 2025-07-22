#include <webbind/SVGAnimatedString.h>


DEFINE_EMLITE_TYPE(SVGAnimatedString, em_Val);


jb_DOMString SVGAnimatedString_baseVal(const SVGAnimatedString *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("baseVal")));
}


void SVGAnimatedString_set_baseVal(SVGAnimatedString* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("baseVal"), em_Val_from(value));
}


jb_DOMString SVGAnimatedString_animVal(const SVGAnimatedString *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("animVal")));
}

