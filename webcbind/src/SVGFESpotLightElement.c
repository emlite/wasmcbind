#include <webcbind/SVGFESpotLightElement.h>

#include <webcbind/SVGAnimatedNumber.h>

DEFINE_EMLITE_TYPE(SVGFESpotLightElement, SVGElement);


SVGAnimatedNumber SVGFESpotLightElement_x(const SVGFESpotLightElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("x")));
}


SVGAnimatedNumber SVGFESpotLightElement_y(const SVGFESpotLightElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("y")));
}


SVGAnimatedNumber SVGFESpotLightElement_z(const SVGFESpotLightElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("z")));
}


SVGAnimatedNumber SVGFESpotLightElement_pointsAtX(const SVGFESpotLightElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("pointsAtX")));
}


SVGAnimatedNumber SVGFESpotLightElement_pointsAtY(const SVGFESpotLightElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("pointsAtY")));
}


SVGAnimatedNumber SVGFESpotLightElement_pointsAtZ(const SVGFESpotLightElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("pointsAtZ")));
}


SVGAnimatedNumber SVGFESpotLightElement_specularExponent(const SVGFESpotLightElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("specularExponent")));
}


SVGAnimatedNumber SVGFESpotLightElement_limitingConeAngle(const SVGFESpotLightElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("limitingConeAngle")));
}

