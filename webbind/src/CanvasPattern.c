#include <webbind/CanvasPattern.h>
#include <webbind/SVGSVGElement.h>


DEFINE_EMLITE_TYPE(CanvasPattern, em_Val);


jb_Undefined CanvasPattern_setTransform(CanvasPattern* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setTransform"));
}


jb_Undefined CanvasPattern_setTransform(CanvasPattern* self , const DOMMatrix2DInit* transform) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setTransform", em_Val_from(transform)));
}

