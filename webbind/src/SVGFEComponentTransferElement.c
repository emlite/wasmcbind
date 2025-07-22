#include <webbind/SVGFEComponentTransferElement.h>
#include <webbind/SVGAnimatedString.h>
#include <webbind/SVGAnimatedLength.h>


DEFINE_EMLITE_TYPE(SVGFEComponentTransferElement, SVGElement);


SVGAnimatedString SVGFEComponentTransferElement_in1(const SVGFEComponentTransferElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), "in1"));
}


SVGAnimatedLength SVGFEComponentTransferElement_x(const SVGFEComponentTransferElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "x"));
}


SVGAnimatedLength SVGFEComponentTransferElement_y(const SVGFEComponentTransferElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "y"));
}


SVGAnimatedLength SVGFEComponentTransferElement_width(const SVGFEComponentTransferElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "width"));
}


SVGAnimatedLength SVGFEComponentTransferElement_height(const SVGFEComponentTransferElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "height"));
}


SVGAnimatedString SVGFEComponentTransferElement_result(const SVGFEComponentTransferElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), "result"));
}

