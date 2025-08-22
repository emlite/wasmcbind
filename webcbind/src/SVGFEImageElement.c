#include <webcbind/SVGFEImageElement.h>

#include <webcbind/SVGAnimatedPreserveAspectRatio.h>
#include <webcbind/SVGAnimatedString.h>
#include <webcbind/SVGAnimatedLength.h>

DEFINE_EMLITE_TYPE(SVGFEImageElement, SVGElement);


SVGAnimatedPreserveAspectRatio SVGFEImageElement_preserveAspectRatio(const SVGFEImageElement *self) {
    return em_Val_as(SVGAnimatedPreserveAspectRatio, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("preserveAspectRatio")));
}


SVGAnimatedString SVGFEImageElement_crossOrigin(const SVGFEImageElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("crossOrigin")));
}


SVGAnimatedLength SVGFEImageElement_x(const SVGFEImageElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("x")));
}


SVGAnimatedLength SVGFEImageElement_y(const SVGFEImageElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("y")));
}


SVGAnimatedLength SVGFEImageElement_width(const SVGFEImageElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("width")));
}


SVGAnimatedLength SVGFEImageElement_height(const SVGFEImageElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("height")));
}


SVGAnimatedString SVGFEImageElement_result(const SVGFEImageElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("result")));
}


SVGAnimatedString SVGFEImageElement_href(const SVGFEImageElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("href")));
}

