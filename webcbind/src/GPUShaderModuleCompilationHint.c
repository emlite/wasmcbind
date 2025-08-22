#include <webcbind/GPUShaderModuleCompilationHint.h>

DEFINE_EMLITE_TYPE(GPUShaderModuleCompilationHint, em_Val);


jb_String GPUShaderModuleCompilationHint_entryPoint(const GPUShaderModuleCompilationHint *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("entryPoint")));
}


void GPUShaderModuleCompilationHint_set_entryPoint(GPUShaderModuleCompilationHint* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("entryPoint"), em_Val_from(value));
}


jb_Any GPUShaderModuleCompilationHint_layout(const GPUShaderModuleCompilationHint *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("layout")));
}


void GPUShaderModuleCompilationHint_set_layout(GPUShaderModuleCompilationHint* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("layout"), em_Val_from(value));
}


GPUShaderModuleCompilationHint GPUShaderModuleCompilationHint_new() {
    em_Val obj = em_Val_object();
    return GPUShaderModuleCompilationHint_from_val(&obj);
}

