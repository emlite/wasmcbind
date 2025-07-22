#include <webbind/SVGFEColorMatrixElement.h>
#include <webbind/SVGAnimatedString.h>
#include <webbind/SVGAnimatedEnumeration.h>
#include <webbind/SVGAnimatedNumberList.h>
#include <webbind/SVGAnimatedLength.h>


DEFINE_EMLITE_TYPE(SVGFEColorMatrixElement, SVGElement);


SVGAnimatedString SVGFEColorMatrixElement_in1(const SVGFEColorMatrixElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), "in1"));
}


SVGAnimatedEnumeration SVGFEColorMatrixElement_type(const SVGFEColorMatrixElement *self) {
    return em_Val_as(SVGAnimatedEnumeration, em_Val_get(SVGElement_as_val(self->inner), "type"));
}


SVGAnimatedNumberList SVGFEColorMatrixElement_values(const SVGFEColorMatrixElement *self) {
    return em_Val_as(SVGAnimatedNumberList, em_Val_get(SVGElement_as_val(self->inner), "values"));
}


SVGAnimatedLength SVGFEColorMatrixElement_x(const SVGFEColorMatrixElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "x"));
}


SVGAnimatedLength SVGFEColorMatrixElement_y(const SVGFEColorMatrixElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "y"));
}


SVGAnimatedLength SVGFEColorMatrixElement_width(const SVGFEColorMatrixElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "width"));
}


SVGAnimatedLength SVGFEColorMatrixElement_height(const SVGFEColorMatrixElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "height"));
}


SVGAnimatedString SVGFEColorMatrixElement_result(const SVGFEColorMatrixElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), "result"));
}

