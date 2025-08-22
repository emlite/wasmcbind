#include <webcbind/SVGRectElement.h>

#include <webcbind/SVGAnimatedLength.h>

DEFINE_EMLITE_TYPE(SVGRectElement, SVGGeometryElement);


SVGAnimatedLength SVGRectElement_x(const SVGRectElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGeometryElement_as_val(self->inner), em_Val_from("x")));
}


SVGAnimatedLength SVGRectElement_y(const SVGRectElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGeometryElement_as_val(self->inner), em_Val_from("y")));
}


SVGAnimatedLength SVGRectElement_width(const SVGRectElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGeometryElement_as_val(self->inner), em_Val_from("width")));
}


SVGAnimatedLength SVGRectElement_height(const SVGRectElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGeometryElement_as_val(self->inner), em_Val_from("height")));
}


SVGAnimatedLength SVGRectElement_rx(const SVGRectElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGeometryElement_as_val(self->inner), em_Val_from("rx")));
}


SVGAnimatedLength SVGRectElement_ry(const SVGRectElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGeometryElement_as_val(self->inner), em_Val_from("ry")));
}

