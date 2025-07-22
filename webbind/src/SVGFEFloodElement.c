#include <webbind/SVGFEFloodElement.h>
#include <webbind/SVGAnimatedLength.h>
#include <webbind/SVGAnimatedString.h>


DEFINE_EMLITE_TYPE(SVGFEFloodElement, SVGElement);


SVGAnimatedLength SVGFEFloodElement_x(const SVGFEFloodElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "x"));
}


SVGAnimatedLength SVGFEFloodElement_y(const SVGFEFloodElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "y"));
}


SVGAnimatedLength SVGFEFloodElement_width(const SVGFEFloodElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "width"));
}


SVGAnimatedLength SVGFEFloodElement_height(const SVGFEFloodElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGElement_as_val(self->inner), "height"));
}


SVGAnimatedString SVGFEFloodElement_result(const SVGFEFloodElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(SVGElement_as_val(self->inner), "result"));
}

