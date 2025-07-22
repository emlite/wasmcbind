#include <webbind/SVGGradientElement.h>
#include <webbind/SVGAnimatedEnumeration.h>
#include <webbind/SVGAnimatedTransformList.h>
#include <webbind/SVGAnimatedString.h>


DEFINE_EMLITE_TYPE(SVGGradientElement, SVGElement);


SVGAnimatedEnumeration SVGGradientElement_gradientUnits(const SVGGradientElement *self) {
    return em_Val_as(SVGAnimatedEnumeration, em_Val_get(SVGElement_as_val(self->inner), "gradientUnits"));
}


SVGAnimatedTransformList SVGGradientElement_gradientTransform(const SVGGradientElement *self) {
    return em_Val_as(SVGAnimatedTransformList, em_Val_get(SVGElement_as_val(self->inner), "gradientTransform"));
}


SVGAnimatedEnumeration SVGGradientElement_spreadMethod(const SVGGradientElement *self) {
    return em_Val_as(SVGAnimatedEnumeration, em_Val_get(SVGElement_as_val(self->inner), "spreadMethod"));
}


SVGAnimatedString SVGGradientElement_href(const SVGGradientElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), "href"));
}

