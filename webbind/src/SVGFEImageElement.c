#include <webbind/SVGFEImageElement.h>
#include <webbind/SVGAnimatedPreserveAspectRatio.h>
#include <webbind/SVGAnimatedString.h>
#include <webbind/SVGAnimatedLength.h>


DEFINE_EMLITE_TYPE(SVGFEImageElement, SVGElement);


SVGAnimatedPreserveAspectRatio SVGFEImageElement_preserveAspectRatio(const SVGFEImageElement *self) {
    return em_Val_as(SVGAnimatedPreserveAspectRatio, em_Val_get(SVGElement_as_val(self->inner), "preserveAspectRatio"));
}


SVGAnimatedString SVGFEImageElement_crossOrigin(const SVGFEImageElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), "crossOrigin"));
}


SVGAnimatedLength SVGFEImageElement_x(const SVGFEImageElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "x"));
}


SVGAnimatedLength SVGFEImageElement_y(const SVGFEImageElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "y"));
}


SVGAnimatedLength SVGFEImageElement_width(const SVGFEImageElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "width"));
}


SVGAnimatedLength SVGFEImageElement_height(const SVGFEImageElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "height"));
}


SVGAnimatedString SVGFEImageElement_result(const SVGFEImageElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), "result"));
}


SVGAnimatedString SVGFEImageElement_href(const SVGFEImageElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), "href"));
}

