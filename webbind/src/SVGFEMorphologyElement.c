#include <webbind/SVGFEMorphologyElement.h>
#include <webbind/SVGAnimatedString.h>
#include <webbind/SVGAnimatedEnumeration.h>
#include <webbind/SVGAnimatedNumber.h>
#include <webbind/SVGAnimatedLength.h>


DEFINE_EMLITE_TYPE(SVGFEMorphologyElement, SVGElement);


SVGAnimatedString SVGFEMorphologyElement_in1(const SVGFEMorphologyElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), "in1"));
}


SVGAnimatedEnumeration SVGFEMorphologyElement_operator_(const SVGFEMorphologyElement *self) {
    return em_Val_as(SVGAnimatedEnumeration, em_Val_get(SVGElement_as_val(self->inner), "operator"));
}


SVGAnimatedNumber SVGFEMorphologyElement_radiusX(const SVGFEMorphologyElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), "radiusX"));
}


SVGAnimatedNumber SVGFEMorphologyElement_radiusY(const SVGFEMorphologyElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGElement_as_val(self->inner), "radiusY"));
}


SVGAnimatedLength SVGFEMorphologyElement_x(const SVGFEMorphologyElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "x"));
}


SVGAnimatedLength SVGFEMorphologyElement_y(const SVGFEMorphologyElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "y"));
}


SVGAnimatedLength SVGFEMorphologyElement_width(const SVGFEMorphologyElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "width"));
}


SVGAnimatedLength SVGFEMorphologyElement_height(const SVGFEMorphologyElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "height"));
}


SVGAnimatedString SVGFEMorphologyElement_result(const SVGFEMorphologyElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), "result"));
}

