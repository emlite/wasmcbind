#include <webbind/SVGUseElement.h>
#include <webbind/SVGAnimatedLength.h>
#include <webbind/SVGElement.h>
#include <webbind/SVGAnimatedString.h>


DEFINE_EMLITE_TYPE(SVGUseElement, SVGGraphicsElement);


SVGAnimatedLength SVGUseElement_x(const SVGUseElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("x")));
}


SVGAnimatedLength SVGUseElement_y(const SVGUseElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("y")));
}


SVGAnimatedLength SVGUseElement_width(const SVGUseElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("width")));
}


SVGAnimatedLength SVGUseElement_height(const SVGUseElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("height")));
}


SVGElement SVGUseElement_instanceRoot(const SVGUseElement *self) {
    return em_Val_as(SVGElement, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("instanceRoot")));
}


SVGElement SVGUseElement_animatedInstanceRoot(const SVGUseElement *self) {
    return em_Val_as(SVGElement, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("animatedInstanceRoot")));
}


SVGAnimatedString SVGUseElement_href(const SVGUseElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("href")));
}

