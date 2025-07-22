#include <webbind/SVGRectElement.h>
#include <webbind/SVGAnimatedLength.h>


DEFINE_EMLITE_TYPE(SVGRectElement, SVGGeometryElement);


SVGAnimatedLength SVGRectElement_x(const SVGRectElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGeometryElement_as_val(self->inner), "x"));
}


SVGAnimatedLength SVGRectElement_y(const SVGRectElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGeometryElement_as_val(self->inner), "y"));
}


SVGAnimatedLength SVGRectElement_width(const SVGRectElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGeometryElement_as_val(self->inner), "width"));
}


SVGAnimatedLength SVGRectElement_height(const SVGRectElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGeometryElement_as_val(self->inner), "height"));
}


SVGAnimatedLength SVGRectElement_rx(const SVGRectElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGeometryElement_as_val(self->inner), "rx"));
}


SVGAnimatedLength SVGRectElement_ry(const SVGRectElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGeometryElement_as_val(self->inner), "ry"));
}

