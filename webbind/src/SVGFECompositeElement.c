#include <webbind/SVGFECompositeElement.h>
#include <webbind/SVGAnimatedString.h>
#include <webbind/SVGAnimatedEnumeration.h>
#include <webbind/SVGAnimatedNumber.h>
#include <webbind/SVGAnimatedLength.h>


DEFINE_EMLITE_TYPE(SVGFECompositeElement, SVGElement);


SVGAnimatedString SVGFECompositeElement_in1(const SVGFECompositeElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), "in1"));
}


SVGAnimatedString SVGFECompositeElement_in2(const SVGFECompositeElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), "in2"));
}


SVGAnimatedEnumeration SVGFECompositeElement_operator_(const SVGFECompositeElement *self) {
    return em_Val_as(SVGAnimatedEnumeration, em_Val_get(SVGElement_as_val(self->inner), "operator"));
}


SVGAnimatedNumber SVGFECompositeElement_k1(const SVGFECompositeElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), "k1"));
}


SVGAnimatedNumber SVGFECompositeElement_k2(const SVGFECompositeElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), "k2"));
}


SVGAnimatedNumber SVGFECompositeElement_k3(const SVGFECompositeElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), "k3"));
}


SVGAnimatedNumber SVGFECompositeElement_k4(const SVGFECompositeElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), "k4"));
}


SVGAnimatedLength SVGFECompositeElement_x(const SVGFECompositeElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "x"));
}


SVGAnimatedLength SVGFECompositeElement_y(const SVGFECompositeElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "y"));
}


SVGAnimatedLength SVGFECompositeElement_width(const SVGFECompositeElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "width"));
}


SVGAnimatedLength SVGFECompositeElement_height(const SVGFECompositeElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "height"));
}


SVGAnimatedString SVGFECompositeElement_result(const SVGFECompositeElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), "result"));
}

