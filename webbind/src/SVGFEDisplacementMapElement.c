#include <webbind/SVGFEDisplacementMapElement.h>
#include <webbind/SVGAnimatedString.h>
#include <webbind/SVGAnimatedNumber.h>
#include <webbind/SVGAnimatedEnumeration.h>
#include <webbind/SVGAnimatedLength.h>


DEFINE_EMLITE_TYPE(SVGFEDisplacementMapElement, SVGElement);


SVGAnimatedString SVGFEDisplacementMapElement_in1(const SVGFEDisplacementMapElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("in1")));
}


SVGAnimatedString SVGFEDisplacementMapElement_in2(const SVGFEDisplacementMapElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("in2")));
}


SVGAnimatedNumber SVGFEDisplacementMapElement_scale(const SVGFEDisplacementMapElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("scale")));
}


SVGAnimatedEnumeration SVGFEDisplacementMapElement_xChannelSelector(const SVGFEDisplacementMapElement *self) {
    return em_Val_as(SVGAnimatedEnumeration, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("xChannelSelector")));
}


SVGAnimatedEnumeration SVGFEDisplacementMapElement_yChannelSelector(const SVGFEDisplacementMapElement *self) {
    return em_Val_as(SVGAnimatedEnumeration, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("yChannelSelector")));
}


SVGAnimatedLength SVGFEDisplacementMapElement_x(const SVGFEDisplacementMapElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("x")));
}


SVGAnimatedLength SVGFEDisplacementMapElement_y(const SVGFEDisplacementMapElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("y")));
}


SVGAnimatedLength SVGFEDisplacementMapElement_width(const SVGFEDisplacementMapElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("width")));
}


SVGAnimatedLength SVGFEDisplacementMapElement_height(const SVGFEDisplacementMapElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("height")));
}


SVGAnimatedString SVGFEDisplacementMapElement_result(const SVGFEDisplacementMapElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("result")));
}

