#include <webbind/SVGTextPositioningElement.h>
#include <webbind/SVGAnimatedLengthList.h>
#include <webbind/SVGAnimatedNumberList.h>


DEFINE_EMLITE_TYPE(SVGTextPositioningElement, SVGTextContentElement);


SVGAnimatedLengthList SVGTextPositioningElement_x(const SVGTextPositioningElement *self) {
    return em_Val_as(SVGAnimatedLengthList, em_Val_get(SVGTextContentElement_as_val(self->inner), "x"));
}


SVGAnimatedLengthList SVGTextPositioningElement_y(const SVGTextPositioningElement *self) {
    return em_Val_as(SVGAnimatedLengthList, em_Val_get(SVGTextContentElement_as_val(self->inner), "y"));
}


SVGAnimatedLengthList SVGTextPositioningElement_dx(const SVGTextPositioningElement *self) {
    return em_Val_as(SVGAnimatedLengthList, em_Val_get(SVGTextContentElement_as_val(self->inner), "dx"));
}


SVGAnimatedLengthList SVGTextPositioningElement_dy(const SVGTextPositioningElement *self) {
    return em_Val_as(SVGAnimatedLengthList, em_Val_get(SVGTextContentElement_as_val(self->inner), "dy"));
}


SVGAnimatedNumberList SVGTextPositioningElement_rotate(const SVGTextPositioningElement *self) {
    return em_Val_as(SVGAnimatedNumberList, em_Val_get(SVGTextContentElement_as_val(self->inner), "rotate"));
}

