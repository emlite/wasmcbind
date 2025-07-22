#include <webbind/SVGComponentTransferFunctionElement.h>
#include <webbind/SVGAnimatedEnumeration.h>
#include <webbind/SVGAnimatedNumberList.h>
#include <webbind/SVGAnimatedNumber.h>


DEFINE_EMLITE_TYPE(SVGComponentTransferFunctionElement, SVGElement);


SVGAnimatedEnumeration SVGComponentTransferFunctionElement_type(const SVGComponentTransferFunctionElement *self) {
    return em_Val_as(SVGAnimatedEnumeration, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("type")));
}


SVGAnimatedNumberList SVGComponentTransferFunctionElement_tableValues(const SVGComponentTransferFunctionElement *self) {
    return em_Val_as(SVGAnimatedNumberList, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("tableValues")));
}


SVGAnimatedNumber SVGComponentTransferFunctionElement_slope(const SVGComponentTransferFunctionElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("slope")));
}


SVGAnimatedNumber SVGComponentTransferFunctionElement_intercept(const SVGComponentTransferFunctionElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("intercept")));
}


SVGAnimatedNumber SVGComponentTransferFunctionElement_amplitude(const SVGComponentTransferFunctionElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("amplitude")));
}


SVGAnimatedNumber SVGComponentTransferFunctionElement_exponent(const SVGComponentTransferFunctionElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("exponent")));
}


SVGAnimatedNumber SVGComponentTransferFunctionElement_offset(const SVGComponentTransferFunctionElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("offset")));
}

