#include <webbind/SVGAnimatedEnumeration.h>


DEFINE_EMLITE_TYPE(SVGAnimatedEnumeration, em_Val);


unsigned short SVGAnimatedEnumeration_baseVal(const SVGAnimatedEnumeration *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), "baseVal"));
}


void SVGAnimatedEnumeration_set_baseVal(SVGAnimatedEnumeration* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), "baseVal", value);
}


unsigned short SVGAnimatedEnumeration_animVal(const SVGAnimatedEnumeration *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), "animVal"));
}

