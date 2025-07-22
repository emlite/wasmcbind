#include <webbind/SVGEllipseElement.h>
#include <webbind/SVGAnimatedLength.h>


DEFINE_EMLITE_TYPE(SVGEllipseElement, SVGGeometryElement);


SVGAnimatedLength SVGEllipseElement_cx(const SVGEllipseElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGeometryElement_as_val(self->inner), em_Val_from("cx")));
}


SVGAnimatedLength SVGEllipseElement_cy(const SVGEllipseElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGeometryElement_as_val(self->inner), em_Val_from("cy")));
}


SVGAnimatedLength SVGEllipseElement_rx(const SVGEllipseElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGeometryElement_as_val(self->inner), em_Val_from("rx")));
}


SVGAnimatedLength SVGEllipseElement_ry(const SVGEllipseElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGeometryElement_as_val(self->inner), em_Val_from("ry")));
}

