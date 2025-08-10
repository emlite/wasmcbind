#include <webbind/SVGAnimatedLength.h>

#include <webbind/SVGLength.h>

DEFINE_EMLITE_TYPE(SVGAnimatedLength, em_Val);


SVGLength SVGAnimatedLength_baseVal(const SVGAnimatedLength *self) {
    return em_Val_as(SVGLength, em_Val_get(em_Val_as_val(self->inner), em_Val_from("baseVal")));
}


SVGLength SVGAnimatedLength_animVal(const SVGAnimatedLength *self) {
    return em_Val_as(SVGLength, em_Val_get(em_Val_as_val(self->inner), em_Val_from("animVal")));
}

