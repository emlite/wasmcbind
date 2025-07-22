#include <webbind/SVGFEConvolveMatrixElement.h>
#include <webbind/SVGAnimatedString.h>
#include <webbind/SVGAnimatedInteger.h>
#include <webbind/SVGAnimatedNumberList.h>
#include <webbind/SVGAnimatedNumber.h>
#include <webbind/SVGAnimatedEnumeration.h>
#include <webbind/SVGAnimatedBoolean.h>
#include <webbind/SVGAnimatedLength.h>


DEFINE_EMLITE_TYPE(SVGFEConvolveMatrixElement, SVGElement);


SVGAnimatedString SVGFEConvolveMatrixElement_in1(const SVGFEConvolveMatrixElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), "in1"));
}


SVGAnimatedInteger SVGFEConvolveMatrixElement_orderX(const SVGFEConvolveMatrixElement *self) {
    return em_Val_as(SVGAnimatedInteger, em_Val_get(SVGElement_as_val(self->inner), "orderX"));
}


SVGAnimatedInteger SVGFEConvolveMatrixElement_orderY(const SVGFEConvolveMatrixElement *self) {
    return em_Val_as(SVGAnimatedInteger, em_Val_get(SVGElement_as_val(self->inner), "orderY"));
}


SVGAnimatedNumberList SVGFEConvolveMatrixElement_kernelMatrix(const SVGFEConvolveMatrixElement *self) {
    return em_Val_as(SVGAnimatedNumberList, em_Val_get(SVGElement_as_val(self->inner), "kernelMatrix"));
}


SVGAnimatedNumber SVGFEConvolveMatrixElement_divisor(const SVGFEConvolveMatrixElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), "divisor"));
}


SVGAnimatedNumber SVGFEConvolveMatrixElement_bias(const SVGFEConvolveMatrixElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), "bias"));
}


SVGAnimatedInteger SVGFEConvolveMatrixElement_targetX(const SVGFEConvolveMatrixElement *self) {
    return em_Val_as(SVGAnimatedInteger, em_Val_get(SVGElement_as_val(self->inner), "targetX"));
}


SVGAnimatedInteger SVGFEConvolveMatrixElement_targetY(const SVGFEConvolveMatrixElement *self) {
    return em_Val_as(SVGAnimatedInteger, em_Val_get(SVGElement_as_val(self->inner), "targetY"));
}


SVGAnimatedEnumeration SVGFEConvolveMatrixElement_edgeMode(const SVGFEConvolveMatrixElement *self) {
    return em_Val_as(SVGAnimatedEnumeration, em_Val_get(SVGElement_as_val(self->inner), "edgeMode"));
}


SVGAnimatedNumber SVGFEConvolveMatrixElement_kernelUnitLengthX(const SVGFEConvolveMatrixElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), "kernelUnitLengthX"));
}


SVGAnimatedNumber SVGFEConvolveMatrixElement_kernelUnitLengthY(const SVGFEConvolveMatrixElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), "kernelUnitLengthY"));
}


SVGAnimatedBoolean SVGFEConvolveMatrixElement_preserveAlpha(const SVGFEConvolveMatrixElement *self) {
    return em_Val_as(SVGAnimatedBoolean, em_Val_get(SVGElement_as_val(self->inner), "preserveAlpha"));
}


SVGAnimatedLength SVGFEConvolveMatrixElement_x(const SVGFEConvolveMatrixElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "x"));
}


SVGAnimatedLength SVGFEConvolveMatrixElement_y(const SVGFEConvolveMatrixElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "y"));
}


SVGAnimatedLength SVGFEConvolveMatrixElement_width(const SVGFEConvolveMatrixElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "width"));
}


SVGAnimatedLength SVGFEConvolveMatrixElement_height(const SVGFEConvolveMatrixElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "height"));
}


SVGAnimatedString SVGFEConvolveMatrixElement_result(const SVGFEConvolveMatrixElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), "result"));
}

