#include <webbind/SVGMaskElement.h>
#include <webbind/SVGAnimatedEnumeration.h>
#include <webbind/SVGAnimatedLength.h>


DEFINE_EMLITE_TYPE(SVGMaskElement, SVGElement);


SVGAnimatedEnumeration SVGMaskElement_maskUnits(const SVGMaskElement *self) {
    return em_Val_as(SVGAnimatedEnumeration, em_Val_get(SVGElement_as_val(self->inner), "maskUnits"));
}


SVGAnimatedEnumeration SVGMaskElement_maskContentUnits(const SVGMaskElement *self) {
    return em_Val_as(SVGAnimatedEnumeration, em_Val_get(SVGElement_as_val(self->inner), "maskContentUnits"));
}


SVGAnimatedLength SVGMaskElement_x(const SVGMaskElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "x"));
}


SVGAnimatedLength SVGMaskElement_y(const SVGMaskElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "y"));
}


SVGAnimatedLength SVGMaskElement_width(const SVGMaskElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "width"));
}


SVGAnimatedLength SVGMaskElement_height(const SVGMaskElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "height"));
}

