#include <webbind/SVGFEDiffuseLightingElement.h>
#include <webbind/SVGAnimatedString.h>
#include <webbind/SVGAnimatedNumber.h>
#include <webbind/SVGAnimatedLength.h>


DEFINE_EMLITE_TYPE(SVGFEDiffuseLightingElement, SVGElement);


SVGAnimatedString SVGFEDiffuseLightingElement_in1(const SVGFEDiffuseLightingElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), "in1"));
}


SVGAnimatedNumber SVGFEDiffuseLightingElement_surfaceScale(const SVGFEDiffuseLightingElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), "surfaceScale"));
}


SVGAnimatedNumber SVGFEDiffuseLightingElement_diffuseConstant(const SVGFEDiffuseLightingElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), "diffuseConstant"));
}


SVGAnimatedNumber SVGFEDiffuseLightingElement_kernelUnitLengthX(const SVGFEDiffuseLightingElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), "kernelUnitLengthX"));
}


SVGAnimatedNumber SVGFEDiffuseLightingElement_kernelUnitLengthY(const SVGFEDiffuseLightingElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), "kernelUnitLengthY"));
}


SVGAnimatedLength SVGFEDiffuseLightingElement_x(const SVGFEDiffuseLightingElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "x"));
}


SVGAnimatedLength SVGFEDiffuseLightingElement_y(const SVGFEDiffuseLightingElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "y"));
}


SVGAnimatedLength SVGFEDiffuseLightingElement_width(const SVGFEDiffuseLightingElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "width"));
}


SVGAnimatedLength SVGFEDiffuseLightingElement_height(const SVGFEDiffuseLightingElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "height"));
}


SVGAnimatedString SVGFEDiffuseLightingElement_result(const SVGFEDiffuseLightingElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), "result"));
}

