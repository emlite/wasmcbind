#include <webbind/SVGAnimatedLengthList.h>
#include <webbind/SVGLengthList.h>


DEFINE_EMLITE_TYPE(SVGAnimatedLengthList, em_Val);


SVGLengthList SVGAnimatedLengthList_baseVal(const SVGAnimatedLengthList *self) {
    return em_Val_as(SVGLengthList, em_Val_get(em_Val_as_val(self->inner), "baseVal"));
}


SVGLengthList SVGAnimatedLengthList_animVal(const SVGAnimatedLengthList *self) {
    return em_Val_as(SVGLengthList, em_Val_get(em_Val_as_val(self->inner), "animVal"));
}

