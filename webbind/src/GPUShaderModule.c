#include <webbind/GPUShaderModule.h>
#include <webbind/GPUCompilationInfo.h>


DEFINE_EMLITE_TYPE(GPUShaderModule, em_Val);


jb_Promise GPUShaderModule_getCompilationInfo(GPUShaderModule* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getCompilationInfo"));
}


jb_USVString GPUShaderModule_label(const GPUShaderModule *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "label"));
}


void GPUShaderModule_set_label(GPUShaderModule* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "label", value);
}

