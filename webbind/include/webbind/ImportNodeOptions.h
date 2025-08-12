#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CustomElementRegistry CustomElementRegistry;

/** @brief Dictionary type ImportNodeOptions */
DECLARE_EMLITE_TYPE(ImportNodeOptions, em_Val);

/** @brief Getter of the customElementRegistry property */
CustomElementRegistry ImportNodeOptions_customElementRegistry(const ImportNodeOptions *self);

/** @brief Setter of the customElementRegistry property */
void ImportNodeOptions_set_customElementRegistry(ImportNodeOptions* self, CustomElementRegistry * value);

/** @brief Getter of the selfOnly property */
bool ImportNodeOptions_selfOnly(const ImportNodeOptions *self);

/** @brief Setter of the selfOnly property */
void ImportNodeOptions_set_selfOnly(ImportNodeOptions* self, bool value);

/** @brief Constructor of the ImportNodeOptions dictionary type */
ImportNodeOptions ImportNodeOptions_new();

#ifdef __cplusplus
}
#endif
