#include <webbind/SVGLinearGradientElement.h>
#include <webbind/SVGAnimatedLength.h>


DEFINE_EMLITE_TYPE(SVGLinearGradientElement, SVGGradientElement);


SVGAnimatedLength SVGLinearGradientElement_x1(const SVGLinearGradientElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGradientElement_as_val(self->inner), em_Val_from("x1")));
}


SVGAnimatedLength SVGLinearGradientElement_y1(const SVGLinearGradientElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGradientElement_as_val(self->inner), em_Val_from("y1")));
}


SVGAnimatedLength SVGLinearGradientElement_x2(const SVGLinearGradientElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGradientElement_as_val(self->inner), em_Val_from("x2")));
}


SVGAnimatedLength SVGLinearGradientElement_y2(const SVGLinearGradientElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGradientElement_as_val(self->inner), em_Val_from("y2")));
}

