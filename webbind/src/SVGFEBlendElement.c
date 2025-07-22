#include <webbind/SVGFEBlendElement.h>
#include <webbind/SVGAnimatedString.h>
#include <webbind/SVGAnimatedEnumeration.h>
#include <webbind/SVGAnimatedLength.h>


DEFINE_EMLITE_TYPE(SVGFEBlendElement, SVGElement);


SVGAnimatedString SVGFEBlendElement_in1(const SVGFEBlendElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), "in1"));
}


SVGAnimatedString SVGFEBlendElement_in2(const SVGFEBlendElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), "in2"));
}


SVGAnimatedEnumeration SVGFEBlendElement_mode(const SVGFEBlendElement *self) {
    return em_Val_as(SVGAnimatedEnumeration, em_Val_get(SVGElement_as_val(self->inner), "mode"));
}


SVGAnimatedLength SVGFEBlendElement_x(const SVGFEBlendElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "x"));
}


SVGAnimatedLength SVGFEBlendElement_y(const SVGFEBlendElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "y"));
}


SVGAnimatedLength SVGFEBlendElement_width(const SVGFEBlendElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "width"));
}


SVGAnimatedLength SVGFEBlendElement_height(const SVGFEBlendElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "height"));
}


SVGAnimatedString SVGFEBlendElement_result(const SVGFEBlendElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), "result"));
}

