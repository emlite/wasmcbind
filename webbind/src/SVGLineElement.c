#include <webbind/SVGLineElement.h>
#include <webbind/SVGAnimatedLength.h>


DEFINE_EMLITE_TYPE(SVGLineElement, SVGGeometryElement);


SVGAnimatedLength SVGLineElement_x1(const SVGLineElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGeometryElement_as_val(self->inner), em_Val_from("x1")));
}


SVGAnimatedLength SVGLineElement_y1(const SVGLineElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGeometryElement_as_val(self->inner), em_Val_from("y1")));
}


SVGAnimatedLength SVGLineElement_x2(const SVGLineElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGeometryElement_as_val(self->inner), em_Val_from("x2")));
}


SVGAnimatedLength SVGLineElement_y2(const SVGLineElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGeometryElement_as_val(self->inner), em_Val_from("y2")));
}

