#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ModuleImportDescriptor */
DECLARE_EMLITE_TYPE(ModuleImportDescriptor, em_Val);

/** @brief Getter of the module property */
jb_String ModuleImportDescriptor_module_(const ModuleImportDescriptor *self);

/** @brief Setter of the module property */
void ModuleImportDescriptor_set_module_(ModuleImportDescriptor* self, jb_String * value);

/** @brief Getter of the name property */
jb_String ModuleImportDescriptor_name(const ModuleImportDescriptor *self);

/** @brief Setter of the name property */
void ModuleImportDescriptor_set_name(ModuleImportDescriptor* self, jb_String * value);

/** @brief Getter of the kind property */
ImportExportKind ModuleImportDescriptor_kind(const ModuleImportDescriptor *self);

/** @brief Setter of the kind property */
void ModuleImportDescriptor_set_kind(ModuleImportDescriptor* self, ImportExportKind * value);

/** @brief Constructor of the ModuleImportDescriptor dictionary type */
ModuleImportDescriptor ModuleImportDescriptor_new();

#ifdef __cplusplus
}
#endif
