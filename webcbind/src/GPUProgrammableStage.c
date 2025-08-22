#include <webcbind/GPUProgrammableStage.h>

#include <webcbind/GPUShaderModule.h>

DEFINE_EMLITE_TYPE(GPUProgrammableStage, em_Val);


GPUShaderModule GPUProgrammableStage_module_(const GPUProgrammableStage *self) {
    return em_Val_as(GPUShaderModule, em_Val_get(em_Val_as_val(self->inner), em_Val_from("module")));
}


void GPUProgrammableStage_set_module_(GPUProgrammableStage* self, GPUShaderModule * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("module"), em_Val_from(value));
}


jb_String GPUProgrammableStage_entryPoint(const GPUProgrammableStage *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("entryPoint")));
}


void GPUProgrammableStage_set_entryPoint(GPUProgrammableStage* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("entryPoint"), em_Val_from(value));
}


jb_Object GPUProgrammableStage_constants(const GPUProgrammableStage *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("constants")));
}


void GPUProgrammableStage_set_constants(GPUProgrammableStage* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("constants"), em_Val_from(value));
}


GPUProgrammableStage GPUProgrammableStage_new() {
    em_Val obj = em_Val_object();
    return GPUProgrammableStage_from_val(&obj);
}

