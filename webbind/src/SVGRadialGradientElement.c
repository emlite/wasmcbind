#include <webbind/SVGRadialGradientElement.h>
#include <webbind/SVGAnimatedLength.h>


DEFINE_EMLITE_TYPE(SVGRadialGradientElement, SVGGradientElement);


SVGAnimatedLength SVGRadialGradientElement_cx(const SVGRadialGradientElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGradientElement_as_val(self->inner), "cx"));
}


SVGAnimatedLength SVGRadialGradientElement_cy(const SVGRadialGradientElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGradientElement_as_val(self->inner), "cy"));
}


SVGAnimatedLength SVGRadialGradientElement_r(const SVGRadialGradientElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGradientElement_as_val(self->inner), "r"));
}


SVGAnimatedLength SVGRadialGradientElement_fx(const SVGRadialGradientElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGradientElement_as_val(self->inner), "fx"));
}


SVGAnimatedLength SVGRadialGradientElement_fy(const SVGRadialGradientElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGradientElement_as_val(self->inner), "fy"));
}


SVGAnimatedLength SVGRadialGradientElement_fr(const SVGRadialGradientElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGradientElement_as_val(self->inner), "fr"));
}

