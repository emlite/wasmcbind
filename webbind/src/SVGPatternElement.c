#include <webbind/SVGPatternElement.h>

#include <webbind/SVGAnimatedEnumeration.h>
#include <webbind/SVGAnimatedTransformList.h>
#include <webbind/SVGAnimatedLength.h>
#include <webbind/SVGAnimatedRect.h>
#include <webbind/SVGAnimatedPreserveAspectRatio.h>
#include <webbind/SVGAnimatedString.h>

DEFINE_EMLITE_TYPE(SVGPatternElement, SVGElement);


SVGAnimatedEnumeration SVGPatternElement_patternUnits(const SVGPatternElement *self) {
    return em_Val_as(SVGAnimatedEnumeration, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("patternUnits")));
}


SVGAnimatedEnumeration SVGPatternElement_patternContentUnits(const SVGPatternElement *self) {
    return em_Val_as(SVGAnimatedEnumeration, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("patternContentUnits")));
}


SVGAnimatedTransformList SVGPatternElement_patternTransform(const SVGPatternElement *self) {
    return em_Val_as(SVGAnimatedTransformList, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("patternTransform")));
}


SVGAnimatedLength SVGPatternElement_x(const SVGPatternElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("x")));
}


SVGAnimatedLength SVGPatternElement_y(const SVGPatternElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("y")));
}


SVGAnimatedLength SVGPatternElement_width(const SVGPatternElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("width")));
}


SVGAnimatedLength SVGPatternElement_height(const SVGPatternElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("height")));
}


SVGAnimatedRect SVGPatternElement_viewBox(const SVGPatternElement *self) {
    return em_Val_as(SVGAnimatedRect, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("viewBox")));
}


SVGAnimatedPreserveAspectRatio SVGPatternElement_preserveAspectRatio(const SVGPatternElement *self) {
    return em_Val_as(SVGAnimatedPreserveAspectRatio, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("preserveAspectRatio")));
}


SVGAnimatedString SVGPatternElement_href(const SVGPatternElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("href")));
}

