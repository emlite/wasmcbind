#include <webbind/SVGImageElement.h>
#include <webbind/SVGAnimatedLength.h>
#include <webbind/SVGAnimatedPreserveAspectRatio.h>
#include <webbind/SVGAnimatedString.h>


DEFINE_EMLITE_TYPE(SVGImageElement, SVGGraphicsElement);


SVGAnimatedLength SVGImageElement_x(const SVGImageElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGraphicsElement_as_val(self->inner), "x"));
}


SVGAnimatedLength SVGImageElement_y(const SVGImageElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGraphicsElement_as_val(self->inner), "y"));
}


SVGAnimatedLength SVGImageElement_width(const SVGImageElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGraphicsElement_as_val(self->inner), "width"));
}


SVGAnimatedLength SVGImageElement_height(const SVGImageElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGraphicsElement_as_val(self->inner), "height"));
}


SVGAnimatedPreserveAspectRatio SVGImageElement_preserveAspectRatio(const SVGImageElement *self) {
    return em_Val_as(SVGAnimatedPreserveAspectRatio, em_Val_get(SVGGraphicsElement_as_val(self->inner), "preserveAspectRatio"));
}


jb_DOMString SVGImageElement_crossOrigin(const SVGImageElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(SVGGraphicsElement_as_val(self->inner), "crossOrigin"));
}


void SVGImageElement_set_crossOrigin(SVGImageElement* self, const jb_DOMString* value) {
    em_Val_set(SVGGraphicsElement_as_val(self->inner), "crossOrigin", value);
}


SVGAnimatedString SVGImageElement_href(const SVGImageElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGGraphicsElement_as_val(self->inner), "href"));
}

