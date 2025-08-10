#include <webbind/SVGFEComponentTransferElement.h>

#include <webbind/SVGAnimatedString.h>
#include <webbind/SVGAnimatedLength.h>

DEFINE_EMLITE_TYPE(SVGFEComponentTransferElement, SVGElement);


SVGAnimatedString SVGFEComponentTransferElement_in1(const SVGFEComponentTransferElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("in1")));
}


SVGAnimatedLength SVGFEComponentTransferElement_x(const SVGFEComponentTransferElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("x")));
}


SVGAnimatedLength SVGFEComponentTransferElement_y(const SVGFEComponentTransferElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("y")));
}


SVGAnimatedLength SVGFEComponentTransferElement_width(const SVGFEComponentTransferElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("width")));
}


SVGAnimatedLength SVGFEComponentTransferElement_height(const SVGFEComponentTransferElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("height")));
}


SVGAnimatedString SVGFEComponentTransferElement_result(const SVGFEComponentTransferElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("result")));
}

