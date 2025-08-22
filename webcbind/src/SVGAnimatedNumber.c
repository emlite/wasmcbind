#include <webcbind/SVGAnimatedNumber.h>

DEFINE_EMLITE_TYPE(SVGAnimatedNumber, em_Val);


float SVGAnimatedNumber_baseVal(const SVGAnimatedNumber *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("baseVal")));
}


void SVGAnimatedNumber_set_baseVal(SVGAnimatedNumber* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("baseVal"), em_Val_from(value));
}


float SVGAnimatedNumber_animVal(const SVGAnimatedNumber *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("animVal")));
}

