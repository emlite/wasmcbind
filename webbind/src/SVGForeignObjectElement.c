#include <webbind/SVGForeignObjectElement.h>

#include <webbind/SVGAnimatedLength.h>

DEFINE_EMLITE_TYPE(SVGForeignObjectElement, SVGGraphicsElement);


SVGAnimatedLength SVGForeignObjectElement_x(const SVGForeignObjectElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("x")));
}


SVGAnimatedLength SVGForeignObjectElement_y(const SVGForeignObjectElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("y")));
}


SVGAnimatedLength SVGForeignObjectElement_width(const SVGForeignObjectElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("width")));
}


SVGAnimatedLength SVGForeignObjectElement_height(const SVGForeignObjectElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("height")));
}

