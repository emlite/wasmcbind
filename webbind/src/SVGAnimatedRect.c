#include <webbind/SVGAnimatedRect.h>
#include <webbind/DOMRect.h>
#include <webbind/DOMRectReadOnly.h>


DEFINE_EMLITE_TYPE(SVGAnimatedRect, em_Val);


DOMRect SVGAnimatedRect_baseVal(const SVGAnimatedRect *self) {
    return em_Val_as(DOMRect, em_Val_get(em_Val_as_val(self->inner), em_Val_from("baseVal")));
}


DOMRectReadOnly SVGAnimatedRect_animVal(const SVGAnimatedRect *self) {
    return em_Val_as(DOMRectReadOnly, em_Val_get(em_Val_as_val(self->inner), em_Val_from("animVal")));
}

