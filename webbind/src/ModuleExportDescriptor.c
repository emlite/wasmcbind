#include <webbind/ModuleExportDescriptor.h>

DEFINE_EMLITE_TYPE(ModuleExportDescriptor, em_Val);


jb_String ModuleExportDescriptor_name(const ModuleExportDescriptor *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


void ModuleExportDescriptor_set_name(ModuleExportDescriptor* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


ImportExportKind ModuleExportDescriptor_kind(const ModuleExportDescriptor *self) {
    return em_Val_as(ImportExportKind, em_Val_get(em_Val_as_val(self->inner), em_Val_from("kind")));
}


void ModuleExportDescriptor_set_kind(ModuleExportDescriptor* self, ImportExportKind * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("kind"), em_Val_from(value));
}


ModuleExportDescriptor ModuleExportDescriptor_new() {
    em_Val obj = em_Val_object();
    return ModuleExportDescriptor_from_val(&obj);
}

