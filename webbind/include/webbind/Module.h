#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ModuleExportDescriptor ModuleExportDescriptor;
typedef struct ModuleImportDescriptor ModuleImportDescriptor;


/**
 * @brief Interface Module
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Module)
 */
DECLARE_EMLITE_TYPE(Module, em_Val);

/**
 * @brief Creates a new `Module` object. 
*/
Module Module_new(jb_Any * bytes);

/**
 * @brief Calls the `exports` method. 
*/
jb_Array Module_exports(Module* self , Module * moduleObject);

/**
 * @brief Calls the `imports` method. 
*/
jb_Array Module_imports(Module* self , Module * moduleObject);

/**
 * @brief Calls the `customSections` method. 
*/
jb_Array Module_customSections(Module* self , Module * moduleObject, jb_String * sectionName);

#ifdef __cplusplus
}
#endif
