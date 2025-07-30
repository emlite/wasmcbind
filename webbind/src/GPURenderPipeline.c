#include <webbind/GPURenderPipeline.h>
#include <webbind/GPUBindGroupLayout.h>


DEFINE_EMLITE_TYPE(GPURenderPipeline, em_Val);


jb_String GPURenderPipeline_label(const GPURenderPipeline *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("label")));
}


void GPURenderPipeline_set_label(GPURenderPipeline* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("label"), em_Val_from(value));
}


GPUBindGroupLayout GPURenderPipeline_getBindGroupLayout(GPURenderPipeline* self , unsigned long index) {
    return em_Val_as(GPUBindGroupLayout, em_Val_call(em_Val_as_val(self->inner), "getBindGroupLayout", em_Val_from(index)));
}

