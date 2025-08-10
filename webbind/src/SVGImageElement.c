#include <webbind/SVGImageElement.h>

#include <webbind/SVGAnimatedLength.h>
#include <webbind/SVGAnimatedPreserveAspectRatio.h>
#include <webbind/SVGAnimatedString.h>

DEFINE_EMLITE_TYPE(SVGImageElement, SVGGraphicsElement);


SVGAnimatedLength SVGImageElement_x(const SVGImageElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("x")));
}


SVGAnimatedLength SVGImageElement_y(const SVGImageElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("y")));
}


SVGAnimatedLength SVGImageElement_width(const SVGImageElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("width")));
}


SVGAnimatedLength SVGImageElement_height(const SVGImageElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("height")));
}


SVGAnimatedPreserveAspectRatio SVGImageElement_preserveAspectRatio(const SVGImageElement *self) {
    return em_Val_as(SVGAnimatedPreserveAspectRatio, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("preserveAspectRatio")));
}


jb_String SVGImageElement_crossOrigin(const SVGImageElement *self) {
    return em_Val_as(jb_String, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("crossOrigin")));
}


void SVGImageElement_set_crossOrigin(SVGImageElement* self, jb_String * value) {
    em_Val_set(SVGGraphicsElement_as_val(self->inner), em_Val_from("crossOrigin"), em_Val_from(value));
}


SVGAnimatedString SVGImageElement_href(const SVGImageElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("href")));
}

