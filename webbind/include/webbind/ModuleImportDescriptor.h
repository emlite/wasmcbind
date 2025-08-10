#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ModuleImportDescriptor, em_Val);

jb_String ModuleImportDescriptor_module_(const ModuleImportDescriptor *self);

void ModuleImportDescriptor_set_module_(ModuleImportDescriptor* self, jb_String * value);

jb_String ModuleImportDescriptor_name(const ModuleImportDescriptor *self);

void ModuleImportDescriptor_set_name(ModuleImportDescriptor* self, jb_String * value);

ImportExportKind ModuleImportDescriptor_kind(const ModuleImportDescriptor *self);

void ModuleImportDescriptor_set_kind(ModuleImportDescriptor* self, ImportExportKind * value);

ModuleImportDescriptor ModuleImportDescriptor_new();

#ifdef __cplusplus
}
#endif
