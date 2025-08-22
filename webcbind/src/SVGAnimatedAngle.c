#include <webcbind/SVGAnimatedAngle.h>

#include <webcbind/SVGAngle.h>

DEFINE_EMLITE_TYPE(SVGAnimatedAngle, em_Val);


SVGAngle SVGAnimatedAngle_baseVal(const SVGAnimatedAngle *self) {
    return em_Val_as(SVGAngle, em_Val_get(em_Val_as_val(self->inner), em_Val_from("baseVal")));
}


SVGAngle SVGAnimatedAngle_animVal(const SVGAnimatedAngle *self) {
    return em_Val_as(SVGAngle, em_Val_get(em_Val_as_val(self->inner), em_Val_from("animVal")));
}

