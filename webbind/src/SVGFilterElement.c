#include <webbind/SVGFilterElement.h>
#include <webbind/SVGAnimatedEnumeration.h>
#include <webbind/SVGAnimatedLength.h>
#include <webbind/SVGAnimatedString.h>


DEFINE_EMLITE_TYPE(SVGFilterElement, SVGElement);


SVGAnimatedEnumeration SVGFilterElement_filterUnits(const SVGFilterElement *self) {
    return em_Val_as(SVGAnimatedEnumeration, em_Val_get(SVGElement_as_val(self->inner), "filterUnits"));
}


SVGAnimatedEnumeration SVGFilterElement_primitiveUnits(const SVGFilterElement *self) {
    return em_Val_as(SVGAnimatedEnumeration, em_Val_get(SVGElement_as_val(self->inner), "primitiveUnits"));
}


SVGAnimatedLength SVGFilterElement_x(const SVGFilterElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "x"));
}


SVGAnimatedLength SVGFilterElement_y(const SVGFilterElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "y"));
}


SVGAnimatedLength SVGFilterElement_width(const SVGFilterElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "width"));
}


SVGAnimatedLength SVGFilterElement_height(const SVGFilterElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "height"));
}


SVGAnimatedString SVGFilterElement_href(const SVGFilterElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), "href"));
}

