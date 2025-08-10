#include <webbind/SVGFECompositeElement.h>

#include <webbind/SVGAnimatedString.h>
#include <webbind/SVGAnimatedEnumeration.h>
#include <webbind/SVGAnimatedNumber.h>
#include <webbind/SVGAnimatedLength.h>

DEFINE_EMLITE_TYPE(SVGFECompositeElement, SVGElement);


SVGAnimatedString SVGFECompositeElement_in1(const SVGFECompositeElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("in1")));
}


SVGAnimatedString SVGFECompositeElement_in2(const SVGFECompositeElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("in2")));
}


SVGAnimatedEnumeration SVGFECompositeElement_operator_(const SVGFECompositeElement *self) {
    return em_Val_as(SVGAnimatedEnumeration, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("operator")));
}


SVGAnimatedNumber SVGFECompositeElement_k1(const SVGFECompositeElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("k1")));
}


SVGAnimatedNumber SVGFECompositeElement_k2(const SVGFECompositeElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("k2")));
}


SVGAnimatedNumber SVGFECompositeElement_k3(const SVGFECompositeElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("k3")));
}


SVGAnimatedNumber SVGFECompositeElement_k4(const SVGFECompositeElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("k4")));
}


SVGAnimatedLength SVGFECompositeElement_x(const SVGFECompositeElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("x")));
}


SVGAnimatedLength SVGFECompositeElement_y(const SVGFECompositeElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("y")));
}


SVGAnimatedLength SVGFECompositeElement_width(const SVGFECompositeElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("width")));
}


SVGAnimatedLength SVGFECompositeElement_height(const SVGFECompositeElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("height")));
}


SVGAnimatedString SVGFECompositeElement_result(const SVGFECompositeElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("result")));
}

