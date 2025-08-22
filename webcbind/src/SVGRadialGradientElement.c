#include <webcbind/SVGRadialGradientElement.h>

#include <webcbind/SVGAnimatedLength.h>

DEFINE_EMLITE_TYPE(SVGRadialGradientElement, SVGGradientElement);


SVGAnimatedLength SVGRadialGradientElement_cx(const SVGRadialGradientElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGradientElement_as_val(self->inner), em_Val_from("cx")));
}


SVGAnimatedLength SVGRadialGradientElement_cy(const SVGRadialGradientElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGradientElement_as_val(self->inner), em_Val_from("cy")));
}


SVGAnimatedLength SVGRadialGradientElement_r(const SVGRadialGradientElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGradientElement_as_val(self->inner), em_Val_from("r")));
}


SVGAnimatedLength SVGRadialGradientElement_fx(const SVGRadialGradientElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGradientElement_as_val(self->inner), em_Val_from("fx")));
}


SVGAnimatedLength SVGRadialGradientElement_fy(const SVGRadialGradientElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGradientElement_as_val(self->inner), em_Val_from("fy")));
}


SVGAnimatedLength SVGRadialGradientElement_fr(const SVGRadialGradientElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGradientElement_as_val(self->inner), em_Val_from("fr")));
}

