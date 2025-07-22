#include <webbind/SVGFESpecularLightingElement.h>
#include <webbind/SVGAnimatedString.h>
#include <webbind/SVGAnimatedNumber.h>
#include <webbind/SVGAnimatedLength.h>


DEFINE_EMLITE_TYPE(SVGFESpecularLightingElement, SVGElement);


SVGAnimatedString SVGFESpecularLightingElement_in1(const SVGFESpecularLightingElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), "in1"));
}


SVGAnimatedNumber SVGFESpecularLightingElement_surfaceScale(const SVGFESpecularLightingElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), "surfaceScale"));
}


SVGAnimatedNumber SVGFESpecularLightingElement_specularConstant(const SVGFESpecularLightingElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), "specularConstant"));
}


SVGAnimatedNumber SVGFESpecularLightingElement_specularExponent(const SVGFESpecularLightingElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), "specularExponent"));
}


SVGAnimatedNumber SVGFESpecularLightingElement_kernelUnitLengthX(const SVGFESpecularLightingElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), "kernelUnitLengthX"));
}


SVGAnimatedNumber SVGFESpecularLightingElement_kernelUnitLengthY(const SVGFESpecularLightingElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), "kernelUnitLengthY"));
}


SVGAnimatedLength SVGFESpecularLightingElement_x(const SVGFESpecularLightingElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "x"));
}


SVGAnimatedLength SVGFESpecularLightingElement_y(const SVGFESpecularLightingElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "y"));
}


SVGAnimatedLength SVGFESpecularLightingElement_width(const SVGFESpecularLightingElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "width"));
}


SVGAnimatedLength SVGFESpecularLightingElement_height(const SVGFESpecularLightingElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "height"));
}


SVGAnimatedString SVGFESpecularLightingElement_result(const SVGFESpecularLightingElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), "result"));
}

