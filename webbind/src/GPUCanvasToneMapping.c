#include <webbind/GPUCanvasToneMapping.h>

DEFINE_EMLITE_TYPE(GPUCanvasToneMapping, em_Val);


GPUCanvasToneMappingMode GPUCanvasToneMapping_mode(const GPUCanvasToneMapping *self) {
    return em_Val_as(GPUCanvasToneMappingMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mode")));
}


void GPUCanvasToneMapping_set_mode(GPUCanvasToneMapping* self, GPUCanvasToneMappingMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mode"), em_Val_from(value));
}


GPUCanvasToneMapping GPUCanvasToneMapping_new() {
    em_Val obj = em_Val_object();
    return GPUCanvasToneMapping_from_val(&obj);
}

