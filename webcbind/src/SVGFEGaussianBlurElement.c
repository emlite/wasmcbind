#include <webcbind/SVGFEGaussianBlurElement.h>

#include <webcbind/SVGAnimatedString.h>
#include <webcbind/SVGAnimatedNumber.h>
#include <webcbind/SVGAnimatedEnumeration.h>
#include <webcbind/SVGAnimatedLength.h>

DEFINE_EMLITE_TYPE(SVGFEGaussianBlurElement, SVGElement);


SVGAnimatedString SVGFEGaussianBlurElement_in1(const SVGFEGaussianBlurElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("in1")));
}


SVGAnimatedNumber SVGFEGaussianBlurElement_stdDeviationX(const SVGFEGaussianBlurElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("stdDeviationX")));
}


SVGAnimatedNumber SVGFEGaussianBlurElement_stdDeviationY(const SVGFEGaussianBlurElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("stdDeviationY")));
}


SVGAnimatedEnumeration SVGFEGaussianBlurElement_edgeMode(const SVGFEGaussianBlurElement *self) {
    return em_Val_as(SVGAnimatedEnumeration, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("edgeMode")));
}


jb_Undefined SVGFEGaussianBlurElement_setStdDeviation(SVGFEGaussianBlurElement* self , float stdDeviationX, float stdDeviationY) {
    return em_Val_as(jb_Undefined, em_Val_call(SVGElement_as_val(self->inner), "setStdDeviation", em_Val_from(stdDeviationX), em_Val_from(stdDeviationY)));
}


SVGAnimatedLength SVGFEGaussianBlurElement_x(const SVGFEGaussianBlurElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("x")));
}


SVGAnimatedLength SVGFEGaussianBlurElement_y(const SVGFEGaussianBlurElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("y")));
}


SVGAnimatedLength SVGFEGaussianBlurElement_width(const SVGFEGaussianBlurElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("width")));
}


SVGAnimatedLength SVGFEGaussianBlurElement_height(const SVGFEGaussianBlurElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("height")));
}


SVGAnimatedString SVGFEGaussianBlurElement_result(const SVGFEGaussianBlurElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("result")));
}

