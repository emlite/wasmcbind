#include <webbind/SVGFETurbulenceElement.h>
#include <webbind/SVGAnimatedNumber.h>
#include <webbind/SVGAnimatedInteger.h>
#include <webbind/SVGAnimatedEnumeration.h>
#include <webbind/SVGAnimatedLength.h>
#include <webbind/SVGAnimatedString.h>


DEFINE_EMLITE_TYPE(SVGFETurbulenceElement, SVGElement);


SVGAnimatedNumber SVGFETurbulenceElement_baseFrequencyX(const SVGFETurbulenceElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), "baseFrequencyX"));
}


SVGAnimatedNumber SVGFETurbulenceElement_baseFrequencyY(const SVGFETurbulenceElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), "baseFrequencyY"));
}


SVGAnimatedInteger SVGFETurbulenceElement_numOctaves(const SVGFETurbulenceElement *self) {
    return em_Val_as(SVGAnimatedInteger, em_Val_get(SVGElement_as_val(self->inner), "numOctaves"));
}


SVGAnimatedNumber SVGFETurbulenceElement_seed(const SVGFETurbulenceElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), "seed"));
}


SVGAnimatedEnumeration SVGFETurbulenceElement_stitchTiles(const SVGFETurbulenceElement *self) {
    return em_Val_as(SVGAnimatedEnumeration, em_Val_get(SVGElement_as_val(self->inner), "stitchTiles"));
}


SVGAnimatedEnumeration SVGFETurbulenceElement_type(const SVGFETurbulenceElement *self) {
    return em_Val_as(SVGAnimatedEnumeration, em_Val_get(SVGElement_as_val(self->inner), "type"));
}


SVGAnimatedLength SVGFETurbulenceElement_x(const SVGFETurbulenceElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "x"));
}


SVGAnimatedLength SVGFETurbulenceElement_y(const SVGFETurbulenceElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "y"));
}


SVGAnimatedLength SVGFETurbulenceElement_width(const SVGFETurbulenceElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "width"));
}


SVGAnimatedLength SVGFETurbulenceElement_height(const SVGFETurbulenceElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "height"));
}


SVGAnimatedString SVGFETurbulenceElement_result(const SVGFETurbulenceElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), "result"));
}

