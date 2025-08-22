#include <webcbind/SVGFEDropShadowElement.h>

#include <webcbind/SVGAnimatedString.h>
#include <webcbind/SVGAnimatedNumber.h>
#include <webcbind/SVGAnimatedLength.h>

DEFINE_EMLITE_TYPE(SVGFEDropShadowElement, SVGElement);


SVGAnimatedString SVGFEDropShadowElement_in1(const SVGFEDropShadowElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("in1")));
}


SVGAnimatedNumber SVGFEDropShadowElement_dx(const SVGFEDropShadowElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("dx")));
}


SVGAnimatedNumber SVGFEDropShadowElement_dy(const SVGFEDropShadowElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("dy")));
}


SVGAnimatedNumber SVGFEDropShadowElement_stdDeviationX(const SVGFEDropShadowElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("stdDeviationX")));
}


SVGAnimatedNumber SVGFEDropShadowElement_stdDeviationY(const SVGFEDropShadowElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("stdDeviationY")));
}


jb_Undefined SVGFEDropShadowElement_setStdDeviation(SVGFEDropShadowElement* self , float stdDeviationX, float stdDeviationY) {
    return em_Val_as(jb_Undefined, em_Val_call(SVGElement_as_val(self->inner), "setStdDeviation", em_Val_from(stdDeviationX), em_Val_from(stdDeviationY)));
}


SVGAnimatedLength SVGFEDropShadowElement_x(const SVGFEDropShadowElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("x")));
}


SVGAnimatedLength SVGFEDropShadowElement_y(const SVGFEDropShadowElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("y")));
}


SVGAnimatedLength SVGFEDropShadowElement_width(const SVGFEDropShadowElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("width")));
}


SVGAnimatedLength SVGFEDropShadowElement_height(const SVGFEDropShadowElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("height")));
}


SVGAnimatedString SVGFEDropShadowElement_result(const SVGFEDropShadowElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("result")));
}

