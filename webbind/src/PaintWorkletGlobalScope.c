#include <webbind/PaintWorkletGlobalScope.h>


DEFINE_EMLITE_TYPE(PaintWorkletGlobalScope, WorkletGlobalScope);


jb_Undefined PaintWorkletGlobalScope_registerPaint(PaintWorkletGlobalScope* self , const jb_DOMString* name, const jb_Any* paintCtor) {
    return em_Val_as(jb_Undefined, em_Val_call(WorkletGlobalScope_as_val(self->inner), "registerPaint", em_Val_from(name), em_Val_from(paintCtor)));
}


double PaintWorkletGlobalScope_devicePixelRatio(const PaintWorkletGlobalScope *self) {
    return em_Val_as(double, em_Val_get(WorkletGlobalScope_as_val(self->inner), "devicePixelRatio"));
}

