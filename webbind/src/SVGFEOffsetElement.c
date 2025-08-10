#include <webbind/SVGFEOffsetElement.h>

#include <webbind/SVGAnimatedString.h>
#include <webbind/SVGAnimatedNumber.h>
#include <webbind/SVGAnimatedLength.h>

DEFINE_EMLITE_TYPE(SVGFEOffsetElement, SVGElement);


SVGAnimatedString SVGFEOffsetElement_in1(const SVGFEOffsetElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("in1")));
}


SVGAnimatedNumber SVGFEOffsetElement_dx(const SVGFEOffsetElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("dx")));
}


SVGAnimatedNumber SVGFEOffsetElement_dy(const SVGFEOffsetElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("dy")));
}


SVGAnimatedLength SVGFEOffsetElement_x(const SVGFEOffsetElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("x")));
}


SVGAnimatedLength SVGFEOffsetElement_y(const SVGFEOffsetElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("y")));
}


SVGAnimatedLength SVGFEOffsetElement_width(const SVGFEOffsetElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("width")));
}


SVGAnimatedLength SVGFEOffsetElement_height(const SVGFEOffsetElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("height")));
}


SVGAnimatedString SVGFEOffsetElement_result(const SVGFEOffsetElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("result")));
}

