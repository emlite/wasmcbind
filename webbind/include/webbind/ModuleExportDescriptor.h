#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ModuleExportDescriptor */
DECLARE_EMLITE_TYPE(ModuleExportDescriptor, em_Val);

/** @brief Getter of the name property */
jb_String ModuleExportDescriptor_name(const ModuleExportDescriptor *self);

/** @brief Setter of the name property */
void ModuleExportDescriptor_set_name(ModuleExportDescriptor* self, jb_String * value);

/** @brief Getter of the kind property */
ImportExportKind ModuleExportDescriptor_kind(const ModuleExportDescriptor *self);

/** @brief Setter of the kind property */
void ModuleExportDescriptor_set_kind(ModuleExportDescriptor* self, ImportExportKind * value);

/** @brief Constructor of the ModuleExportDescriptor dictionary type */
ModuleExportDescriptor ModuleExportDescriptor_new();

#ifdef __cplusplus
}
#endif
