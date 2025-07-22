#include <webbind/SVGLineElement.h>
#include <webbind/SVGAnimatedLength.h>


DEFINE_EMLITE_TYPE(SVGLineElement, SVGGeometryElement);


SVGAnimatedLength SVGLineElement_x1(const SVGLineElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGeometryElement_as_val(self->inner), "x1"));
}


SVGAnimatedLength SVGLineElement_y1(const SVGLineElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGeometryElement_as_val(self->inner), "y1"));
}


SVGAnimatedLength SVGLineElement_x2(const SVGLineElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGeometryElement_as_val(self->inner), "x2"));
}


SVGAnimatedLength SVGLineElement_y2(const SVGLineElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGeometryElement_as_val(self->inner), "y2"));
}

