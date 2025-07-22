#include <webbind/SVGFESpecularLightingElement.h>
#include <webbind/SVGAnimatedString.h>
#include <webbind/SVGAnimatedNumber.h>
#include <webbind/SVGAnimatedLength.h>


DEFINE_EMLITE_TYPE(SVGFESpecularLightingElement, SVGElement);


SVGAnimatedString SVGFESpecularLightingElement_in1(const SVGFESpecularLightingElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("in1")));
}


SVGAnimatedNumber SVGFESpecularLightingElement_surfaceScale(const SVGFESpecularLightingElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("surfaceScale")));
}


SVGAnimatedNumber SVGFESpecularLightingElement_specularConstant(const SVGFESpecularLightingElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("specularConstant")));
}


SVGAnimatedNumber SVGFESpecularLightingElement_specularExponent(const SVGFESpecularLightingElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("specularExponent")));
}


SVGAnimatedNumber SVGFESpecularLightingElement_kernelUnitLengthX(const SVGFESpecularLightingElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("kernelUnitLengthX")));
}


SVGAnimatedNumber SVGFESpecularLightingElement_kernelUnitLengthY(const SVGFESpecularLightingElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("kernelUnitLengthY")));
}


SVGAnimatedLength SVGFESpecularLightingElement_x(const SVGFESpecularLightingElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("x")));
}


SVGAnimatedLength SVGFESpecularLightingElement_y(const SVGFESpecularLightingElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("y")));
}


SVGAnimatedLength SVGFESpecularLightingElement_width(const SVGFESpecularLightingElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("width")));
}


SVGAnimatedLength SVGFESpecularLightingElement_height(const SVGFESpecularLightingElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("height")));
}


SVGAnimatedString SVGFESpecularLightingElement_result(const SVGFESpecularLightingElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("result")));
}

