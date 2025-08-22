#include <webcbind/SVGCircleElement.h>

#include <webcbind/SVGAnimatedLength.h>

DEFINE_EMLITE_TYPE(SVGCircleElement, SVGGeometryElement);


SVGAnimatedLength SVGCircleElement_cx(const SVGCircleElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGeometryElement_as_val(self->inner), em_Val_from("cx")));
}


SVGAnimatedLength SVGCircleElement_cy(const SVGCircleElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGeometryElement_as_val(self->inner), em_Val_from("cy")));
}


SVGAnimatedLength SVGCircleElement_r(const SVGCircleElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGeometryElement_as_val(self->inner), em_Val_from("r")));
}

