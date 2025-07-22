#include <webbind/SVGTextPositioningElement.h>
#include <webbind/SVGAnimatedLengthList.h>
#include <webbind/SVGAnimatedNumberList.h>


DEFINE_EMLITE_TYPE(SVGTextPositioningElement, SVGTextContentElement);


SVGAnimatedLengthList SVGTextPositioningElement_x(const SVGTextPositioningElement *self) {
    return em_Val_as(SVGAnimatedLengthList, em_Val_get(SVGTextContentElement_as_val(self->inner), em_Val_from("x")));
}


SVGAnimatedLengthList SVGTextPositioningElement_y(const SVGTextPositioningElement *self) {
    return em_Val_as(SVGAnimatedLengthList, em_Val_get(SVGTextContentElement_as_val(self->inner), em_Val_from("y")));
}


SVGAnimatedLengthList SVGTextPositioningElement_dx(const SVGTextPositioningElement *self) {
    return em_Val_as(SVGAnimatedLengthList, em_Val_get(SVGTextContentElement_as_val(self->inner), em_Val_from("dx")));
}


SVGAnimatedLengthList SVGTextPositioningElement_dy(const SVGTextPositioningElement *self) {
    return em_Val_as(SVGAnimatedLengthList, em_Val_get(SVGTextContentElement_as_val(self->inner), em_Val_from("dy")));
}


SVGAnimatedNumberList SVGTextPositioningElement_rotate(const SVGTextPositioningElement *self) {
    return em_Val_as(SVGAnimatedNumberList, em_Val_get(SVGTextContentElement_as_val(self->inner), em_Val_from("rotate")));
}

