#include <webbind/CanvasGradient.h>


DEFINE_EMLITE_TYPE(CanvasGradient, em_Val);


jb_Undefined CanvasGradient_addColorStop(CanvasGradient* self , double offset, jb_String * color) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "addColorStop", em_Val_from(offset), em_Val_from(color)));
}

