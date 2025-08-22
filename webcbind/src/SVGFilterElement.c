#include <webcbind/SVGFilterElement.h>

#include <webcbind/SVGAnimatedEnumeration.h>
#include <webcbind/SVGAnimatedLength.h>
#include <webcbind/SVGAnimatedString.h>

DEFINE_EMLITE_TYPE(SVGFilterElement, SVGElement);


SVGAnimatedEnumeration SVGFilterElement_filterUnits(const SVGFilterElement *self) {
    return em_Val_as(SVGAnimatedEnumeration, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("filterUnits")));
}


SVGAnimatedEnumeration SVGFilterElement_primitiveUnits(const SVGFilterElement *self) {
    return em_Val_as(SVGAnimatedEnumeration, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("primitiveUnits")));
}


SVGAnimatedLength SVGFilterElement_x(const SVGFilterElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("x")));
}


SVGAnimatedLength SVGFilterElement_y(const SVGFilterElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("y")));
}


SVGAnimatedLength SVGFilterElement_width(const SVGFilterElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("width")));
}


SVGAnimatedLength SVGFilterElement_height(const SVGFilterElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("height")));
}


SVGAnimatedString SVGFilterElement_href(const SVGFilterElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("href")));
}

