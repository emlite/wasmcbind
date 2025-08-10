#include <webbind/SVGFEMergeNodeElement.h>

#include <webbind/SVGAnimatedString.h>

DEFINE_EMLITE_TYPE(SVGFEMergeNodeElement, SVGElement);


SVGAnimatedString SVGFEMergeNodeElement_in1(const SVGFEMergeNodeElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("in1")));
}

