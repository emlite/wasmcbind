#include <webcbind/SVGFETurbulenceElement.h>

#include <webcbind/SVGAnimatedNumber.h>
#include <webcbind/SVGAnimatedInteger.h>
#include <webcbind/SVGAnimatedEnumeration.h>
#include <webcbind/SVGAnimatedLength.h>
#include <webcbind/SVGAnimatedString.h>

DEFINE_EMLITE_TYPE(SVGFETurbulenceElement, SVGElement);


SVGAnimatedNumber SVGFETurbulenceElement_baseFrequencyX(const SVGFETurbulenceElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("baseFrequencyX")));
}


SVGAnimatedNumber SVGFETurbulenceElement_baseFrequencyY(const SVGFETurbulenceElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("baseFrequencyY")));
}


SVGAnimatedInteger SVGFETurbulenceElement_numOctaves(const SVGFETurbulenceElement *self) {
    return em_Val_as(SVGAnimatedInteger, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("numOctaves")));
}


SVGAnimatedNumber SVGFETurbulenceElement_seed(const SVGFETurbulenceElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("seed")));
}


SVGAnimatedEnumeration SVGFETurbulenceElement_stitchTiles(const SVGFETurbulenceElement *self) {
    return em_Val_as(SVGAnimatedEnumeration, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("stitchTiles")));
}


SVGAnimatedEnumeration SVGFETurbulenceElement_type(const SVGFETurbulenceElement *self) {
    return em_Val_as(SVGAnimatedEnumeration, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("type")));
}


SVGAnimatedLength SVGFETurbulenceElement_x(const SVGFETurbulenceElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("x")));
}


SVGAnimatedLength SVGFETurbulenceElement_y(const SVGFETurbulenceElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("y")));
}


SVGAnimatedLength SVGFETurbulenceElement_width(const SVGFETurbulenceElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("width")));
}


SVGAnimatedLength SVGFETurbulenceElement_height(const SVGFETurbulenceElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("height")));
}


SVGAnimatedString SVGFETurbulenceElement_result(const SVGFETurbulenceElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("result")));
}

