#include <webbind/SVGAnimatedInteger.h>


DEFINE_EMLITE_TYPE(SVGAnimatedInteger, em_Val);


long SVGAnimatedInteger_baseVal(const SVGAnimatedInteger *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), "baseVal"));
}


void SVGAnimatedInteger_set_baseVal(SVGAnimatedInteger* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), "baseVal", value);
}


long SVGAnimatedInteger_animVal(const SVGAnimatedInteger *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), "animVal"));
}

