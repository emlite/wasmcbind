#include <webbind/GPUCanvasContext.h>

#include <webbind/GPUCanvasConfiguration.h>
#include <webbind/GPUTexture.h>

DEFINE_EMLITE_TYPE(GPUCanvasContext, em_Val);


jb_Any GPUCanvasContext_canvas(const GPUCanvasContext *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("canvas")));
}


jb_Undefined GPUCanvasContext_configure(GPUCanvasContext* self , GPUCanvasConfiguration * configuration) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "configure", em_Val_from(configuration)));
}


jb_Undefined GPUCanvasContext_unconfigure(GPUCanvasContext* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "unconfigure"));
}


GPUCanvasConfiguration GPUCanvasContext_getConfiguration(GPUCanvasContext* self ) {
    return em_Val_as(GPUCanvasConfiguration, em_Val_call(em_Val_as_val(self->inner), "getConfiguration"));
}


GPUTexture GPUCanvasContext_getCurrentTexture(GPUCanvasContext* self ) {
    return em_Val_as(GPUTexture, em_Val_call(em_Val_as_val(self->inner), "getCurrentTexture"));
}

