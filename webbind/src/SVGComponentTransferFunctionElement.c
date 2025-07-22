#include <webbind/SVGComponentTransferFunctionElement.h>
#include <webbind/SVGAnimatedEnumeration.h>
#include <webbind/SVGAnimatedNumberList.h>
#include <webbind/SVGAnimatedNumber.h>


DEFINE_EMLITE_TYPE(SVGComponentTransferFunctionElement, SVGElement);


SVGAnimatedEnumeration SVGComponentTransferFunctionElement_type(const SVGComponentTransferFunctionElement *self) {
    return em_Val_as(SVGAnimatedEnumeration, em_Val_get(SVGElement_as_val(self->inner), "type"));
}


SVGAnimatedNumberList SVGComponentTransferFunctionElement_tableValues(const SVGComponentTransferFunctionElement *self) {
    return em_Val_as(SVGAnimatedNumberList, em_Val_get(SVGElement_as_val(self->inner), "tableValues"));
}


SVGAnimatedNumber SVGComponentTransferFunctionElement_slope(const SVGComponentTransferFunctionElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), "slope"));
}


SVGAnimatedNumber SVGComponentTransferFunctionElement_intercept(const SVGComponentTransferFunctionElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), "intercept"));
}


SVGAnimatedNumber SVGComponentTransferFunctionElement_amplitude(const SVGComponentTransferFunctionElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), "amplitude"));
}


SVGAnimatedNumber SVGComponentTransferFunctionElement_exponent(const SVGComponentTransferFunctionElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), "exponent"));
}


SVGAnimatedNumber SVGComponentTransferFunctionElement_offset(const SVGComponentTransferFunctionElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), "offset"));
}

