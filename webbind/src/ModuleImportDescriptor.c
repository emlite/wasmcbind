#include <webbind/ModuleImportDescriptor.h>

DEFINE_EMLITE_TYPE(ModuleImportDescriptor, em_Val);


jb_String ModuleImportDescriptor_module_(const ModuleImportDescriptor *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("module")));
}


void ModuleImportDescriptor_set_module_(ModuleImportDescriptor* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("module"), em_Val_from(value));
}


jb_String ModuleImportDescriptor_name(const ModuleImportDescriptor *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


void ModuleImportDescriptor_set_name(ModuleImportDescriptor* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


ImportExportKind ModuleImportDescriptor_kind(const ModuleImportDescriptor *self) {
    return em_Val_as(ImportExportKind, em_Val_get(em_Val_as_val(self->inner), em_Val_from("kind")));
}


void ModuleImportDescriptor_set_kind(ModuleImportDescriptor* self, ImportExportKind * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("kind"), em_Val_from(value));
}


ModuleImportDescriptor ModuleImportDescriptor_new() {
    em_Val obj = em_Val_object();
    return ModuleImportDescriptor_from_val(&obj);
}

