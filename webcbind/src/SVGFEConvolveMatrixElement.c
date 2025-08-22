#include <webcbind/SVGFEConvolveMatrixElement.h>

#include <webcbind/SVGAnimatedString.h>
#include <webcbind/SVGAnimatedInteger.h>
#include <webcbind/SVGAnimatedNumberList.h>
#include <webcbind/SVGAnimatedNumber.h>
#include <webcbind/SVGAnimatedEnumeration.h>
#include <webcbind/SVGAnimatedBoolean.h>
#include <webcbind/SVGAnimatedLength.h>

DEFINE_EMLITE_TYPE(SVGFEConvolveMatrixElement, SVGElement);


SVGAnimatedString SVGFEConvolveMatrixElement_in1(const SVGFEConvolveMatrixElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("in1")));
}


SVGAnimatedInteger SVGFEConvolveMatrixElement_orderX(const SVGFEConvolveMatrixElement *self) {
    return em_Val_as(SVGAnimatedInteger, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("orderX")));
}


SVGAnimatedInteger SVGFEConvolveMatrixElement_orderY(const SVGFEConvolveMatrixElement *self) {
    return em_Val_as(SVGAnimatedInteger, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("orderY")));
}


SVGAnimatedNumberList SVGFEConvolveMatrixElement_kernelMatrix(const SVGFEConvolveMatrixElement *self) {
    return em_Val_as(SVGAnimatedNumberList, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("kernelMatrix")));
}


SVGAnimatedNumber SVGFEConvolveMatrixElement_divisor(const SVGFEConvolveMatrixElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("divisor")));
}


SVGAnimatedNumber SVGFEConvolveMatrixElement_bias(const SVGFEConvolveMatrixElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("bias")));
}


SVGAnimatedInteger SVGFEConvolveMatrixElement_targetX(const SVGFEConvolveMatrixElement *self) {
    return em_Val_as(SVGAnimatedInteger, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("targetX")));
}


SVGAnimatedInteger SVGFEConvolveMatrixElement_targetY(const SVGFEConvolveMatrixElement *self) {
    return em_Val_as(SVGAnimatedInteger, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("targetY")));
}


SVGAnimatedEnumeration SVGFEConvolveMatrixElement_edgeMode(const SVGFEConvolveMatrixElement *self) {
    return em_Val_as(SVGAnimatedEnumeration, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("edgeMode")));
}


SVGAnimatedNumber SVGFEConvolveMatrixElement_kernelUnitLengthX(const SVGFEConvolveMatrixElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("kernelUnitLengthX")));
}


SVGAnimatedNumber SVGFEConvolveMatrixElement_kernelUnitLengthY(const SVGFEConvolveMatrixElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("kernelUnitLengthY")));
}


SVGAnimatedBoolean SVGFEConvolveMatrixElement_preserveAlpha(const SVGFEConvolveMatrixElement *self) {
    return em_Val_as(SVGAnimatedBoolean, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("preserveAlpha")));
}


SVGAnimatedLength SVGFEConvolveMatrixElement_x(const SVGFEConvolveMatrixElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("x")));
}


SVGAnimatedLength SVGFEConvolveMatrixElement_y(const SVGFEConvolveMatrixElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("y")));
}


SVGAnimatedLength SVGFEConvolveMatrixElement_width(const SVGFEConvolveMatrixElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("width")));
}


SVGAnimatedLength SVGFEConvolveMatrixElement_height(const SVGFEConvolveMatrixElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("height")));
}


SVGAnimatedString SVGFEConvolveMatrixElement_result(const SVGFEConvolveMatrixElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("result")));
}

