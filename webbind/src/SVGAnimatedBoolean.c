#include <webbind/SVGAnimatedBoolean.h>


DEFINE_EMLITE_TYPE(SVGAnimatedBoolean, em_Val);


bool SVGAnimatedBoolean_baseVal(const SVGAnimatedBoolean *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "baseVal"));
}


void SVGAnimatedBoolean_set_baseVal(SVGAnimatedBoolean* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "baseVal", value);
}


bool SVGAnimatedBoolean_animVal(const SVGAnimatedBoolean *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "animVal"));
}

