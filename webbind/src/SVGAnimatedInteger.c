#include <webbind/SVGAnimatedInteger.h>

DEFINE_EMLITE_TYPE(SVGAnimatedInteger, em_Val);


long SVGAnimatedInteger_baseVal(const SVGAnimatedInteger *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("baseVal")));
}


void SVGAnimatedInteger_set_baseVal(SVGAnimatedInteger* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("baseVal"), em_Val_from(value));
}


long SVGAnimatedInteger_animVal(const SVGAnimatedInteger *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("animVal")));
}

