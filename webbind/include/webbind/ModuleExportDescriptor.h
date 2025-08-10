#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ModuleExportDescriptor, em_Val);

jb_String ModuleExportDescriptor_name(const ModuleExportDescriptor *self);

void ModuleExportDescriptor_set_name(ModuleExportDescriptor* self, jb_String * value);

ImportExportKind ModuleExportDescriptor_kind(const ModuleExportDescriptor *self);

void ModuleExportDescriptor_set_kind(ModuleExportDescriptor* self, ImportExportKind * value);

ModuleExportDescriptor ModuleExportDescriptor_new();

#ifdef __cplusplus
}
#endif
