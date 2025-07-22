#include <webbind/SVGAnimatedPreserveAspectRatio.h>
#include <webbind/SVGPreserveAspectRatio.h>


DEFINE_EMLITE_TYPE(SVGAnimatedPreserveAspectRatio, em_Val);


SVGPreserveAspectRatio SVGAnimatedPreserveAspectRatio_baseVal(const SVGAnimatedPreserveAspectRatio *self) {
    return em_Val_as(SVGPreserveAspectRatio, em_Val_get(em_Val_as_val(self->inner), "baseVal"));
}


SVGPreserveAspectRatio SVGAnimatedPreserveAspectRatio_animVal(const SVGAnimatedPreserveAspectRatio *self) {
    return em_Val_as(SVGPreserveAspectRatio, em_Val_get(em_Val_as_val(self->inner), "animVal"));
}

