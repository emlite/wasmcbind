#include <webbind/SVGAnimatedNumberList.h>
#include <webbind/SVGNumberList.h>


DEFINE_EMLITE_TYPE(SVGAnimatedNumberList, em_Val);


SVGNumberList SVGAnimatedNumberList_baseVal(const SVGAnimatedNumberList *self) {
    return em_Val_as(SVGNumberList, em_Val_get(em_Val_as_val(self->inner), em_Val_from("baseVal")));
}


SVGNumberList SVGAnimatedNumberList_animVal(const SVGAnimatedNumberList *self) {
    return em_Val_as(SVGNumberList, em_Val_get(em_Val_as_val(self->inner), em_Val_from("animVal")));
}

