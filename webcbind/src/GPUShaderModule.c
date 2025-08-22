#include <webcbind/GPUShaderModule.h>

#include <webcbind/GPUCompilationInfo.h>

DEFINE_EMLITE_TYPE(GPUShaderModule, em_Val);


jb_Promise GPUShaderModule_getCompilationInfo(GPUShaderModule* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getCompilationInfo"));
}


jb_String GPUShaderModule_label(const GPUShaderModule *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("label")));
}


void GPUShaderModule_set_label(GPUShaderModule* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("label"), em_Val_from(value));
}

