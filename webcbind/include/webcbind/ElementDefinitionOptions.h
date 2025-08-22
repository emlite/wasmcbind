#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ElementDefinitionOptions */
DECLARE_EMLITE_TYPE(ElementDefinitionOptions, em_Val);

/** @brief Getter of the extends property */
jb_String ElementDefinitionOptions_extends(const ElementDefinitionOptions *self);

/** @brief Setter of the extends property */
void ElementDefinitionOptions_set_extends(ElementDefinitionOptions* self, jb_String * value);

/** @brief Constructor of the ElementDefinitionOptions dictionary type */
ElementDefinitionOptions ElementDefinitionOptions_new();

#ifdef __cplusplus
}
#endif
