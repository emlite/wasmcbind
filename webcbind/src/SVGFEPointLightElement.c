#include <webcbind/SVGFEPointLightElement.h>

#include <webcbind/SVGAnimatedNumber.h>

DEFINE_EMLITE_TYPE(SVGFEPointLightElement, SVGElement);


SVGAnimatedNumber SVGFEPointLightElement_x(const SVGFEPointLightElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("x")));
}


SVGAnimatedNumber SVGFEPointLightElement_y(const SVGFEPointLightElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("y")));
}


SVGAnimatedNumber SVGFEPointLightElement_z(const SVGFEPointLightElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("z")));
}

