#include <webbind/SVGFESpotLightElement.h>
#include <webbind/SVGAnimatedNumber.h>


DEFINE_EMLITE_TYPE(SVGFESpotLightElement, SVGElement);


SVGAnimatedNumber SVGFESpotLightElement_x(const SVGFESpotLightElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), "x"));
}


SVGAnimatedNumber SVGFESpotLightElement_y(const SVGFESpotLightElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), "y"));
}


SVGAnimatedNumber SVGFESpotLightElement_z(const SVGFESpotLightElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), "z"));
}


SVGAnimatedNumber SVGFESpotLightElement_pointsAtX(const SVGFESpotLightElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), "pointsAtX"));
}


SVGAnimatedNumber SVGFESpotLightElement_pointsAtY(const SVGFESpotLightElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), "pointsAtY"));
}


SVGAnimatedNumber SVGFESpotLightElement_pointsAtZ(const SVGFESpotLightElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), "pointsAtZ"));
}


SVGAnimatedNumber SVGFESpotLightElement_specularExponent(const SVGFESpotLightElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), "specularExponent"));
}


SVGAnimatedNumber SVGFESpotLightElement_limitingConeAngle(const SVGFESpotLightElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), "limitingConeAngle"));
}

