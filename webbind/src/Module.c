#include <webbind/Module.h>


DEFINE_EMLITE_TYPE(ModuleExportDescriptor, em_Val);


jb_USVString ModuleExportDescriptor_name(const ModuleExportDescriptor *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "name"));
}


void ModuleExportDescriptor_set_name(ModuleExportDescriptor* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "name", value);
}


ImportExportKind ModuleExportDescriptor_kind(const ModuleExportDescriptor *self) {
    return em_Val_as(ImportExportKind, em_Val_get(em_Val_as_val(self->inner), "kind"));
}


void ModuleExportDescriptor_set_kind(ModuleExportDescriptor* self, const ImportExportKind* value) {
    em_Val_set(em_Val_as_val(self->inner), "kind", value);
}

DEFINE_EMLITE_TYPE(ModuleImportDescriptor, em_Val);


jb_USVString ModuleImportDescriptor_module_(const ModuleImportDescriptor *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "module"));
}


void ModuleImportDescriptor_set_module_(ModuleImportDescriptor* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "module", value);
}


jb_USVString ModuleImportDescriptor_name(const ModuleImportDescriptor *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "name"));
}


void ModuleImportDescriptor_set_name(ModuleImportDescriptor* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "name", value);
}


ImportExportKind ModuleImportDescriptor_kind(const ModuleImportDescriptor *self) {
    return em_Val_as(ImportExportKind, em_Val_get(em_Val_as_val(self->inner), "kind"));
}


void ModuleImportDescriptor_set_kind(ModuleImportDescriptor* self, const ImportExportKind* value) {
    em_Val_set(em_Val_as_val(self->inner), "kind", value);
}

DEFINE_EMLITE_TYPE(Module, em_Val);


Module Module_new(const jb_Any* bytes) : em_Val(em_Val_global("Module").new_(em_Val_from(bytes))) {
        return Module(em_Val_new(em_Val_global("Module", em_Val_from(bytes)));
      }


jb_Sequence Module_exports(Module* self , const Module* moduleObject) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_global("module"), "exports", em_Val_from(moduleObject)));
}


jb_Sequence Module_imports(Module* self , const Module* moduleObject) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_global("module"), "imports", em_Val_from(moduleObject)));
}


jb_Sequence Module_customSections(Module* self , const Module* moduleObject, const jb_DOMString* sectionName) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_global("module"), "customSections", em_Val_from(moduleObject), em_Val_from(sectionName)));
}

