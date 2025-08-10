#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ModuleExportDescriptor ModuleExportDescriptor;
typedef struct ModuleImportDescriptor ModuleImportDescriptor;

DECLARE_EMLITE_TYPE(Module, em_Val);

Module Module_new(jb_Any * bytes);

jb_Array Module_exports(Module* self , Module * moduleObject);

jb_Array Module_imports(Module* self , Module * moduleObject);

jb_Array Module_customSections(Module* self , Module * moduleObject, jb_String * sectionName);

#ifdef __cplusplus
}
#endif
