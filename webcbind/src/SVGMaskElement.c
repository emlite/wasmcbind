#include <webcbind/SVGMaskElement.h>

#include <webcbind/SVGAnimatedEnumeration.h>
#include <webcbind/SVGAnimatedLength.h>

DEFINE_EMLITE_TYPE(SVGMaskElement, SVGElement);


SVGAnimatedEnumeration SVGMaskElement_maskUnits(const SVGMaskElement *self) {
    return em_Val_as(SVGAnimatedEnumeration, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("maskUnits")));
}


SVGAnimatedEnumeration SVGMaskElement_maskContentUnits(const SVGMaskElement *self) {
    return em_Val_as(SVGAnimatedEnumeration, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("maskContentUnits")));
}


SVGAnimatedLength SVGMaskElement_x(const SVGMaskElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("x")));
}


SVGAnimatedLength SVGMaskElement_y(const SVGMaskElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("y")));
}


SVGAnimatedLength SVGMaskElement_width(const SVGMaskElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("width")));
}


SVGAnimatedLength SVGMaskElement_height(const SVGMaskElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("height")));
}

