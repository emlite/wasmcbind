#include <webbind/SVGCircleElement.h>
#include <webbind/SVGAnimatedLength.h>


DEFINE_EMLITE_TYPE(SVGCircleElement, SVGGeometryElement);


SVGAnimatedLength SVGCircleElement_cx(const SVGCircleElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGeometryElement_as_val(self->inner), "cx"));
}


SVGAnimatedLength SVGCircleElement_cy(const SVGCircleElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGeometryElement_as_val(self->inner), "cy"));
}


SVGAnimatedLength SVGCircleElement_r(const SVGCircleElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGeometryElement_as_val(self->inner), "r"));
}

