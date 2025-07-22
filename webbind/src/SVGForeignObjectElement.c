#include <webbind/SVGForeignObjectElement.h>
#include <webbind/SVGAnimatedLength.h>


DEFINE_EMLITE_TYPE(SVGForeignObjectElement, SVGGraphicsElement);


SVGAnimatedLength SVGForeignObjectElement_x(const SVGForeignObjectElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGraphicsElement_as_val(self->inner), "x"));
}


SVGAnimatedLength SVGForeignObjectElement_y(const SVGForeignObjectElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGraphicsElement_as_val(self->inner), "y"));
}


SVGAnimatedLength SVGForeignObjectElement_width(const SVGForeignObjectElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGraphicsElement_as_val(self->inner), "width"));
}


SVGAnimatedLength SVGForeignObjectElement_height(const SVGForeignObjectElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGraphicsElement_as_val(self->inner), "height"));
}

