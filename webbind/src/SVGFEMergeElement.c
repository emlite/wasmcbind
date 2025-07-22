#include <webbind/SVGFEMergeElement.h>
#include <webbind/SVGAnimatedLength.h>
#include <webbind/SVGAnimatedString.h>


DEFINE_EMLITE_TYPE(SVGFEMergeElement, SVGElement);


SVGAnimatedLength SVGFEMergeElement_x(const SVGFEMergeElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "x"));
}


SVGAnimatedLength SVGFEMergeElement_y(const SVGFEMergeElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "y"));
}


SVGAnimatedLength SVGFEMergeElement_width(const SVGFEMergeElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "width"));
}


SVGAnimatedLength SVGFEMergeElement_height(const SVGFEMergeElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "height"));
}


SVGAnimatedString SVGFEMergeElement_result(const SVGFEMergeElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), "result"));
}

