#include <webbind/SVGFEMergeElement.h>
#include <webbind/SVGAnimatedLength.h>
#include <webbind/SVGAnimatedString.h>


DEFINE_EMLITE_TYPE(SVGFEMergeElement, SVGElement);


SVGAnimatedLength SVGFEMergeElement_x(const SVGFEMergeElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("x")));
}


SVGAnimatedLength SVGFEMergeElement_y(const SVGFEMergeElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("y")));
}


SVGAnimatedLength SVGFEMergeElement_width(const SVGFEMergeElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("width")));
}


SVGAnimatedLength SVGFEMergeElement_height(const SVGFEMergeElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("height")));
}


SVGAnimatedString SVGFEMergeElement_result(const SVGFEMergeElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("result")));
}

